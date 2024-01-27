/*------------------------------------------------------------------------- 
 *
 * parse_tree.c
 * 
 * Tt is necessary to work with the parse_tree data type 
 * 
 * IDENTIFICATION 
 *      src/backend/parser/parse_tree.c
 * 
 *------------------------------------------------------------------------- 
 */

#include <parse_tree.h>

ParseTree   *parse_tree;

#define PUSH_PT_MODULE \
do \
{ \
    if (parse_tree->modlist_head == NULL && \
        parse_tree->modlist_down == NULL) \
    { \
        PTModule->next = NULL; \
        PTModule->past = (PTModulePt)PTModule; \
        parse_tree->modlist_head = (PTModulePt)PTModule; \
\
        parse_tree->modlist_down = (PTModulePt)PTModule; \
    } \
    else \
    { \
        PTModule->next = NULL; \
        PTModule->past = parse_tree->modlist_head; \
\
        memcpy(parse_tree->modlist_head+sizeof(PTModuleType), PTModule, sizeof(void *)); \
        parse_tree->modlist_head = (PTModulePt)PTModule; \
    } \
} while (0)


void
InitParseTree(void)
{
    parse_tree = (ParseTree *) malloc(sizeof(ParseTree)); 
    CHECK_MALLOC_WORK(parse_tree);

    InitModuleList();

    parse_tree->rel_name = (RelName) malloc(RELATION_NAME_SIZE); 
    CHECK_MALLOC_WORK(parse_tree->rel_name);

    parse_tree->type = PTT_NULL;
}

/*
 * Initialization list of modules 
 */
void
InitModuleList(void)
{
    parse_tree->modlist_head = NULL;
    parse_tree->modlist_down = NULL;
}

/* ----------------------------------------------------------------
 *				        Select module
 * ----------------------------------------------------------------
 */

/*
 * Parse tree select module initialization 
 */
PTModule_Select *
InitPTModule_Select(void) 
{
    PTModule_Select *PTModule;

    PTModule = (PTModule_Select *) malloc(sizeof(PTModule_Select));
    CHECK_MALLOC_WORK(PTModule);

    PTModule->type = PTMOD_SELECT;
    PTModule->abolished = false;

    PTModule->attlist_head = NULL;
    PTModule->attlist_down = NULL;

    return PTModule;
}

void
AddPTModule_SELECT(void)
{
    parse_tree->type = PTT_SELECT;

    PTModule_Select *PTModule;

    PTModule = InitPTModule_Select();

    PUSH_PT_MODULE; 

    return;
}

void 
PushAttIntoPTModule_SELECT(const char *att_name)
{
    if (att_name[0] == '*')
    {
        ((PTModule_Select *)parse_tree->modlist_head)->abolished = true;
        return;
    }
    if (((PTModule_Select *)parse_tree->modlist_head)->abolished == true)
        return;

    AttName         name;
    AttListNode     *node;
    PTModule_Select *PTModule;

    name = (AttName) malloc(ATTRIBUTE_NAME_SIZE);
    CHECK_MALLOC_WORK(name);

    strcpy(name, att_name);

    PTModule = (PTModule_Select *)parse_tree->modlist_head;

    node = (AttListNode *) malloc(sizeof(AttListNode));
    CHECK_MALLOC_WORK(node);

    node->att_name = name;

    if (PTModule->attlist_head == NULL && \
        PTModule->attlist_down == NULL)
    {
        node->next = NULL;

        PTModule->attlist_head = node;
        PTModule->attlist_down = node;
    }
    else
    {
        node->next = NULL;
    
        PTModule->attlist_head->next = node;
        PTModule->attlist_head = node;
    }

    return;
}

/* ----------------------------------------------------------------
 *				        FROM imaginary module
 * ----------------------------------------------------------------
 */

void
AddRelationNameIntoPT(const char *rel_name)
{
    RelName   name;

    name = (RelName) malloc(RELATION_NAME_SIZE);
    CHECK_MALLOC_WORK(name);

    strcpy(name, rel_name);

    parse_tree->rel_name = name;

    return;
}





/*
 *
 */

/*
void
AddPTModule_SELECT() 
*/


/*

  Parse tree node

typedef struct PTNode 
{
    struct PTNode *next;
    struct PTNode *past;

    ModuleType Type;
    ModulePt mod;
} PTNode;


 * Parse Tree is needed for sequense 
 * sequential execution of the query node.
 
typedef struct ParseTree 
{
    Relation *rel;
     
    PTNode *head;
    PTNode *end;
} ParseTree;
    select_stmt:
        SELECT ......
        {
                




        }
        



*/




/*
 * Pushed node on top of the parse tree 
 *
 * If arg1 is not NULL, func PushPTNode() will be reinitialized.
 * with new parse tree
 */
/*
void
PushPTNode(ParseTree *parse_tree)
{
    static ParseTree    *new_parse_tree;
    PTNode              *node;

    if (parse_tree != NULL)
    {
        new_parse_tree = parse_tree;
        return;
    }
    
    node = (PTNode *) malloc(sizeof(PTNode));
    CHECK_MALLOC_WORK(node);

    if (new_parse_tree->head == NULL && \
        new_parse_tree->end == NULL)
    {
        node->next = NULL;
        node->past = node;

        new_parse_tree->end = node;
        new_parse_tree->head = node;
    }
    else
    {
        node->next = NULL;
        node->past = new_parse_tree->head;
    
        new_parse_tree->head->next = node;
        new_parse_tree->head = node;
    }

    return;
}
*/