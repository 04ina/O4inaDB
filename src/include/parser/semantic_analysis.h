/*------------------------------------------------------------------------- 
 *
 * semantic_analysis.h
 * 
 * Semantic analysis parse tree. This check exists attributes, relations 
 * and other types.
 * 
 * IDENTIFICATION 
 *      src/include/parser/semantic_analysis.h
 *       
 *------------------------------------------------------------------------- 
 */
#ifndef SEMANTIC_ANALYSIS_H
#define SEMANTIC_ANALYSIS_H

#include <parse_tree.h>
#include <relation.h>

bool
ParseTreeSemanticAnalysis(ParseTree *parse_tree);

bool
SA_PTT_Select(ParseTree *parse_tree, Relation *catalog_relations, 
              Relation *catalog_attributes);
              
bool
SA_PTMT_Select(ParseTree *parse_tree, PTModuleMain *PTModule);

bool
SA_PTMT_OrderBy(ParseTree *parse_tree, Relation *catalog_relations, 
               Relation *catalog_attributes, PTModuleMain *PTModule);


#endif /* SEMANTIC_ANALYSIS_H */
