
#include <parser.h>
#include <parse_tree.h>
#include <semantic_analysis.h>

#include "sql.tab.h"

extern ParseTree   *parse_tree;
    
void
QueryParse(void)
{

    /* Init parse tree */
    InitParseTree();
     
    
    yyparse();

    ParseTreeSemanticAnalysis(parse_tree);

   


    /*
     * semantic analysis query 
     */




}
