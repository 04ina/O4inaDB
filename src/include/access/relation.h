/*------------------------------------------------------------------------- 
 *
 * relation.h
 * 
 * functions for working with relation
 * 
 * IDENTIFICATION 
 *      src/include/access/relation.h
 * 
 *------------------------------------------------------------------------- 
 */
#ifndef RELATION_H
#define RELATION_H

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
    AttName     name;
    int32       type;
    Size        size;
    int32       number; 
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

#define GET_ATTRIBUTE_OFFSET(_offset_, _att_num_) \
do \
{ \
    for (int i = 0; i < _att_num_; i++) \
        _offset_ += rel->att[i].size; \
} while (0)

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

Relation *
WhereRelation_int32(Relation** rel_arg, ComparisonType comparison, 
                     int32 att_num, int32 val, bool change_rel);
                     
Relation *
WhereRelation_arrchar(Relation** rel_arg, ComparisonType comparison, 
                     int32 att_num, const char *val, bool change_rel);
void
OrderByRelation_int32(Relation *rel, int32 att_num, bool is_DESC);

static void 
MergeSort_int32(int32 *val_arr, RelTupleNode **tup_arr, 
                int32 l, int32 r, bool is_DESC);

void 
GetRelationTuple(Relation *rel);

void 
PrintRelation(Relation *rel);

#endif /* RELATION_H */