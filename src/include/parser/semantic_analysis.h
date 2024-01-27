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

void
ParseTreeSemanticAnalysis(ParseTree *parse_tree);

#endif /* SEMANTIC_ANALYSIS_H */