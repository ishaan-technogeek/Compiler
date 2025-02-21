/* Group 25 :
Members:
    Ishaan Pavan Gupta 2022A7PS1180P
    Aayush Gupta       2022A7PS0088P
    Saksham Jain       2022A7PS0132P
    Mudit Gupta        2022A7PS0178P
    Aditi Bansal       2022A7PS0053P
    Kshitiz Gupta      2022A7PS0057P
 */
#include "interface.h"
#include "keyword_table.h"
#include "lexerDef.h"

#define NUMBER_KEYWORDS 28

// Commenting this line as the keyword table is declared as global in the header file
// Uncommenting it due to compile time errors


KeywordEntry keywordTable[NUMBER_KEYWORDS] = {
    {"with", TK_WITH}, {"parameters", TK_PARAMETERS}, {"end", TK_END},
    {"while", TK_WHILE}, {"union", TK_UNION}, {"endunion", TK_ENDUNION},
    {"definetype", TK_DEFINETYPE}, {"as", TK_AS}, {"type", TK_TYPE},
    {"_main", TK_MAIN}, {"global", TK_GLOBAL}, {"parameter", TK_PARAMETER},
    {"list", TK_LIST}, {"input", TK_INPUT}, {"output", TK_OUTPUT},
    {"int", TK_INT}, {"real", TK_REAL}, {"endwhile", TK_ENDWHILE},
    {"if", TK_IF}, {"then", TK_THEN}, {"endif", TK_ENDIF},
    {"read", TK_READ}, {"write", TK_WRITE}, {"return", TK_RETURN},
    {"call", TK_CALL}, {"record", TK_RECORD}, {"endrecord", TK_ENDRECORD},
    {"else", TK_ELSE}
};

// Function to search for a lexeme in the keyword table (Linear Search)
TokenName lookUp(char* lexeme) {
    for (int i = 0; i < NUMBER_KEYWORDS; i++) {
        if (strcmp(keywordTable[i].lexeme, lexeme) == 0)
            return keywordTable[i].token;
    }
    return -1; // Return -1 if not found (assuming -1 is an invalid token)
}

// Function to print the keyword table (for debugging)
void printKeywordTable() {
    printf("Keyword Table:\n");
    for (int i = 0; i < NUMBER_KEYWORDS; i++) {
        printf("%s -> Token %d\n", keywordTable[i].lexeme, keywordTable[i].token);
    }
}