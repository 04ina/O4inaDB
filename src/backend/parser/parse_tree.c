#include <parse_tree.h>

ParseTree *
InitParseTree(void)
{
    ParseTree *parse_tree = (ParseTree *) malloc(sizeof(ParseTree)); 
    CHECK_MALLOC_WORK(parse_tree);

    parse_tree->end = NULL;
    parse_tree->head = NULL;

    /* Init push Modules function */
    PushPTNode(parse_tree);

    parse_tree->rel_name = (RelName) malloc(RELATION_NAME_SIZE); 
    CHECK_MALLOC_WORK(parse_tree->rel_name);

    return parse_tree;
}

/*
 * Pushed node on top of the parse tree 
 *
 * If arg1 is not NULL, func PushPTNode() will be reinitialized.
 * with new parse tree
 */
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
