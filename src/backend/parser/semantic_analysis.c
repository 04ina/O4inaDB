/*------------------------------------------------------------------------- 
 *
 * semantic_analysis.c
 * 
 * Semantic analysis parse tree. This check exists attributes, relations 
 * and other types.
 * 
 * IDENTIFICATION 
 *      src/backend/parser/semantic_analysis.c
 *       
 *------------------------------------------------------------------------- 
 */

#include <catalog_relations.h>
#include <catalog_attributes.h>

#include <semantic_analysis.h>

#define ANALYZE_PARSE_TREE(_analyze_func_) \
    _analyze_func_(parse_tree, catalog_relations, \
                   catalog_attributes)

#define ANALYZE_SELECT_PARSE_TREE(_analyze_func_) \
    _analyze_func_(parse_tree, catalog_relations, \
                   catalog_attributes, current_PTModule)

/*
#define GET_MODULE_TYPE \
    *((PTModuleType *)current_PTModule + OFFSET_TYPE_MODULE)

#define GET_NEXT_MODULE \
    *((PTModuleMain *)(current_PTModule + OFFSET_PAST_MODULE))
*/

bool
ParseTreeSemanticAnalysis(ParseTree *parse_tree) 
{
    bool            result = false;
    bool            check = false;  
    ParseTreeType   PTtype;

    Relation        *catalog_relations; 
    Relation        *catalog_attributes; 
    Relation        *rel_buf;

    catalog_relations = GetCatalogRelations();
    catalog_attributes = GetCatalogAttributes();

    PrintRelation(catalog_relations); 
    PrintRelation(catalog_attributes); 

    GetRelationTuple(catalog_relations);
    GetRelationTuple(catalog_relations);

    GetRelationTuple(catalog_attributes);
    GetRelationTuple(catalog_attributes);
    GetRelationTuple(catalog_attributes);
    GetRelationTuple(catalog_attributes);
    GetRelationTuple(catalog_attributes);
    GetRelationTuple(catalog_attributes);

    PrintRelation(catalog_relations); 
    printf("\n");
    PrintRelation(catalog_attributes); 

/*
    RelAttribute *att;

    att = GetAttributes(catalog_relations, catalog_attributes, \
                        parse_tree->rel_name);
*/
    PTtype = parse_tree->type;

    /* checking for the existence of relation*/
    for (int i = 0; i < parse_tree->num_of_rels; i++)
    {
        check = CheckExistRelation(catalog_relations, parse_tree->rel_names[i]);
        if (!check)
        {
            printf("error: Relation \"%s\" does not exist\n", parse_tree->rel_names[i]);
            return false;
        }
    }

    /* Get attributes info*/
    parse_tree->rels_attinfo = WhereRelation_arrchar(&catalog_attributes, CT_EQUAL, 
                                                     ACR_ATT_REL_NAME, 
                                                     parse_tree->rel_names[0], false);
    OrderByRelation_int32(parse_tree->rels_attinfo, ACR_ATT_NUMBER, false);
    for (int i = 1; i < parse_tree->num_of_rels; i++)
    {
        rel_buf = WhereRelation_arrchar(&catalog_attributes, CT_EQUAL, 
                                        ACR_ATT_REL_NAME, 
                                        parse_tree->rel_names[i], false);
        OrderByRelation_int32(rel_buf, ACR_ATT_NUMBER, false);
        UnionRelations(parse_tree->rels_attinfo, rel_buf);
        DeleteRelation(rel_buf);
    }
    printf("\n");
    PrintRelation(parse_tree->rels_attinfo); 

    switch (PTtype)
    {
        /* processing a parse tree of a specific type */
        case PTT_SELECT:   
            result = ANALYZE_PARSE_TREE(SA_PTT_Select);
            break;
        case PTT_INSERT:
        
            break; 
        case PTT_DELETE:

            break;
        case PTT_DROP:

            break;
        case PTT_UPDATE:

            break;
        case PTT_NULL:
            fprintf(stderr, "accessing a nall-type parsing tree\n");
            break;
    }

    return result;
}

/*
 * Semantic analysis of select parse tree type
 *
 * returns ture, if there are no errors 
 */
bool
SA_PTT_Select(ParseTree *parse_tree, Relation *catalog_relations, \
              Relation *catalog_attributes)
{
    bool            check;
    bool            result = false;

    PTModuleMain    *current_PTModule;
    PTModuleMain    *next_PTModule;
    int32           mod_type = PTMOD_NONE;

    current_PTModule = (PTModuleMain *)parse_tree->modlist_down;
    while (true)
    {
        mod_type = current_PTModule->type; 
        switch (mod_type)
        {
            case PTMOD_SELECT:
                result = SA_PTMT_Select(parse_tree, current_PTModule);
                break;
            case PTMOD_JOIN:
                //result = ANALYZE_PARSE_TREE(SA_PTMT_Join); 
                break;
            case PTMOD_ORDERBY:
                result = ANALYZE_SELECT_PARSE_TREE(SA_PTMT_OrderBy); 
                break;
            case PTMOD_GROUPBY:
                //result = ANALYZE_PARSE_TREE(SA_PTMT_GroupBy); 
                break;
        }

        next_PTModule = current_PTModule->next;
        if (next_PTModule == NULL) /* If end of parse tree */
            break;

        current_PTModule = next_PTModule;
    }

    return result;
}

/*
 * Semantic analysis of select module 
 *
 * returns ture, if there are no errors 
 */
bool
SA_PTMT_Select(ParseTree *parse_tree, PTModuleMain *PTModule)
{
    bool        check;
    AttListNode *cur_att = ((PTModule_Select *)PTModule)->attlist_down;

    /* We need to select all attributes*/
    if (((PTModule_Select *)PTModule)->abolished) 
        return true;

    while(true)
    {
        check = CheckExistAttribute(parse_tree->rels_attinfo, cur_att->rel_name, cur_att->att_name);
        if (check == 0)
        {
            if (cur_att->rel_name == NULL)
                printf("error: The column \"%s\" does not exist\n", cur_att->att_name);
            else
                printf("error: The column \"%s.%s\" does not exist \n", cur_att->rel_name, cur_att->att_name);
            return false;
        }
        else if (check > 1)
        {
            printf("error: The attribute \"%s\" exists in several tables at once\n", cur_att->att_name);
            return false;
        }

        if (cur_att->next == NULL)
            break;
        cur_att = cur_att->next;
    }

    return true;
}

/*
 * Semantic analysis of select module 
 *
 * returns ture, if there are no errors 
 */
bool
SA_PTMT_OrderBy(ParseTree *parse_tree, Relation *catalog_relations, 
               Relation *catalog_attributes, PTModuleMain *PTModule)
{
    bool        check;
    AttName     att_name = ((PTModule_OrderBy *)PTModule)->att_name;
    AttName     rel_name = ((PTModule_OrderBy *)PTModule)->rel_name;
    int32       att_type;

    String      att_type_name;

    check = CheckExistAttribute(parse_tree->rels_attinfo, rel_name, att_name);
    if (check == 0)
    {
        if (rel_name == NULL)
            printf("error: The column \"%s\" does not exist\n", att_name);
        else
            printf("error: The column \"%s.%s\" does not exist \n", rel_name, att_name);
        return false;
    }
    else if (check > 1)
    {
        printf("error: The attribute \"%s\" exists in several tables at once\n", att_name);
        return false;
    }

    att_type = GetAttributeType(parse_tree->rels_attinfo, rel_name, att_name);

    if (att_type == INT_32 || \
        att_type == ARRCHAR)
    {
        /* this data type is supported*/

        ((PTModule_OrderBy *)PTModule)->att_type = att_type;

        return true;
    }
    else
    {
        att_type_name = GetNameAttType_ByNum(att_type);
        printf("error: You cannot sort a relationship by attribute \"%s\" with a data type \"%s\"\n", \
               att_name, att_type_name);
        free(att_type_name);
        return false; 
    }

}



/*
    printf("\nRelation name: %s\n",parse_tree->rel_name);

    if (((PTModule_Select *)parse_tree->modlist_head)->abolished == false)
        printf("%s",((PTModule_Select *)parse_tree->modlist_head)->attlist_down->next->att_name);
    else 
        printf("*"); 
*/