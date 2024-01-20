#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#include <relation.h>

/*
void main(void) {
    //rel* students = init_students();
    //rel* grades = init_students();

    //gettuple(students);
    //relprint(students);
    int a;
    Name gg;

    printf("%lu",UINT64_MAX+1);

    int result = 0;
    do {
        result = scan_int32(&a);
    } while (result == 0);


}
*/




void relprint(rel* r) {
    int* maxsize = (int*)malloc(r->Natt * sizeof(int));
    for (int i = 0; i < r->Natt; i++) {
        switch (r->att[i].type) {
        case ARRCHAR:
            *(maxsize + i) = max(strlen(r->att[i].name), r->att[i].size);
            break;
        case INT_32:
            *(maxsize + i) = max(strlen(r->att[i].name), 11);
        }
    }

    print_strip(r, maxsize);
    putc('|', stdout);

    for (int k = 0; k < r->Natt; k++) {
        int startprt = (*(maxsize + k) - strlen(r->att[k].name)) / 2;
        for (int i = 0; i < *(maxsize + k); i++) {
            if (i < strlen(r->att[k].name) + startprt && i >= startprt) {
                putc(*(r->att[k].name + i - startprt), stdout);
            }
            else {
                putc(' ', stdout);
            }
        }
        putc('|', stdout);
    }

    putc('\n', stdout);
    print_strip(r, maxsize);

    tupnode* curtup = r->tup.head;
    for (int Ntup = 0; Ntup < r->Ntup; Ntup++) {
        putc('|', stdout);

        for (int k = 0, bytenum = 0; k < r->Natt; k++) {
            switch (r->att[k].type) {
            case ARRCHAR:
                for (int i = 0; i < *(maxsize + k); i++) {
                    if (i < r->att[k].size) {
                        putc(*((char*)(curtup->data + bytenum)), stdout);
                        
                        bytenum++;
                    }
                    else {
                        putc(' ', stdout);
                    }
                }
                break;
            case INT_32:
                printf("%-11d", *((int*)((char*)curtup->data + bytenum)));
                bytenum += r->att[k].size;
                break;
            }
            putc('|', stdout);
        }
        curtup = curtup->next;
        putc('\n', stdout);
    }
    print_strip(r, maxsize);
}

void print_strip(rel* r, int* maxsize) {
    putc('+', stdout);
    for (int k = 0; k < r->Natt; k++) {
        for (int i = 0; i < *(maxsize + k); i++) {
            putc('-', stdout);
        }
        putc('+', stdout);
    }
    putc('\n', stdout);
}



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

int sortrel_int32(rel* r, int attnum, int sorttype) {
    if (r->Ntup < 2) return 0;

    int offset = 0;
    for (int i = 0; i < attnum; i++) {
        offset += r->att[i].size;
    }
    tupnode* curtup = r->tup.head;
    int* valarr = (int*)malloc(sizeof(int) * r->Ntup);
    tupnode** tuparr = (tupnode**)malloc(sizeof(tupnode*) * r->Ntup);

    for (int i = 0; i < r->Ntup; i++) {
        valarr[i] = *((int*)((char*)curtup->data + offset));
        tuparr[i] = curtup;
        curtup = curtup->next;
    }
    
    merge_int32(valarr, tuparr, 0, r->Ntup - 1, sorttype);
    
    r->tup.head = tuparr[0];
    r->tup.head->next = tuparr[1];

    curtup = r->tup.head->next;
    for (int i = 1; i < r->Ntup - 1; i++) {
        curtup = tuparr[i];
        curtup->next = tuparr[i + 1];
        curtup = curtup->next;
    }

    r->tup.end = tuparr[r->Ntup - 1];
    r->tup.end->next = NULL;

    return 0;
}

// parr - point arr
void merge_int32(int* valarr, tupnode** tuparr, int l, int r, int sorttype) {
    if (l == r) return;
    int mid = (l + r) / 2;

    merge_int32(valarr, tuparr, l, mid, sorttype);
    merge_int32(valarr, tuparr, mid + 1, r, sorttype);

    int i = l;
    int j = mid + 1;
    int* tmp1 = (int*)malloc((r - l + 1) * sizeof(int));
    tupnode** tmp2 = (tupnode**)malloc((r - l + 1) * sizeof(tupnode*));
    if (sorttype == INCREASE) {
        for (int step = 0; step < (r - l + 1); step++) {
            if ((j > r) || ((i <= mid) && (valarr[i] < valarr[j]))) {
                tmp1[step] = valarr[i];
                tmp2[step] = tuparr[i];
                i++;
            }
            else {
                tmp1[step] = valarr[j];
                tmp2[step] = tuparr[j];
                j++;
            }
        }
    } else { // DECREASE
        for (int step = 0; step < (r - l + 1); step++) {
            if ((j > r) || ((i <= mid) && (valarr[i] > valarr[j]))) {
                tmp1[step] = valarr[i];
                tmp2[step] = tuparr[i];
                i++;
            }
            else {
                tmp1[step] = valarr[j];
                tmp2[step] = tuparr[j];
                j++;
            }
        }
    }

    for (int step = 0; step < (r - l + 1); step++) {
        valarr[l + step] = tmp1[step];
        tuparr[l + step] = tmp2[step];
    }
    free(tmp1);
    free(tmp2);
}

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

Relation *
CopyRelationWithNoData(Relation* rel) {
    Relation* new_rel;
    MALLOC(new_rel,Relation,sizeof(Relation));

    new_rel->tup_n = 0;
    new_rel->att_n = rel->att_n;
    CALLOC(new_rel->att, RelAttribute, rel->att_n, sizeof(RelAttribute));

    for (int i = 0; i < rel->att_n; i++) {
        MALLOC(new_rel->att[i].name, char, strlen(rel->att[i].name) + 1);
        strcpy(new_rel->att[i].name, rel->att[i].name);
        new_rel->att[i].type = rel->att[i].type;
        new_rel->att[i].size = rel->att[i].size;
    }
    new_rel->tup_size = 0;
    for (int i = 0; i < r->att_n; i++)
        new_rel->tup_size += rel->att[i].size;

    new_rel->tup.head = NULL;
    new_rel->tup.end = NULL;
    return new_rel;
}

Relation * 
CopyRelation(Relation* rel) 
{
    Relation* new_rel;
    RelTupleNode* cur_tup;

    new_rel; = CopyRelationWithNoData(rel);
    cur_tup; = rel->tup.head;
    for (int i = 0; i < r->Ntup; i++) 
    {
        PushBackTupleList(new_rel, cur_tup->data, r->tup_size);
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
    Pointer buf;
    FILE* fp;

    MALLOC(buf, Pointer, r->tup_size);
    FOPEN(fp, name, "rb")

    for(;;) 
    {
        if (fread(buf, r->sizetup, 1, fp) != 1) break;
        tlist_pushback(r, buf, r->sizetup);
    }

    fclose(fp);
}

void 
PushBackTupleList(Relation* rel, Pointer data, Size size) 
{
    RelTupleNode    *new_tuple; 

    MALLOC(new_tuple, RelTupleNode, sizeof(RelTupleNode));
    MALLOC(new_tuple->data, Pointer, size);

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
DeleteRelation(Relation* rel) 
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
    Relation *rel;
    Size tup_size = 0;

    MALLOC(rel, Relation, sizeof(Relation));

    rel->att_n = att_n;
    rel->att = att;
    rel->tup_n = 0;

    for (int i = 0; i < r->att_n; i++)
        tup_size += rel->att[i].size;

    rel-> = tup_size;

    rel->tup.head = NULL;
    rel->tup.end = NULL;

    return rel;
}

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
rel* init_students(void) {
    int Natt = 4;
    relatt* att = (relatt*)malloc(sizeof(relatt) * Natt);

    att[0].name = (char*)malloc(strlen("id student")+1);
    strcpy(att[0].name, "id student");
    att[0].type = INT_32;
    att[0].size = 4;

    att[1].name = (char*)malloc(strlen("full name") + 1);
    strcpy(att[1].name, "full name");
    att[1].type = ARRCHAR;
    att[1].size = 25;

    att[2].name = (char*)malloc(strlen("faculty") + 1);
    strcpy(att[2].name, "faculty");
    att[2].type = ARRCHAR;
    att[2].size = 7;

    att[3].name = (char*)malloc(strlen("group") + 1);
    strcpy(att[3].name, "group");
    att[3].type = ARRCHAR;
    att[3].size = 7;

    rel* r = relinit(att, Natt);

    return r;
}

rel* init_grades(void) {
    int Natt = 6;
    relatt* att = (relatt*)malloc(sizeof(relatt) * Natt);

    att[0].name = (char*)malloc(strlen("id grade") + 1);
    strcpy(att[0].name, "id grade");
    att[0].type = INT_32;
    att[0].size = 4;

    att[1].name = (char*)malloc(strlen("id student") + 1);
    strcpy(att[1].name, "id student");
    att[1].type = INT_32;
    att[1].size = 4;

    att[2].name = (char*)malloc(strlen("subject") + 1);
    strcpy(att[2].name, "subject");
    att[2].type = ARRCHAR;
    att[2].size = 30;

    att[3].name = (char*)malloc(strlen("grade") + 1);
    strcpy(att[3].name, "grade");
    att[3].type = INT_32;
    att[3].size = 4;

    att[4].name = (char*)malloc(strlen("type of work") + 1);
    strcpy(att[4].name, "type of work");
    att[4].type = ARRCHAR;
    att[4].size = 10;

    att[5].name = (char*)malloc(strlen("semester") + 1);
    strcpy(att[5].name, "semester");
    att[5].type = INT_32;
    att[5].size = 4;

    rel* r = relinit(att, Natt);

    return r;
}

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

void whererel_int32(rel** rarg, char cond, int attnum, int val) {
    rel* r = *rarg;
    rel* newr = CopyRelationWithNoData(r);
    int offset = 0;
    for (int i = 0; i < attnum; i++) {
        offset += r->att[i].size;
    }
    tupnode* curtup = r->tup.head;

    switch (cond) {
    case '=':
        for (int i = 0; i < r->Ntup; i++) {
            if (*((int*)((char *)curtup->data + offset)) == val)
                tlist_pushback(newr, curtup->data, r->sizetup);
            curtup = curtup->next;
        }
        break;
    case '>':
        for (int i = 0; i < r->Ntup; i++) {
            if (*((int*)((char*)curtup->data + offset)) > val)
                tlist_pushback(newr, curtup->data, r->sizetup);
            curtup = curtup->next;
        }
        break;
    case '<':
        for (int i = 0; i < r->Ntup; i++) {
            if (*((int*)((char*)curtup->data + offset)) < val)
                tlist_pushback(newr, curtup->data, r->sizetup);
            curtup = curtup->next;
        }
        break;
    case '!':
        for (int i = 0; i < r->Ntup; i++) {
            if (*((int*)((char*)curtup->data + offset)) != val)
                tlist_pushback(newr, curtup->data, r->sizetup);
            curtup = curtup->next;
        }
        break;
    }

    delrel(r);

    *rarg = newr;
}

void whererel_arrchar(rel** rarg, char cond, int attnum, const char* val) {
    rel* r = *rarg;
    char *buf = (char *)malloc(sizeof(char) * r->att[attnum].size);
    memset(buf, ' ', r->att[attnum].size);
    if (r->att[attnum].size > strlen(val)) {
        memcpy(buf, val, strlen(val));
    } else {
        memcpy(buf, val, r->att[attnum].size);
    }
    rel* newr = CopyRelationWithNoData(r);
    int offset = 0;
    for (int i = 0; i < attnum; i++) {
        offset += r->att[i].size;
    }
    tupnode* curtup = r->tup.head;

    switch (cond) {
    case '=':
        for (int i = 0; i < r->Ntup; i++) {
            if (memcmp(((char*)curtup->data + offset), buf, r->att[attnum].size) == 0)
                tlist_pushback(newr, curtup->data, r->sizetup);
            curtup = curtup->next;
        }
        break;
    case '!':
        for (int i = 0; i < r->Ntup; i++) {
            if (memcmp(((char*)curtup->data + offset), buf, r->att[attnum].size) != 0)
                tlist_pushback(newr, curtup->data, r->sizetup);
            curtup = curtup->next;
        }
        break;
    }

    delrel(r);

    *rarg = newr;
}
