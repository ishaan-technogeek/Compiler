
#include "lexerDef.h"


void initializeTwinBuffer(TwinBuffer* B);
int getStream(int fd, TwinBuffer* B);
char getNextChar(TwinBuffer* B);
void acceptLexeme(TwinBuffer* B);
void retractLexeme(TwinBuffer* B, int count);
int rangeMatch(char c, char start, char end);
char* copyString(char* start, char* end);
Token* createToken(Token* token, TokenName tokenType, char* lexeme, int lineNum, int isNumeric, Value* value);
int stringToInteger(char* str);
float stringToFloat(char* str);
void removeComments(char* sourceFile);
Token* getToken(TwinBuffer* B);