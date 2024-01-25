
#include <parser.h>
#include <parse_tree.h>

#include "sql.tab.h"

ParseTree   *parse_tree;
    
void
QueryParse(void)
{

    /* Init parse tree */
    parse_tree = InitParseTree();
    
    
     
    
    
    
    yyparse();


   


    /*
     * semantic analysis query 
     */




}
