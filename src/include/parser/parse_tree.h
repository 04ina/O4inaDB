#include "./../c.h"
#include "./../O4inaDB.h"
#include "../access/relation.h"

/*
 * Priorities of mo 
 */
//typedef enum ModulePrior


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

/*
 * The module determines the type of parsing tree node
 */
typedef Pointer PTModulePt;

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

typedef struct PTModule_Select 
{
    /* Select attributes */
    int aboba; 


} PTModule_Select;


typedef struct ModuleOrderby
{
    AttType type;
    AttName name;
} ModuleOrderby;

/*
 * Parse tree node
 */
typedef struct PTNode 
{
    struct PTNode *past;
    struct PTNode *next;

    PTModuleType Type;
    PTModulePt mod;
} PTNode;

/*
 * Parse Tree is needed for sequense 
 * sequential execution of the query node.
 */
typedef struct ParseTree 
{
    RelName     rel_name;
    Relation    *rel;
     
    PTNode      *head;
    PTNode      *end;
} ParseTree;

ParseTree *
InitParseTree(void);

void
PushPTNode(ParseTree *parse_tree);
