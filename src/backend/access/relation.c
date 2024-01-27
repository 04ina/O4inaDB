/*------------------------------------------------------------------------- 
 *
 * relation.c
 * 
 * functions for working with relationships
 * 
 * IDENTIFICATION 
 *      src/backend/access/relation.c
 *       
 *------------------------------------------------------------------------- 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#include <relation.h>


#define PUSH_TUPLES_BY_COMPARISON_NUMERICAL(_type_, _comparison_) \
do \
{ \
    for (int i = 0; i < rel->tup_n; i++) { \
        if (*( (_type_ *) (cur_tup->data + offset)) _comparison_ val) \
            PushBackTupleList(new_rel, cur_tup->data, rel->tup_size); \
        cur_tup = cur_tup->next; \
    } \
} while(0)

#define PUSH_TUPLES_BY_COMPARISON_STRING(_comparison_) \
do \
{ \
    for (int i = 0; i < rel->tup_n; i++) \
    { \
        if (memcmp(((char*)cur_tup->data + offset), buf, rel->att[att_num].size) _comparison_ 0) \
            PushBackTupleList(new_rel, cur_tup->data, rel->tup_size); \
        cur_tup = cur_tup->next; \
    } \
} while(0)

#define MERGE_SORT_LOOP_INT32(_comparison_) \
do \
{ \
    for (int step = 0; step < (r - l + 1); step++) \
    { \
        if ((j > r) || \
            ((i <= mid) && (val_arr[i] _comparison_ val_arr[j]))) \
        { \
            tmp1[step] = val_arr[i]; \
            tmp2[step] = tup_arr[i]; \
            i++; \
        } \
        else \
        { \
            tmp1[step] = val_arr[j]; \
            tmp2[step] = tup_arr[j]; \
            j++; \
        } \
    } \
} while(0)

static void 
print_strip(Relation *rel, int32 *column_width);


Relation *
CopyRelationWithNoData(Relation *rel) 
{
    Relation* new_rel;

    new_rel = (Relation *) malloc(sizeof(Relation)); 
    CHECK_MALLOC_WORK(new_rel);

    new_rel->tup_n = 0;
    new_rel->att_n = rel->att_n;

    new_rel->att = (RelAttribute *) calloc(rel->att_n, sizeof(RelAttribute)); 
    CHECK_MALLOC_WORK(new_rel->att);

    for (int i = 0; i < rel->att_n; i++) 
    {
        new_rel->att[i].name = (char *) malloc(strlen(rel->att[i].name) + 1); 
        CHECK_MALLOC_WORK(new_rel->att[i].name);

        strcpy(new_rel->att[i].name, rel->att[i].name);
        new_rel->att[i].type = rel->att[i].type;
        new_rel->att[i].size = rel->att[i].size;
    }
    new_rel->tup_size = 0;
    for (int i = 0; i < rel->att_n; i++)
        new_rel->tup_size += rel->att[i].size;

    new_rel->tup.head = NULL;
    new_rel->tup.end = NULL;
    return new_rel;
}

Relation * 
CopyRelation(Relation *rel) 
{
    Relation        *new_rel;
    RelTupleNode    *cur_tup;

    new_rel = CopyRelationWithNoData(rel);
    cur_tup = rel->tup.head;
    for (int i = 0; i < rel->tup_n; i++) 
    {
        PushBackTupleList(new_rel, cur_tup->data, rel->tup_size);
        cur_tup = cur_tup->next;
    }
    return new_rel;
}

void 
WriteRelation(Relation *rel, const char *name) 
{
    FILE            *fp;
    RelTupleNode    *cur_tup;
    FOPEN(fp, name, "wb");

    cur_tup = rel->tup.head;
    for (int i = 0; i < rel->tup_n; i++) 
    {
        FWRITE(cur_tup->data, rel->tup_size, 1, fp);
        cur_tup = cur_tup->next;
    }
    fclose(fp);
}

void 
ReadRelation(Relation* rel, const char* name) 
{
    Pointer     buf;
    FILE        *fp;

    buf = (Pointer) malloc(rel->tup_size); 
    CHECK_MALLOC_WORK(buf);
    
    FOPEN(fp, name, "rb");

    for(;;) 
    {
        if (fread(buf, rel->tup_size, 1, fp) != 1) break;
        PushBackTupleList(rel, buf, rel->tup_size);
    }

    fclose(fp);
}

void 
PushBackTupleList(Relation *rel, Pointer data, Size size) 
{
    RelTupleNode    *new_tuple; 

    new_tuple = (RelTupleNode *) malloc(sizeof(RelTupleNode)); 
    CHECK_MALLOC_WORK(new_tuple);

    new_tuple->data = (Pointer) malloc(size); 
    CHECK_MALLOC_WORK(new_tuple->data);

    memcpy(new_tuple->data, data, size);
    new_tuple->next = NULL;

    if (rel->tup.head == NULL) 
    {
        rel->tup.head = new_tuple;
        rel->tup.end = new_tuple;
    }
    else 
    {
        rel->tup.end->next = new_tuple;
        rel->tup.end = new_tuple;
    }
    rel->tup_n++;
}

void 
DeleteRelation(Relation *rel) 
{
    RelTupleNode    *cur_tup = rel->tup.head;
    RelTupleNode    *cur_tup_buf = NULL;

    while (rel->tup_n != 0) 
    {
        cur_tup_buf = cur_tup;
        cur_tup = cur_tup->next;
        free(cur_tup_buf->data);
        free(cur_tup_buf);
        rel->tup_n--;
    }

    for (int i = 0; rel->tup_n != 0; i++) 
    {
        free(rel->att[i].name);
        rel->att_n--;
    }

    free(rel->att);
    free(rel);
}

Relation * 
InitRelation(RelAttribute *att, int32 att_n)
{
    Relation    *rel;
    Size        tup_size = 0;

    rel = (Relation *) malloc(sizeof(Relation)); 
    CHECK_MALLOC_WORK(rel);

    rel->att_n = att_n;
    rel->att = att;
    rel->tup_n = 0;

    for (int i = 0; i < rel->att_n; i++)
        tup_size += rel->att[i].size;

    rel->tup_size = tup_size;

    rel->tup.head = NULL;
    rel->tup.end = NULL;

    return rel;
}


bool
CheckExistTuple_Arrchar(Relation *rel, int32 att_num, 
                        const char *str)
{
    bool            found = false; 
    int32           offset = 0;
    Pointer         buf;
    RelTupleNode    *cur_tup;
    int32           att_size;

    // buffer for comparison 
    buf = (Pointer) malloc(sizeof(char) * rel->att[att_num].size);
    CHECK_MALLOC_WORK(buf);

    memset(buf, ' ', rel->att[att_num].size);

    if (rel->att[att_num].size > strlen(str)) 
        memcpy(buf, str, strlen(str));
    else 
        memcpy(buf, str, rel->att[att_num].size);

    GET_ATTRIBUTE_OFFSET(offset, att_num);

    // Search desired tuple 
    cur_tup = rel->tup.head;
    for (int i = 0; i < rel->tup_n; i++) 
    {
        if (memcmp(((char*)cur_tup->data + offset), buf, rel->att[att_num].size) == 0) // rel->att[att_num].size) == 0
        {
            found = true; 
            break;
        }
        cur_tup = cur_tup->next;
    }

    free(buf);

    return found;
}

bool
CheckExistTuple_TwoArrchar(Relation *rel, 
                           int32 att_num1, const char *str1, 
                           int32 att_num2, const char *str2)
{
    bool            found = false; 
    int32           offset1 = 0;
    int32           offset2 = 0;
    Pointer         buf1;
    Pointer         buf2;
    RelTupleNode    *cur_tup;

    // buffer1 for comparison 
    buf1 = (Pointer) malloc(rel->att[att_num1].size);
    memset(buf1, ' ', rel->att[att_num1].size);
    if (rel->att[att_num1].size > strlen(str1)) 
        memcpy(buf1, str1, strlen(str1));
    else 
        memcpy(buf2, str1, rel->att[att_num1].size);


    // buffer2 for comparison
    buf2 = (Pointer) malloc(sizeof(char) * rel->att[att_num2].size);
    memset(buf2, ' ', rel->att[att_num2].size);
    if (rel->att[att_num2].size > strlen(str2)) 
        memcpy(buf2, str2, strlen(str2));
    else 
        memcpy(buf2, str2, rel->att[att_num2].size);

    // get offsets
    offset1 = 0;
    GET_ATTRIBUTE_OFFSET(offset1, att_num1);

    offset2 = 0;
    GET_ATTRIBUTE_OFFSET(offset2, att_num2);

    // Search desired tuple 
    cur_tup = rel->tup.head;
    for (int i = 0; i < rel->tup_n; i++) 
    {
        if (memcmp(((char*)cur_tup->data + offset1), buf1, rel->att[att_num1].size) == 0)
        {
            if (memcmp(((char*)cur_tup->data + offset2), buf2, rel->att[att_num2].size) == 0)
            {
                found = true; 
                break;
            }
        }
        cur_tup = cur_tup->next;
    }

    return found;
}

Relation *
WhereRelation_int32(Relation** rel_arg, ComparisonType comparison, 
                     int32 att_num, int32 val, bool change_rel) 
{
    Relation        *rel = *rel_arg;
    Relation        *new_rel;
    int32           offset = 0;
    RelTupleNode    *cur_tup;

    new_rel = CopyRelationWithNoData(rel);

    GET_ATTRIBUTE_OFFSET(offset, att_num);

    cur_tup = rel->tup.head;

    switch (comparison) 
    {
        case CT_EQUAL:
            PUSH_TUPLES_BY_COMPARISON_NUMERICAL(int32, ==); 
            break;
        case CT_MORE:
            PUSH_TUPLES_BY_COMPARISON_NUMERICAL(int32, >); 
            break;
        case CT_LESS:
            PUSH_TUPLES_BY_COMPARISON_NUMERICAL(int32, <); 
            break;
        case CT_NOT_EQUAL:
            PUSH_TUPLES_BY_COMPARISON_NUMERICAL(int32, !=);
            break;
    }

    /*
     * if change_rel is true, rel_arg was changed and returned
     * else function returned new relation which was got using rel_arg
     */ 
    if (change_rel)
    {
        DeleteRelation(rel);
        *rel_arg = new_rel;
        return new_rel;
    }
    else
    {
        return new_rel;
    }
}

Relation *
WhereRelation_arrchar(Relation** rel_arg, ComparisonType comparison, 
                     int32 att_num, const char *val, bool change_rel) 
{
    Relation        *rel = *rel_arg;
    Relation        *new_rel;
    int32           offset = 0;
    RelTupleNode    *cur_tup;
    Pointer         buf; 

    // buffer for comparison 
    buf = (Pointer) malloc(sizeof(char) * rel->att[att_num].size);
    CHECK_MALLOC_WORK(buf);

    memset(buf, ' ', rel->att[att_num].size);

    if (rel->att[att_num].size > strlen(val)) 
        memcpy(buf, val, strlen(val));
    else 
        memcpy(buf, val, rel->att[att_num].size);

    new_rel = CopyRelationWithNoData(rel);

    GET_ATTRIBUTE_OFFSET(offset, att_num);

    cur_tup = rel->tup.head;
    
    switch (comparison)
    { 
        case CT_EQUAL:
            PUSH_TUPLES_BY_COMPARISON_STRING(==);
            break;
        case CT_NOT_EQUAL: 
            PUSH_TUPLES_BY_COMPARISON_STRING(!=);
            break;
    }

    /*
     * if change_rel is true, rel_arg was changed and returned
     * else function returned new relation which was got using rel_arg
     */ 
    if (change_rel)
    {
        DeleteRelation(rel);
        *rel_arg = new_rel;
        return new_rel;
    }
    else
    {
        return new_rel;
    }
}



/*
    get relation header and array of attributes

    for (int i = 0; i < rel->att_n; i++) {
        new_rel->att[i].name = (char *) malloc(strlen(rel->att[i].name) + 1); 
        CHECK_MALLOC_WORK(new_rel->att[i].name);

        strcpy(new_rel->att[i].name, rel->att[i].name);
        new_rel->att[i].type = rel->att[i].type;
        new_rel->att[i].size = rel->att[i].size;
    }
    
*/


/*
 * Sorting relation 
 *
 * When sort_type is 0, sorting will be ASC
 * else will be DESC
 */
void
OrderByRelation_int32(Relation *rel, int32 att_num, bool is_DESC) 
{
    if (rel->tup_n < 2) return; 

    int             offset = 0;
    int32           *val_arr;
    RelTupleNode    *cur_tup = rel->tup.head;
    RelTupleNode    **tup_arr;

    GET_ATTRIBUTE_OFFSET(offset, att_num);

    val_arr = (int32 *) malloc(sizeof(int32) * rel->tup_n);
    CHECK_MALLOC_WORK(val_arr);

    tup_arr = (RelTupleNode **) malloc(sizeof(RelTupleNode *) * rel->tup_n);
    CHECK_MALLOC_WORK(tup_arr);

    for (int i = 0; i < rel->tup_n; i++) 
    {
        val_arr[i] = *((int32 *)(cur_tup->data + offset));
        tup_arr[i] = cur_tup;
        cur_tup = cur_tup->next;
    }
    
    MergeSort_int32(val_arr, tup_arr, 0, rel->tup_n - 1, is_DESC);
    
    rel->tup.head = tup_arr[0];
    rel->tup.head->next = tup_arr[1];

    cur_tup = rel->tup.head->next;
    for (int i = 1; i < rel->tup_n - 1; i++) {
        cur_tup = tup_arr[i];
        cur_tup->next = tup_arr[i + 1];
        cur_tup = cur_tup->next;
    }

    rel->tup.end = tup_arr[rel->tup_n - 1];
    rel->tup.end->next = NULL;

    return;
}



static void 
MergeSort_int32(int32 *val_arr, RelTupleNode **tup_arr, 
                int32 l, int32 r, bool is_DESC) 
{
    if (l == r) return;

    int             mid = (l + r) / 2;
    int32           i;
    int32           j;
    int32           *tmp1;
    RelTupleNode    **tmp2;

    MergeSort_int32(val_arr, tup_arr, l, mid, is_DESC);
    MergeSort_int32(val_arr, tup_arr, mid + 1, r, is_DESC);

    i = l;
    j = mid + 1;

    tmp1 = (int32 *)malloc((r - l + 1) * sizeof(int32));
    CHECK_MALLOC_WORK(tmp1);

    tmp2 = (RelTupleNode **) malloc((r - l + 1) * sizeof(RelTupleNode *));
    CHECK_MALLOC_WORK(tmp2);
    
    if (!is_DESC)   /* ASC */ 
        MERGE_SORT_LOOP_INT32(<);
    else            /* DESC */  
        MERGE_SORT_LOOP_INT32(>);

    for (int step = 0; step < (r - l + 1); step++) {
        val_arr[l + step] = tmp1[step];
        tup_arr[l + step] = tmp2[step];
    }

    free(tmp1);
    free(tmp2);

    return;
}

void 
GetRelationTuple(Relation *rel) 
{
    int bytenum = 0;
    int quotes = 2;
    char c;

    RelTupleNode *tuple;

    tuple = (RelTupleNode *) malloc(sizeof(RelTupleNode));
    tuple->data = (Pointer ) malloc(rel->tup_size);

    memset(tuple->data, 0x00, rel->tup_size);

    for (int i = 0; i < rel->att_n; i++) 
    {
        switch (rel->att[i].type) 
        {
            case ARRCHAR:
                quotes = 2;
                for (int k = 0; k < rel->att[i].size + 2; k++) 
                {
                    if (quotes == 0) 
                    {
                        *((char*)(tuple->data + bytenum)) = ' ';
                        bytenum++;
                    }
                    else 
                    {
                        c = getc(stdin);

                        if (c == '\'') 
                            quotes--;
                        
                        else 
                        {
                            *((char*)(tuple->data + bytenum)) = c;
                            bytenum++;
                        }
                    }
                }
                break;
            case INT_32:
                scanf("%d", (int *)(tuple->data + bytenum));
                bytenum += 4;
                break;
        }
        getc(stdin);
    }
    tuple->next = NULL;
    if (rel->tup.head == NULL) 
    {
        rel->tup.head = tuple;
        rel->tup.end = tuple;
    }
    else  
    {
        rel->tup.end->next = tuple;
        rel->tup.end = tuple;
    }

    rel->tup_n++;

    return;
}

void 
PrintRelation(Relation *rel) 
{
    /*defines the width of the columns*/
    int32           *column_width;

    RelTupleNode    *cur_tup = rel->tup.head;
    int32           startprt;

    column_width = (int32 *)malloc(rel->att_n * sizeof(int32));

    for (int i = 0; i < rel->att_n; i++) 
    {
        switch (rel->att[i].type) {
            case ARRCHAR:
                *(column_width + i) = max(strlen(rel->att[i].name), rel->att[i].size);
                break;
            case INT_32:
                *(column_width + i) = max(strlen(rel->att[i].name), 11);
                break;
        }
    }

    for (int k = 0; k < rel->att_n; k++) 
    {
        startprt = (*(column_width + k) - strlen(rel->att[k].name)) / 2;
        for (int i = 0; i < *(column_width + k); i++) 
        {
            if (i < strlen(rel->att[k].name) + startprt && i >= startprt) 
                putc(*(rel->att[k].name + i - startprt), stdout);
            else 
                putc(' ', stdout);
        }
        if (k+1 < rel->att_n)
            putc('|', stdout);
    }

    putc('\n', stdout);
    print_strip(rel, column_width);

    cur_tup = rel->tup.head;
    for (int tup_n = 0; tup_n < rel->tup_n; tup_n++) {
        //putc('|', stdout);

        for (int k = 0, bytenum = 0; k < rel->att_n; k++) 
        {
            switch (rel->att[k].type) 
            {
                case ARRCHAR:
                    for (int i = 0; i < *(column_width + k); i++) {
                        if (i < rel->att[k].size) {
                            putc(*(cur_tup->data + bytenum), stdout);
                            
                            bytenum++;
                        }
                        else {
                            putc(' ', stdout);
                        }
                    }
                    break;
                case INT_32:
                    printf("%-11d", *((int*)(cur_tup->data + bytenum)));
                    bytenum += rel->att[k].size;
                    break;
            }
        if (k+1 < rel->att_n)
            putc('|', stdout);
        }
        cur_tup = cur_tup->next;
        putc('\n', stdout);
    }
}

static void 
print_strip(Relation *rel, int32 *column_width) 
{
    for (int k = 0; k < rel->att_n; k++) 
    {
        for (int i = 0; i < *(column_width + k); i++) 
        {
            putc('-', stdout);
        }
        if (k+1 < rel->att_n)
            putc('+', stdout);
    }
    putc('\n', stdout);

    return;
}
/*
*/

/*
const char* atttypeget(int type) {
    switch (type) {
    case INT_32:
        return "int_32";
        break;
    case ARRCHAR:
        return "arrchar";
        break;
    default:
        return "None";
        break;
    }
}

void relinfoprint(rel* r) {
    printf("Num attributes: %d, Num tuples: %d\n", r->Natt, r->Ntup);
    printf("attrubutes:\n");
    for (int i = 0; i < r->Natt; i++) {
        printf("%d. ", i);
        printf("attribute: %s, ", r->att[i].name);
        printf("type: %s, ", atttypeget(r->att[i].type));
        printf("size: %d ", r->att[i].size);
        printf("\n");
    }

}
*/

/*
void gettuple(Relation *rel) {
    int bytenum = 0;
    int quotes = 2;

    tupnode* n = (tupnode*)malloc(sizeof(tupnode));
    n->data = (void*) malloc(r->sizetup);

    memset(n->data, 0x00, r->sizetup);

    for (int i = 0; i < r->Natt; i++) {
        switch (r->att[i].type) {
        case ARRCHAR:
            quotes = 2;
            char c;
            for (int k = 0; k < r->att[i].size + 2; k++) {
                if (quotes == 0) {
                    *((char*)((char*)n->data + bytenum)) = ' ';
                    bytenum++;
                }
                else {
                    c = getc(stdin);

                    if (c == '"') {
                        quotes--;
                    }
                    else {
                        *((char*)((char*)n->data + bytenum)) = c;
                        bytenum++;
                    }
                }
            }
            break;
        case INT_32:
            scanf("%d", (int*)((char*)n->data + bytenum));
            bytenum += 4;
            break;
        }
        getc(stdin);
    }
    n->next = NULL;
    if (r->tup.head == NULL) {
        r->tup.head = n;
        r->tup.end = n;
    }
    else {
        r->tup.end->next = n;
        r->tup.end = n;
    }

    r->Ntup++;
}
*/

/*
*/


/*
rel* joinrel_int32(rel* r1, int attnum1, rel* r2, int attnum2) {
    void* buf = NULL;// buffer memory for join 

    // join attributes and create newr
    rel* newr = (rel *) malloc(sizeof(rel));
    newr->Natt = r1->Natt + r2->Natt;
    newr->att = (relatt *) malloc(sizeof(relatt) * newr->Natt);
    newr->Ntup = 0;

    for (int i = 0; i < r1->Natt; i++) {
        newr->att[i].name = (char*)malloc(strlen(r1->att[i].name) + 1);
        strcpy(newr->att[i].name, r1->att[i].name);
        newr->att[i].type = r1->att[i].type;
        newr->att[i].size = r1->att[i].size;
    }
    for (int i = r1->Natt; i < r1->Natt + r2->Natt; i++) {
        newr->att[i].name = (char*)malloc(strlen(r2->att[i - r1->Natt].name) + 1);
        strcpy(newr->att[i].name, r2->att[i - r1->Natt].name);
        newr->att[i].type = r2->att[i - r1->Natt].type;
        newr->att[i].size = r2->att[i - r1->Natt].size;
    }

    newr->sizetup = 0;
    for (int i = 0; i < r1->Natt; i++)
        newr->sizetup += r1->att[i].size;
    for (int i = 0; i < r2->Natt; i++)
        newr->sizetup += r2->att[i].size;

    newr->tup.head = NULL;
    newr->tup.end = NULL;

    // Cartesian product r1 and r2 by attribute
    int offset1 = 0;
    for (int i = 0; i < attnum1; i++) {
        offset1 += r1->att[i].size;
    }
    tupnode* curtup1 = r1->tup.head;

    int offset2 = 0;
    for (int i = 0; i < attnum2; i++) {
        offset2 += r2->att[i].size;
    }
    tupnode* curtup2 = r2->tup.head;


    for (int i = 0; i < r1->Ntup; i++) {
        curtup2 = r2->tup.head;
        for (int k = 0; k < r2->Ntup; k++) {
            if (*((int*)((char *)curtup1->data + offset1)) == *((int*)((char*)curtup2->data + offset2))) {
                buf = (void*)malloc(newr->sizetup);
                memcpy(buf, curtup1->data, r1->sizetup);
                memcpy((char*)buf + r1->sizetup, curtup2->data, r2->sizetup);
                tlist_pushback(newr, buf, newr->sizetup);
            }
            curtup2 = curtup2->next;
        }
        curtup1 = curtup1->next;
    }


    int* attarg = (int*)malloc((newr->Natt - 1) * sizeof(int));
    int k = 0;
    for (int i = 0; i < newr->Natt; i++) {
        if (i != (r1->Natt + attnum2)) {
            attarg[k] = i;
            k++;
        }
    }
    projectionrel(&newr, attarg, k);

    return newr;
}
*/
/*
rel* joinrel_arrchar(rel* r1, int attnum1, rel* r2, int attnum2) {
    void* buf = NULL;// buffer memory for join 

    // join attributes and create newr
    rel* newr = (rel*)malloc(sizeof(rel));
    newr->Natt = r1->Natt + r2->Natt;
    newr->att = (relatt*)malloc(sizeof(relatt) * newr->Natt);
    newr->Ntup = 0;

    for (int i = 0; i < r1->Natt; i++) {
        newr->att[i].name = (char*)malloc(strlen(r1->att[i].name) + 1);
        strcpy(newr->att[i].name, r1->att[i].name);
        newr->att[i].type = r1->att[i].type;
        newr->att[i].size = r1->att[i].size;
    }
    for (int i = r1->Natt; i < r1->Natt + r2->Natt; i++) {
        newr->att[i].name = (char*)malloc(strlen(r2->att[i - r1->Natt].name) + 1);
        strcpy(newr->att[i].name, r2->att[i - r1->Natt].name);
        newr->att[i].type = r2->att[i - r1->Natt].type;
        newr->att[i].size = r2->att[i - r1->Natt].size;
    }

    newr->sizetup = 0;
    for (int i = 0; i < r1->Natt; i++)
        newr->sizetup += r1->att[i].size;
    for (int i = 0; i < r2->Natt; i++)
        newr->sizetup += r2->att[i].size;

    newr->tup.head = NULL;
    newr->tup.end = NULL;

    // Cartesian product r1 and r2 by attribute
    int offset1 = 0;
    for (int i = 0; i < attnum1; i++) {
        offset1 += r1->att[i].size;
    }
    tupnode* curtup1 = r1->tup.head;

    int offset2 = 0;
    for (int i = 0; i < attnum2; i++) {
        offset2 += r2->att[i].size;
    }
    tupnode* curtup2 = r2->tup.head;


    for (int i = 0; i < r1->Ntup; i++) {
        curtup2 = r2->tup.head;
        for (int k = 0; k < r2->Ntup; k++) {
            // memcmp(((char*)curtup->data + offset), buf, r->att[attnum].size) == 0
            if (memcmp( ((char*)curtup1->data + offset1), ((char*)curtup2->data + offset2), r1->att[attnum1].size) == 0) {
                buf = (void*)malloc(newr->sizetup);
                memcpy(buf, curtup1->data, r1->sizetup);
                memcpy((char*)buf + r1->sizetup, curtup2->data, r2->sizetup);
                tlist_pushback(newr, buf, newr->sizetup);
            }
            curtup2 = curtup2->next;
        }
        curtup1 = curtup1->next;
    }

    return newr;
}
*/
/*
rel* group_arrchar_avg_int32(rel** rarg, int groupatt, int aggatt, int aggtype) {
    rel* r = *rarg;
    if (r->Ntup < 2) return r;

    rel* newr = (rel*)malloc(sizeof(rel));
    int offset1 = 0;
    int offset2 = 0;
    tupnode* curtup_r = r->tup.head;
    tupnode* curtup_buf = NULL;
    tupnode* curtup_newr = NULL;

    // byte offset for groupatt
    for (int i = 0; i < groupatt; i++) {
        offset1 += r->att[i].size;
    }

    // byte offset for aggatt
    for (int i = 0; i < aggatt; i++) {
        offset2 += r->att[i].size;
    }

    newr->Natt = 2; // ???
    newr->att = (relatt*)malloc(sizeof(rel) * newr->Natt);
    newr->Ntup = 0;

    // "group by" attribute into new relation
    newr->att[0].name = (char*)malloc(strlen(r->att[groupatt].name) + 1);
    strcpy(newr->att[0].name, r->att[groupatt].name);
    newr->att[0].type = r->att[groupatt].type;
    newr->att[0].size = r->att[groupatt].size;

    // "aggregate" attribute into new relation
    newr->att[1].name = (char*)malloc(strlen(r->att[aggatt].name) + 1);
    strcpy(newr->att[1].name, r->att[aggatt].name);
    newr->att[1].type = r->att[aggatt].type;
    newr->att[1].size = r->att[aggatt].size;

    newr->sizetup = 0;
    for (int i = 0; i < newr->Natt; i++)
        newr->sizetup += newr->att[i].size;
    newr->tup.head = NULL;
    newr->tup.end = NULL;

    char* str_buf = NULL;
    void* data = NULL; 
    while (r->Ntup != 0) {
        curtup_r = r->tup.head;
        int aggval = 0;
        int aggval_num = 0;
        int aggresult = 0;
        int Ntup_buf = r->Ntup;
        data = (void*)malloc(newr->sizetup);
        str_buf = (char*)calloc(r->att[groupatt].size, sizeof(char));
        memcpy(str_buf, ((char*)curtup_r->data + offset1),r->att[groupatt].size);
        for (int i = 0; i < Ntup_buf; i++) {

            if (memcmp(str_buf, ((char*)curtup_r->data + offset1), r->att[groupatt].size) == 0) {
                switch (aggtype) {
                case AGG_AVG:
                    aggval += *((int*)((char*)curtup_r->data + offset2));
                    aggval_num++;
                    break;
                case AGG_SUM:
                    aggval += *((int*)((char*)curtup_r->data + offset2));
                    break;
                case AGG_COUNT:
                    aggval_num++;
                    break;
                }
                curtup_buf = curtup_r;
                curtup_r = curtup_r->next;
                if (curtup_buf == r->tup.head) {
                    r->tup.head = curtup_r;
                }
                free(curtup_buf->data);
                free(curtup_buf);
                r->Ntup--;
            }
            else {
                curtup_r = curtup_r->next;
            }
        }
        switch (aggtype) {
        case AGG_AVG:
            aggresult = aggval / aggval_num;
            break;
        case AGG_SUM:
            aggresult = aggval;
            break;
        case AGG_COUNT:
            aggresult = aggval_num;
            break;
        }

        memcpy(data, str_buf, newr->att[0].size);
        memcpy((char*)data + newr->att[0].size, &aggresult, newr->att[1].size);

        //free(data);
        //data = (void*)calloc(newr->sizetup + 1,1);

        tlist_pushback(newr, data, newr->sizetup);
        free(data);
        free(str_buf);
    }
    delrel(r);
    

    *rarg = newr;
    return *rarg;
}
*/
/*
rel* projectionrel(rel** rarg, int* attarg, int Natt) {
    rel* r = *rarg;
    rel* newr = (rel*)malloc(sizeof(rel));
    void* databuf = NULL;
    tupnode* curtup = NULL;

    int* offset = (int*)calloc(Natt, sizeof(int));

    for (int k = 0; k < Natt; k++) {
        for (int i = 0; i < attarg[k]; i++) {
            offset[k] += r->att[i].size;
        }
    }

    newr->Natt = Natt;
    newr->att = (relatt*)malloc(sizeof(relatt) * newr->Natt);
    newr->Ntup = 0;

    for (int i = 0; i < Natt; i++) {
        newr->att[i].name = (char*)malloc(strlen(r->att[attarg[i]].name) + 1);
        strcpy(newr->att[i].name, r->att[attarg[i]].name);
        newr->att[i].type = r->att[attarg[i]].type;
        newr->att[i].size = r->att[attarg[i]].size;
    }

    newr->sizetup = 0;
    for (int i = 0; i < newr->Natt; i++)
        newr->sizetup += newr->att[i].size;
    newr->tup.head = NULL;
    newr->tup.end = NULL;

    curtup = r->tup.head;
    databuf = (void*)malloc(newr->sizetup);
    for (int i = 0; i < r->Ntup; i++) {
        for (int k = 0, databuf_offset = 0; k < newr->Natt; k++) {
            memcpy((char *)databuf + databuf_offset, (char *)curtup->data + offset[k], newr->att[k].size);
            databuf_offset += newr->att[k].size;
        }
        curtup = curtup->next;
        tlist_pushback(newr, databuf, newr->sizetup);
    }
    
    delrel(r);
    *rarg = newr;
    return *rarg;
}
*/
