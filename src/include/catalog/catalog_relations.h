#include <relation.h>

#define NUM_ATT_CATALOG_RELATIONS   2

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

typedef enum AttributesCatRelsSize{
    /* Unambiguous identification */
    ACR_REL_NAME_SIZE = 50,
    ACR_REL_FILE_SIZE = 50
    //ACR_REL_ATTS_QUANTITY
} AttributesCatRelsSize;

Relation *
GetCatalogRelations(void);

String
GetRelationFile(Relation *catalog_relations, const char *rel_name);

RelAttribute *
GetAttributes(Relation *catalog_relations, Relation *catalog_attributes,
             const char *rel_name);

Relation *
GetRelation(Relation *catalog_relations, Relation *catalog_attributes,
            const char *rel_name);
