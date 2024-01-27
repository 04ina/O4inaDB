/*
 *
 * O4inaDB backend interface
 *
 */
#include <O4inaDB.h>

#include <parser.h>
#include <relation.h>

#include <catalog_relations.h>
#include <catalog_attributes.h>

void
ExecQuery(void) 
{
    /*
    Relation    *catalog_attributes;
    Relation    *catalog_relations;

    catalog_attributes = GetCatalogAttributes();
    catalog_relations = GetCatalogRelations();

    GetRelationTuple(catalog_relations);
    PrintRelation(catalog_relations);
    */
     
    QueryParse();
    return;
}



void
O4inaDBMain(void)
{


   
    /*

    GetQueryString(); 

    */

    
    ExecQuery(); // <- query string

    return;
}
