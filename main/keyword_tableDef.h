/* Group 25 :
Members:
    Ishaan Pavan Gupta 2022A7PS1180P
    Aayush Gupta       2022A7PS0088P
    Saksham Jain       2022A7PS0132P
    Mudit Gupta        2022A7PS0178P
    Aditi Bansal       2022A7PS0053P
    Kshitiz Gupta      2022A7PS0057P
 */
#ifndef KEYWORD_TABLE_DEF_
#define KEYWORD_TABLE_DEF_

#include "lexerDef.h"

// Node actually storing the keyword!
typedef struct {
    char* lexeme;
    TokenName token;
} KeywordEntry;

#endif
