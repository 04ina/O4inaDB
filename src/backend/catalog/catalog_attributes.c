#include <relation.h>
#include <catalog_attributes.h>


Relation *
GetCatalogAttributes(void) 
{
    RelAttribute    *att;
    Relation        *rel;

    att = (RelAttribute*) malloc(sizeof(RelAttribute) * NUM_ATT_CATALOG_ATTRIBUTES);
    CHECK_MALLOC_WORK(att);

    FILL_IN_ATTRIBUTE_INFORMATION(ACR_ATT_REL_NAME, "rel_name", ARRCHAR, ACR_ATT_REL_NAME_SIZE);
    FILL_IN_ATTRIBUTE_INFORMATION(ACR_ATT_NAME, "att_name", ARRCHAR, ACR_ATT_NAME_SIZE);
    FILL_IN_ATTRIBUTE_INFORMATION(ACR_ATT_TYPE, "att_type", INT_32, ACR_ATT_TYPE_SIZE);
    FILL_IN_ATTRIBUTE_INFORMATION(ACR_ATT_SIZE, "att_size", INT_32, ACR_ATT_SIZE_SIZE);
    FILL_IN_ATTRIBUTE_INFORMATION(ACR_ATT_NUMBER, "att_number", INT_32, ACR_ATT_NUMBER_SIZE);

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