/*------------------------------------------------------------------------- 
 *
 * parse_tree.h
 * 
 * Tt is necessary to work with the parse_tree data type 
 * 
 * IDENTIFICATION 
 *      src/include/parser/parse_tree.h
 * 
 *------------------------------------------------------------------------- 
 */
#ifndef PARSE_TREE_H
#define PARSE_TREE_H

#include "../access/relation.h"
/* ----------------------------------------------------------------
 *				Section 1: main parse tree types and macros 
 * ----------------------------------------------------------------
 */

/*
 * Type of parse tree 
 */
typedef enum ParseTreeType 
{
    PTT_NULL,
    PTT_SELECT,
    PTT_INSERT,
    PTT_DELETE,
    PTT_DROP,
    PTT_UPDATE
} ParseTreeType;

/*
 * Type of arguments for executing functions
 */
typedef enum ArgumentType
{
    ARG_ATTRIBUTE,
    ARG_STRING,
    ARG_INT32,
    ARG_FLOAT32
} ArgumentType;

/* Pointer for modules*/
//typedef Pointer PTModulePt;

/*
 * Module types
 * 
 * the values of the sequence elements correspond 
 * to the execution priority of the modules
 */
typedef enum PTModuleType
{
    /* Main modules */
    PTMOD_NONE = -1,
    PTMOD_SELECT,
    PTMOD_INSERT,
    PTMOD_DELETE,
    PTMOD_DROP,
    PTMOD_UPDATE,

    /* Optional modules */
    PTMOD_JOIN,
    PTMOD_WHERE,
    PTMOD_GROUPBY,
    PTMOD_ORDERBY,
    PTMOD_LIMIT
} PTModuleType;

/* Used exclusively for forming */
typedef struct PTModuleMain 
{
    struct PTModuleMain     *next;
    struct PTModuleMain     *past;
    PTModuleType        type;
} PTModuleMain;

/*
 * Parse Tree is needed for sequense 
 * sequential execution of the query nodes.
 */
typedef struct ParseTree 
{
    ParseTreeType   type; 

    Relation        *rel;

    Relation        *rels_attinfo;
    int32           num_of_rels;
    RelName         *rel_names;

    PTModuleMain    *modlist_head;
    PTModuleMain    *modlist_down;
} ParseTree;

/* ----------------------------------------------------------------
 *				Section 2: Modules
 * ----------------------------------------------------------------
 */



/*
 * list of attributes
 */
typedef struct AttListNode
{
    RelName            rel_name; 
    AttName            att_name;
    struct AttListNode *next;
} AttListNode;

/* select */
typedef struct PTModule_Select 
{
    PTModuleMain    *next;
    PTModuleMain    *past;
    PTModuleType    type;

    /* abolished is true, if we need to select all attributes */
    bool        abolished;


    /* list of attributes */
    AttListNode *attlist_head;
    AttListNode *attlist_down;

    /* information received by the preprocessor. Needed for executor*/
    int32       *attID;
    int32       num_of_atts;
} PTModule_Select;

/* Order by*/
typedef struct PTModule_OrderBy 
{
    PTModuleMain    *next;
    PTModuleMain    *past;
    PTModuleType    type;

    bool            is_desc;

    RelName         rel_name; 
    AttName         att_name;
     
    /* After semantic analysis */
    AttType         att_type; 
} PTModule_OrderBy;

/* where */
typedef struct PTModule_Where 
{
    // first argument
    String arg_data_1;
    ArgumentType arg_type_1;

    // second argument
    String arg_data_2;
    ArgumentType arg_type_2;

    // condition
    ComparisonType cond; 
} PTModule_Where;

/* ----------------------------------------------------------------
 *				Section 3: Function declarations
 * ----------------------------------------------------------------
 */

void
InitParseTree(void);

void
InitModuleList(void);

PTModule_Select *
InitPTModule_Select(void);

void
AddPTModule_SELECT(void);

void 
PushAttIntoPTModule_SELECT(const char *arg_att_name, const char *arg_rel_name);

void
AddRelationNameIntoPT(const char *rel_name);

PTModule_OrderBy *
InitPTModule_OrderBy(void);

void
AddPTModule_OrderBy(void);

void 
PushAttIntoPTModule_OrderBy(const char *arg_att_name, const char *arg_rel_name);

void 
PushOrderIntoPTModule_OrderBy(bool is_desc);

#endif /* PARSE_TREE_H */