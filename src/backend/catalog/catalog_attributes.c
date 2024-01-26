#include <relation.h>
#include <catalog_attributes.h>

/*
 *At the moment, the system directory table with attributes
 *does not support an unambiguous identifier in the form of an ID
 */ 

typedef enum AttributesCatAtts {
    /* Unambiguous identification */
    ACR_REL_NAME,
    ACR_ATT_NAME,

    ACR_ATT_TYPE,
    ACR_ATT_SIZE,
    ACR_ATT_NUM
} AttributesCatAtts;

Relation *
GetCatalogAttributes(void) 
{
    RelAttribute    *att;
    Relation        *rel;

    att = (RelAttribute*) malloc(sizeof(RelAttribute) * NUM_ATT_CATALOG_ATTRIBUTES);
    CHECK_MALLOC_WORK(att);

    FILL_IN_ATTRIBUTE_INFORMATION(ACR_REL_NAME, "rel_name", ARRCHAR, 50);
    FILL_IN_ATTRIBUTE_INFORMATION(ACR_ATT_NAME, "att_name", ARRCHAR, 50);
    FILL_IN_ATTRIBUTE_INFORMATION(ACR_ATT_TYPE, "att_type", INT_32, 4);
    FILL_IN_ATTRIBUTE_INFORMATION(ACR_ATT_SIZE, "att_size", INT_32, 4);
    FILL_IN_ATTRIBUTE_INFORMATION(ACR_ATT_SIZE, "att_number", INT_32, 4);

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
