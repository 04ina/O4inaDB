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
        PTModule->past = (PTModuleMain *)PTModule; \
        parse_tree->modlist_head = (PTModuleMain *)PTModule; \
\
        parse_tree->modlist_down = (PTModuleMain *)PTModule; \
    } \
    else \
    { \
        PTModule->next = NULL; \
        PTModule->past = parse_tree->modlist_head; \
        parse_tree->modlist_head->next = (PTModuleMain *)PTModule; \
\
        parse_tree->modlist_head = (PTModuleMain *)PTModule; \
    } \
} while (0)

#define NUM_OF_REL_NAMES sizeof(parse_tree->rel_names) / sizeof(AttName)

void
InitParseTree(void)
{
    parse_tree = (ParseTree *) malloc(sizeof(ParseTree)); 
    CHECK_MALLOC_WORK(parse_tree);

    InitModuleList();

    parse_tree->type = PTT_NULL;

    parse_tree->rels_attinfo = NULL;
    parse_tree->num_of_rels = 0;
    parse_tree->rel_names = (RelName *) malloc(sizeof(RelName));
    CHECK_MALLOC_WORK(parse_tree->rel_names);
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
PushAttIntoPTModule_SELECT(const char *arg_att_name, const char *arg_rel_name)
{
    if (arg_att_name[0] == '*')
    {
        ((PTModule_Select *)parse_tree->modlist_head)->abolished = true;
        return;
    }

    if (((PTModule_Select *)parse_tree->modlist_head)->abolished == true)
        return;

    AttName         att_name;
    AttName         rel_name;
    AttListNode     *node;
    PTModule_Select *PTModule;

    /* create att_name string*/
    att_name = (AttName) malloc(ATTRIBUTE_NAME_SIZE);
    CHECK_MALLOC_WORK(att_name);
    strcpy(att_name, arg_att_name);

    /* create rel_name string*/
    if (arg_rel_name == NULL)
    {
        rel_name = NULL;        
    }
    else
    {
        rel_name = (RelName) malloc(ATTRIBUTE_NAME_SIZE);
        CHECK_MALLOC_WORK(rel_name);
        strcpy(rel_name, arg_rel_name);
    }

    /* push names into attlist*/
    PTModule = (PTModule_Select *)parse_tree->modlist_head;
    node = (AttListNode *) malloc(sizeof(AttListNode));
    CHECK_MALLOC_WORK(node);
    node->att_name = att_name;
    node->rel_name = rel_name;

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
}

/* ----------------------------------------------------------------
 *				        FROM imaginary module
 * ----------------------------------------------------------------
 */

void
AddRelationNameIntoPT(const char *rel_name)
{
    RelName   name;
    //snos 
    name = (RelName) malloc(RELATION_NAME_SIZE);
    CHECK_MALLOC_WORK(name);

    strcpy(name, rel_name);

    /* If we need to resize rel_names*/
    if (parse_tree->num_of_rels == NUM_OF_REL_NAMES)
    {
        parse_tree->rel_names = realloc(parse_tree->rel_names, 
                                        NUM_OF_REL_NAMES * 2 * sizeof(AttName));
        CHECK_REALLOC_WORK(parse_tree->rel_names); 
    }   
    parse_tree->rel_names[parse_tree->num_of_rels] = name;
    parse_tree->num_of_rels++;
}
/* ----------------------------------------------------------------
 *				        ORDER BY module
 * ----------------------------------------------------------------
 */

/*
 * Parse tree order by module initialization 
 */
PTModule_OrderBy *
InitPTModule_OrderBy(void) 
{
    PTModule_OrderBy *PTModule;

    PTModule = (PTModule_OrderBy *) malloc(sizeof(PTModule_OrderBy));
    CHECK_MALLOC_WORK(PTModule);

    PTModule->type = PTMOD_ORDERBY;
    PTModule->is_desc = false;

    PTModule->att_name = NULL;
    PTModule->att_type = NONE_TYPE;

    return PTModule;
}

/*
 * Add order by module in parse tree
 */
void
AddPTModule_OrderBy(void)
{
    PTModule_OrderBy *PTModule;

    PTModule = InitPTModule_OrderBy();

    PUSH_PT_MODULE; 

    return;
}

void 
PushAttIntoPTModule_OrderBy(const char *arg_att_name, const char *arg_rel_name)
{
    AttName att_name;
    RelName rel_name;
    PTModule_OrderBy *PTModule;

    att_name = (AttName) malloc(ATTRIBUTE_NAME_SIZE);
    CHECK_MALLOC_WORK(att_name);
    strcpy(att_name, arg_att_name);

    if (arg_rel_name == NULL)
    {
        rel_name = NULL;
    }
    else
    {
        rel_name = (RelName) malloc(ATTRIBUTE_NAME_SIZE);
        CHECK_MALLOC_WORK(rel_name);
        strcpy(rel_name, arg_rel_name);
    }

    PTModule = (PTModule_OrderBy *)parse_tree->modlist_head;

    PTModule->att_name = att_name;
    PTModule->rel_name = rel_name;
}

void 
PushOrderIntoPTModule_OrderBy(bool is_desc)
{
    PTModule_OrderBy *PTModule;

    PTModule = (PTModule_OrderBy *)parse_tree->modlist_head;

    PTModule->is_desc = is_desc;
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