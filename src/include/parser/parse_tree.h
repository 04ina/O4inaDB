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
typedef Pointer PTModulePt;

/*
 * Parse Tree is needed for sequense 
 * sequential execution of the query nodes.
 */
typedef struct ParseTree 
{
    ParseTreeType   type; 
    RelName         rel_name;
    Relation        *rel;

    PTModulePt      modlist_head;
    PTModulePt      modlist_down;
} ParseTree;

/* ----------------------------------------------------------------
 *				Section 2: Module 
 * ----------------------------------------------------------------
 */

#define OFFSET_NEXT_MODULE 0 
#define OFFSET_PAST_MODULE sizeof(PTModulePt)
#define OFFSET_TYPE_MODULE sizeof(PTModulePt) * 2

/*
 *  Module types
 */
typedef enum PTModuleType
{
    /* Main modules */
    PTMOD_SELECT,
    PTMOD_INSERT,
    PTMOD_DELETE,
    PTMOD_DROP,
    PTMOD_UPDATE,

    /* Optional modules */
    PTMOD_WHERE,
    PTMOD_JOIN,
    PTMOD_ORDERBY,
    PTMOD_GROUPBY
} PTModuleType;

/*
 * list of attributes
 */
typedef struct AttListNode
{
    AttName            att_name;
    struct AttListNode *next;
} AttListNode;

/* select */
typedef struct PTModule_Select 
{
    PTModulePt      next;
    PTModulePt      past;
    PTModuleType    type;

    /* abolished is true, if we need to select all attributes */
    bool        abolished;

    /* list of attributes */
    AttListNode *attlist_head;
    AttListNode *attlist_down;
} PTModule_Select;

/* Order by*/
typedef struct ModuleOrderby
{
    AttType type;
    AttName name;
} ModuleOrderby;

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
PushAttIntoPTModule_SELECT(const char *att_name);

void
AddRelationNameIntoPT(const char *rel_name);

#endif /* PARSE_TREE_H */