#include <relation.h>
#include <catalog_attributes.h>
#include <catalog_relations.h>

Relation *
GetCatalogAttributes(void) 
{
    RelAttribute    *att;
    Relation        *rel;

    att = (RelAttribute*) malloc(sizeof(RelAttribute) * NUM_ATT_CATALOG_ATTRIBUTES);
    CHECK_MALLOC_WORK(att);

    FILL_IN_ATT_INFO(ACR_ATT_REL_NAME, "rel_name", ARRCHAR, ACR_ATT_REL_NAME_SIZE);
    FILL_IN_ATT_INFO(ACR_ATT_NAME, "att_name", ARRCHAR, ACR_ATT_NAME_SIZE);
    FILL_IN_ATT_INFO(ACR_ATT_TYPE, "att_type", INT_32, ACR_ATT_TYPE_SIZE);
    FILL_IN_ATT_INFO(ACR_ATT_SIZE, "att_size", INT_32, ACR_ATT_SIZE_SIZE);
    FILL_IN_ATT_INFO(ACR_ATT_NUMBER, "att_number", INT_32, ACR_ATT_NUMBER_SIZE);

    rel = InitRelation(att, NUM_ATT_CATALOG_ATTRIBUTES);

    ReadRelation(rel, "catalog_relations.rel");

    return rel;
}

bool
CheckExistAttribute(Relation *catalog_attributes, 
                    const char *rel_name, const char *att_name)
{
    return CheckExistTuple_TwoArrchar(catalog_attributes, 
                                      ACR_ATT_REL_NAME, rel_name, 
                                      ACR_ATT_NAME, att_name);
}

RelAttribute *
GetAttributes(Relation *catalog_relations, Relation *catalog_attributes,
             const char *rel_name)
{
    /* relation with attributes info*/
    Relation        *rel; 
    RelAttribute    *att;

    RelTupleNode    *cur_tup;
    int32           offset = 0;
    int32           num_atts;

    num_atts = GetNumberRelAttributes(catalog_attributes, rel_name);

    att = (RelAttribute*) malloc(sizeof(RelAttribute) * num_atts);
    CHECK_MALLOC_WORK(att);

    /* get relations with attributes info*/
    rel = WhereRelation_arrchar(&catalog_attributes, CT_EQUAL, 
                                          ACR_ATT_REL_NAME, rel_name, false);
    /* sort by attributes number*/
    OrderByRelation_int32(rel, ACR_ATT_NUMBER, false); 

    GET_ATTRIBUTE_OFFSET(offset, ACR_ATT_NAME);
    offset = 0;

    PrintRelation(rel);
    // Search desired tuple 
    cur_tup = rel->tup.head;
    for (int i = 0; i < rel->tup_n; i++) 
    {
        att[i].name = (char *) malloc(ATTRIBUTE_NAME_SIZE); 
        CHECK_MALLOC_WORK(att[i].name);

        GET_ATTRIBUTE_OFFSET(offset, ACR_ATT_NAME);
        memcpy(att[i].name, (cur_tup->data + offset), ACR_ATT_NAME_SIZE);
        offset = 0;

        GET_ATTRIBUTE_OFFSET(offset, ACR_ATT_TYPE);
        memcpy(&att[i].type, (cur_tup->data + offset), sizeof(int32));
        offset = 0;

        GET_ATTRIBUTE_OFFSET(offset, ACR_ATT_SIZE);
        memcpy(&att[i].size, (cur_tup->data + offset), sizeof(Size));
        offset = 0;

        GET_ATTRIBUTE_OFFSET(offset, ACR_ATT_NUMBER);
        memcpy(&att[i].number, (cur_tup->data + offset), sizeof(int32));
        offset = 0;

        cur_tup = cur_tup->next;
    }

    return att;
}

int32
GetNumberRelAttributes(Relation *catalog_attributes, const char *rel_name)
{
    int32           result;
    Relation        *rel; 
    RelTupleNode    *cur_tup;
    int32           offset = 0;

    /* get relations with attributes info*/
    rel = WhereRelation_arrchar(&catalog_attributes, CT_EQUAL, \
                                ACR_ATT_REL_NAME, rel_name, false);
    printf("---------%d-----------\n",rel->tup_n);                           
    result = rel->tup_n;

    return result;
}