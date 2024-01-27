/*------------------------------------------------------------------------- 
 *
 * catalog_relations.c
 * 
 * Meta information about relations
 * 
 * IDENTIFICATION 
 *      src/backend/catalog/catalog_relations.c
 * 
 *------------------------------------------------------------------------- 
 */

#include <relation.h>
#include <catalog_relations.h>
#include <catalog_attributes.h>

Relation *
GetCatalogRelations(void) 
{
    RelAttribute    *att;
    Relation        *rel;

    att = (RelAttribute*) malloc(sizeof(RelAttribute) * \
                                 NUM_ATT_CATALOG_RELATIONS);
    CHECK_MALLOC_WORK(att);

    FILL_IN_ATT_INFO(ACR_REL_NAME, "rel_name", ARRCHAR, ACR_REL_NAME_SIZE);
    FILL_IN_ATT_INFO(ACR_REL_FILE, "rel_file", ARRCHAR, ACR_REL_FILE_SIZE);
    FILL_IN_ATT_INFO(ACR_REL_NUM_ATTS, "rel_num_att", INT_32, ACR_REL_NUM_ATTS_SIZE);

    rel = InitRelation(att, NUM_ATT_CATALOG_RELATIONS);

    ReadRelation(rel, "catalog_relations.rel");

    return rel;
}


bool
CheckExistRelation(Relation *catalog_relations, 
                   const char *rel_name)
{
    return CheckExistTuple_Arrchar(catalog_relations, ACR_REL_NAME, rel_name);
}

String
GetRelationFile(Relation *catalog_relations, const char *rel_name) 
{
    /* relation with relation info*/
    Relation        *rel; 

    RelTupleNode    *cur_tup;
    int32           offset = 0;
    String          file_name;

    file_name = (String) calloc(ACR_REL_FILE_SIZE + 1, sizeof(char));
    CHECK_MALLOC_WORK(file_name);

    /* get relations with attributes info*/
    rel = WhereRelation_arrchar(&catalog_relations, CT_EQUAL, 
                                          ACR_REL_NAME, rel_name, false);
    if (rel->tup_n > 1)
    {
        fprintf(stderr, "Fatal: there are several relationships with a single unique identifier.\n");
        abort();
    }

    GET_ATTRIBUTE_OFFSET(offset, ACR_REL_NAME);
    memcpy(file_name, (cur_tup->data + offset), ACR_REL_FILE_SIZE);

    for(int i = 0; i < ACR_REL_FILE_SIZE; i++)
    {
        if (file_name[i] == 0)
        {
            file_name[i+1] = '\0';
            break;
        }
    }

    return file_name;

}


/*
 * Get relation using Relation name 
 */
Relation *
GetRelation(Relation *catalog_relations, Relation *catalog_attributes,
            const char *rel_name)
{
    RelAttribute    *att;
    int32           num_atts;
    Relation        *rel;
    RelName         name;

    name = GetRelationFile(catalog_relations, rel_name);

    att = GetAttributes(catalog_relations, catalog_attributes, rel_name);

    num_atts = GetNumberRelAttributes(catalog_relations, rel_name);

    rel = InitRelation(att, num_atts);

    ReadRelation(rel, name);

    return rel;
}





/*
RelAttribute *
GetAttribute(Relation *catalog_relations, Relation *catalog_attributes,
             const char *rel_name)
{
    



}
*/

