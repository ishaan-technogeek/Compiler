/* Group 25 :
Members:
    Ishaan Pavan Gupta 2022A7PS1180P
    Aayush Gupta       2022A7PS0088P
    Saksham Jain       2022A7PS0132P
    Mudit Gupta        2022A7PS0178P
    Aditi Bansal       2022A7PS0053P
    Kshitiz Gupta      2022A7PS0057P
 */
#include "lexerDef.h"

void initializeTwinBuffer(TwinBuffer* B, int fd);
TwinBuffer* initializeLexer(int fd);
int getStream(int fd, TwinBuffer* B);
char getNextChar(TwinBuffer* B);
void acceptLexeme(TwinBuffer* B);
void retractLexeme(TwinBuffer* B, int count);
int rangeMatch(char c, char start, char end);
char* copyString(char* start, char* end);
Token* createToken(Token* token, TokenName tokenType, char* lexeme, int lineNum, int isNumeric, Value* value);
int stringToInteger(char* str);
float stringToFloat(char* str);
void removeComments(char* sourceFile, TwinBuffer* B, char* outputFile);
Token* getToken(TwinBuffer* B);
char* getTerminal(int enumId) ;