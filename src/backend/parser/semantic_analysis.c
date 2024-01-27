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

void
ParseTreeSemanticAnalysis(ParseTree *parse_tree) 
{
    bool            result = false;
    ParseTreeType   PTtype;

    Relation        *catalog_relations; 
    Relation        *catalog_attributes; 

    catalog_relations = GetCatalogRelations();
    catalog_attributes = GetCatalogAttributes();

    PrintRelation(catalog_relations); 
    PrintRelation(catalog_attributes); 

    GetRelationTuple(catalog_relations);
    GetRelationTuple(catalog_attributes);
    GetRelationTuple(catalog_attributes);
    GetRelationTuple(catalog_attributes);

    PrintRelation(catalog_relations); 
    printf("\n");
    PrintRelation(catalog_attributes); 

    RelAttribute *att;

    att = GetAttributes(catalog_relations, catalog_attributes, \
                        parse_tree->rel_name);


    PTtype = parse_tree->type;

    switch (PTtype)
    {
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

    PTModule_Select *PTModule;
    PTModulePt      current_PTModule;
    PTModuleType    mod_type;

    PTModule = (PTModule_Select *)parse_tree->modlist_head;

    /* checking for the existence of relation*/
    check = CheckExistRelation(catalog_relations, parse_tree->rel_name);
    if (!check)
    {
        printf("error: Relation \"%s\" does not exist\n", parse_tree->rel_name);
        return false;
    }


    PTModulePt past_module;

    current_PTModule = parse_tree->modlist_head;
    while (true)
    {
        mod_type = *((PTModuleType *)current_PTModule + OFFSET_TYPE_MODULE);

        switch (mod_type)
        {
            case PTMOD_SELECT:
                result = ANALYZE_SELECT_PARSE_TREE(SA_PTMT_Select);
                break;
            case PTMOD_JOIN:
                //result = ANALYZE_PARSE_TREE(SA_PTMT_Join); 
                break;
            case PTMOD_ORDERBY:
                //result = ANALYZE_PARSE_TREE(SA_PTMT_OrderBy); 
                break;
            case PTMOD_GROUPBY:
                //result = ANALYZE_PARSE_TREE(SA_PTMT_GroupBy); 
                break;
        }
//        printf("k %p %p %p k\n", &PTModule->type, &PTModule->next, &PTModule->past);
//       printf("%ld %ld\n", sizeof(PTModulePt), sizeof(PTModuleType));
//        printf("cacawki %p %p\n",*((PTModulePt *)(current_PTModule + OFFSET_PAST_MODULE)) , current_PTModule);

        if (memcmp(current_PTModule,*((PTModulePt *)(current_PTModule + OFFSET_PAST_MODULE)), sizeof(PTModulePt)) == 0)
        {
            break;
        }

        memcpy(current_PTModule, *((PTModulePt *)(current_PTModule + OFFSET_PAST_MODULE)), sizeof(PTModulePt));
    }

    return result;
}

/*
 * Semantic analysis of select module 
 *
 * returns ture, if there are no errors 
 */
bool
SA_PTMT_Select(ParseTree *parse_tree, Relation *catalog_relations, 
               Relation *catalog_attributes, PTModulePt PTModule)
{
    bool        check;
    AttListNode *cur_att = ((PTModule_Select *)PTModule)->attlist_down;

    if (((PTModule_Select *)PTModule)->abolished) 
    {
        RelAttribute *att;
        int32 num_atts;

        att = GetAttributes(catalog_relations, catalog_attributes, \
                            parse_tree->rel_name);
        num_atts = GetNumberRelAttributes(catalog_attributes, parse_tree->rel_name);
        if (num_atts == 0)
        {
            printf("error: Relation \"%s\" has no attribute", parse_tree->rel_name);
            return false;
        }
        
        for(int i = 0; i < num_atts; i++)
        {
            check = CheckExistAttribute(catalog_attributes, parse_tree->rel_name, att[i].name);
            if (!check)
            {
                printf("error: Attribute \"%s\" does not exist\n", att[i].name);
                return false;
            }
        }
        printf("aboba1\n");
        return true;
    }

    while(true)
    {

        printf("aboba2\n");
        check = CheckExistAttribute(catalog_attributes, parse_tree->rel_name, cur_att->att_name);
        if (!check)
        {
            printf("error: Relation \"%s\" does not have the attribute \"%s\"\n", parse_tree->rel_name, cur_att->att_name);
            return false;
        }

        if (cur_att->next == NULL)
            break;
        cur_att = cur_att->next;
    }

    return true;
}



/*
    printf("\nRelation name: %s\n",parse_tree->rel_name);

    if (((PTModule_Select *)parse_tree->modlist_head)->abolished == false)
        printf("%s",((PTModule_Select *)parse_tree->modlist_head)->attlist_down->next->att_name);
    else 
        printf("*"); 
*/