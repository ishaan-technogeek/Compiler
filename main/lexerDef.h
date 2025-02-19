
#ifndef LEX_DEF_
#define LEX_DEF_
#define BUFFER_SIZE 50

typedef enum TokenName {
    TK_ASSIGNOP,
    TK_COMMENT,
    TK_FIELDID,
    TK_ID,
    TK_NUM,
    TK_RNUM,
    TK_FUNID,
    TK_RUID,
    TK_WITH,
    TK_PARAMETERS,
    TK_END,
    TK_WHILE,
    TK_UNION,
    TK_ENDUNION,
    TK_DEFINETYPE,
    TK_AS,
    TK_TYPE,
    TK_MAIN,
    TK_GLOBAL,
    TK_PARAMETER,
    TK_LIST,
    TK_SQL,
    TK_SQR,
    TK_INPUT,
    TK_OUTPUT,
    TK_INT,
    TK_REAL,
    TK_COMMA,
    TK_SEM,
    TK_COLON,
    TK_DOT,
    TK_ENDWHILE,
    TK_OP,
    TK_CL,
    TK_IF,
    TK_THEN,
    TK_ENDIF,
    TK_READ,
    TK_WRITE,
    TK_RETURN,
    TK_PLUS,
    TK_MINUS,
    TK_MUL,
    TK_DIV,
    TK_CALL,
    TK_RECORD,
    TK_ENDRECORD,
    TK_ELSE,
    TK_AND,
    TK_OR,
    TK_NOT,
    TK_LT,
    TK_LE,
    TK_EQ,
    TK_GT,
    TK_GE,
    TK_NE,
    TK_ERR,
    TK_DOLLAR,
    TK_EPS
} TokenName;
// ,   
typedef union Value {
    int INT_VALUE;
    float FLOAT_VALUE;
} Value;

typedef struct Token {
    TokenName TOKEN_NAME;
    char* LEXEME;
    int LINE_NO;

    // Stores 0 if not a number, 1 if an integer, 2 if a real number
    // Also used to segregate lexical errors,
    // 3 to denote an error when token identification fails,
    // 4 to denote an error if the token is identified but does not respect the constraints
    // 5 to denote an error if two identifiers are declared back to back
    // 6 to denote an unknown symbol
    int IS_NUMBER;

    Value* VALUE; // Stores NULL if the Token is not a number
} Token;

typedef struct TwinBuffer {
    
    // Pair of buffers for input
    char buffPair[2][BUFFER_SIZE];
    // Keeps track of the current buffer
    int activeBuffer;

    int nextBuffer;
    // Pointer which points to the beginning of the lexeme to which a token is to be assigned
    char* startLexeme;
    // Pointer which functions as a lookahead to determine the token of the current lexeme
    char* lookahead;
} TwinBuffer;
    
#endif
