/* Group 27
Venkat Nalla Siddartha Reddy                2016A7PS0030P
Arnav Sailesh                               2016A7PS0054P
Gunraj Singh                                2016A7PS0085P
Aashish Singh                               2016A7PS0683P */
#ifndef KEYWORD_TABLE_DEF_
#define KEYWORD_TABLE_DEF_

#include "lexerDef.h"

// Node actually storing the keyword!
typedef struct {
    char* lexeme;
    TokenName token;
} KeywordEntry;

#endif
