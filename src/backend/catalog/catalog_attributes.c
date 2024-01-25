#include <relation.h>
#include <catalog_attributes.h>

Relation *
GetCatalogAttributes(void) 
{
    RelAttribute    *att;
    Relation        *rel;

    att = (RelAttribute*) malloc(sizeof(RelAttribute) * NUM_ATT_CATALOG_ATTRIBUTES);
    if (att == NULL) 
    { 
        fprintf(stderr, "Fatal: failed to allocate %lu bytes.\n", \
                sizeof(RelAttribute) * NUM_ATT_CATALOG_ATTRIBUTES); 
        abort(); 
    } 

    /*
     * Init attid attribute
     */
    att[0].name = (AttName) malloc(strlen("attid") + 1);
    if (att[0].name == NULL) 
    { 
        fprintf(stderr, "Fatal: failed to allocate %lu bytes.\n", \
                strlen("attid")+1 ); 
        abort(); 
    } 
    strcpy(att[0].name, "attid");
    att[0].type = INT_32;
    att[0].size = 4;

    /*
     * Init relid attribute
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

    /*
     * Init attname attribute
     */
    att[2].name = (AttName) malloc(strlen("attname") + 1);
    if (att[2].name == NULL) 
    { 
        fprintf(stderr, "Fatal: failed to allocate %lu bytes.\n", \
                strlen("attname")+1 ); 
        abort(); 
    } 
    strcpy(att[2].name, "attname");
    att[2].type = ARRCHAR;
    att[2].size = 50;

    /*
     * Init atttype attribute
     */
    att[3].name = (AttName) malloc(strlen("atttype") + 1);
    if (att[3].name == NULL) 
    { 
        fprintf(stderr, "Fatal: failed to allocate %lu bytes.\n", \
                strlen("atttype")+1 ); 
        abort(); 
    } 
    strcpy(att[3].name, "atttype");
    att[3].type = INT_32;
    att[3].size = 4;

    /*
     * Init attsize attribute
     */
    att[4].name = (AttName) malloc(strlen("attsize") + 1);
    if (att[4].name == NULL) 
    { 
        fprintf(stderr, "Fatal: failed to allocate %lu bytes.\n", \
                strlen("attsize")+1 ); 
        abort(); 
    } 
    strcpy(att[4].name, "attsize");
    att[4].type = INT_32;
    att[4].size = 4;

    rel = InitRelation(att, NUM_ATT_CATALOG_ATTRIBUTES);

    ReadRelation(rel, "catalog_relations.rel");

    return rel;
}

bool
CheckExistAttribute(Relation *catalog_attributes, 
                    const char *rel_name, const char *att_name)
{
    return CheckExistTuple_TwoArrchar(catalog_attributes, 
                                   1, rel_name, 2, att_name);
}
