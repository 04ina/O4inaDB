#include "../c.h"

typedef enum AttType {    
    INT_16,
    INT_32,   
    INT_64,          
    FLOAT_32,         
    DOUBLE_64,       
    ARRCHAR,         
    PRIMARYKEY      
} AttType;


#define AGG_AVG         1
#define AGG_SUM         2
#define AGG_COUNT       3

#define INCREASE        1
#define DECREASE        2

typedef String AttName;
typedef String RelName;

#define RELATION_NAME_SIZE      51
#define ATTRIBUTE_NAME_SIZE     51 

typedef struct RelTupleNode {
    Pointer data;
    struct RelTupleNode* next;
} RelTupleNode;

// primary key
typedef struct primarykey {
    int id;
    int last; // for increment
} primarykey;

typedef struct TupleList {
    RelTupleNode *head;
    RelTupleNode *end;
} TupleList;

// relation attributes
typedef struct RelAttribute {
    AttName name;
    int32 type;
    Size size;
} RelAttribute;

// relation
typedef struct Relation {
    /*
     * Array of Attributes 
     */
    RelAttribute *att;

    /*
     * Singly-linked list of Tuples; 
     */
    TupleList tup;
    /*
     * Relation header 
     */
    int32 tup_n;
    int32 att_n;
    Size tup_size;

} Relation;

#define FILL_IN_ATTRIBUTE_INFORMATION(_att_num_, _att_name_, _type_, _size_) \
do \
{ \
    att[_att_num_].name = (AttName) malloc(strlen(_att_name_) + 1); \
    CHECK_MALLOC_WORK(att[_att_num_].name); \
    strcpy(att[_att_num_].name, _att_name_); \
    att[_att_num_].type = _type_; \
    att[_att_num_].size = _size_; \
} while(0) 

Relation *
CopyRelationWithNoData(Relation* rel);

Relation * 
CopyRelation(Relation* rel);

void 
WriteRelation(Relation *rel, const char *name);

void 
ReadRelation(Relation* rel, const char* name);

void 
PushBackTupleList(Relation* rel, Pointer data, Size size);

void 
DeleteRelation(Relation* rel);

Relation * 
InitRelation(RelAttribute *att, int32 att_n);

bool
CheckExistTuple_Arrchar(Relation *rel, int32 att_num, 
                        const char *str);
bool
CheckExistTuple_TwoArrchar(Relation *rel, 
                           int32 att_num1, const char *str1, 
                           int32 att_num2, const char *str2);

/*
void whererel_int32(rel** rarg, char cond, int attnum, int val);

void whererel_arrchar(rel** rarg, char cond, int attnum, const char* val);

int sortrel_int32(rel* r, int attnum, int sorttype);

rel* joinrel_int32(rel* r1, int attnum1, rel* r2, int attnum2);

rel* joinrel_arrchar(rel* r1, int attnum1, rel* r2, int attnum2);

rel* projectionrel(rel** rarg, int* attarg, int Natt);

rel* group_arrchar_avg_int32(rel** rarg, int groupatt, int aggatt, int aggtype);

void gettuple(rel* r);

void delrel(rel* r);

rel* relcpy_nodata(rel* r);

rel* relcpy(rel* r);

void relprint(rel* r);

void readrel(rel* r, const char* name);

void writerel(rel* r, const char* name);

void relinfoprint(rel* r);

rel* relinit(relatt* att, int Natt);

// utils
void print_strip(rel* r, int* maxsize);
void tlist_pushback(rel* r, void* data, int size);
void merge_int32(int* valarr, tupnode** tuparr, int l, int r, int sorttype);
const char* atttypeget(int type);

*/
