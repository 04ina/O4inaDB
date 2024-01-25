#include <relation.h>
#include <catalog_relations.h>

Relation *
GetCatalogRelations(void) 
{
    RelAttribute    *att;
    Relation        *rel;

    att = (RelAttribute*) malloc(sizeof(RelAttribute) * NUM_ATT_CATALOG_RELATIONS);
    if (att == NULL) 
    { 
        fprintf(stderr, "Fatal: failed to allocate %lu bytes.\n", \
                sizeof(RelAttribute) * NUM_ATT_CATALOG_RELATIONS); 
        abort(); 
    } 

    /*
     * Init relid attribute
     */
    att[0].name = (AttName) malloc(strlen("relid") + 1);
    if (att[0].name == NULL) 
    { 
        fprintf(stderr, "Fatal: failed to allocate %lu bytes.\n", \
                strlen("relid")+1 ); 
        abort(); 
    } 
    strcpy(att[0].name, "relid");
    att[0].type = INT_32;
    att[0].size = 4;

    /*
     * Init relname attribute
     */
    att[1].name = (AttName) malloc(strlen("relname") + 1);
    if (att[1].name == NULL) 
    { 
        fprintf(stderr, "Fatal: failed to allocate %lu bytes.\n", \
                strlen("relname")+1 ); 
        abort(); 
    } 
    strcpy(att[1].name, "relname");
    att[1].type = ARRCHAR;
    att[1].size = 50;

    rel = InitRelation(att, NUM_ATT_CATALOG_RELATIONS);

    ReadRelation(rel, "catalog_relations.rel");

    return rel;
}

bool
CheckExistRelation(Relation *catalog_relations, 
                   const char *rel_name)
{
    return CheckExistTuple_Arrchar(catalog_relations, 1, rel_name);
}

