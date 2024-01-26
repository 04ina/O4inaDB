#include <relation.h>
#include <catalog_relations.h>

/*
 * At the moment, the system directory table with the relationships
 * does not support an unambiguous identifier in the form of an ID
 */
typedef enum AttributesCatRels{
    /* Unambiguous identification */
    ACR_REL_NAME,
    ACR_REL_FILE
    //ACR_REL_ATTS_QUANTITY
} AttributesCatRels;

Relation *
GetCatalogRelations(void) 
{
    RelAttribute    *att;
    Relation        *rel;

    att = (RelAttribute*) malloc(sizeof(RelAttribute) * NUM_ATT_CATALOG_RELATIONS);
    CHECK_MALLOC_WORK(att);

    FILL_IN_ATTRIBUTE_INFORMATION(ACR_REL_NAME, "rel_name", ARRCHAR, 50);
    FILL_IN_ATTRIBUTE_INFORMATION(ACR_REL_FILE, "rel_file", ARRCHAR, 50);
    //FILL_IN_ATTRIBUTE_INFORMATION(ACR_REL_ATTS_QUANTITY, "rel_atts_quantity", INT_32, 4);

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


/*
 * Get relation using Relation name 
 */
Relation *
GetRelation(Relation *catalog_relations, Relation *catalog_attributes,
            const char *rel_name)
{
    RelAttribute    *att;
    Relation        *rel;

    att = (RelAttribute*) malloc(sizeof(RelAttribute) * NUM_ATT_CATALOG_RELATIONS);
    CHECK_MALLOC_WORK(att);


    GetRelationFile(const char *rel_name);



    rel = InitRelation(att, NUM_ATT_CATALOG_RELATIONS);

    ReadRelation(rel, "catalog_relations.rel");

    return rel;
}