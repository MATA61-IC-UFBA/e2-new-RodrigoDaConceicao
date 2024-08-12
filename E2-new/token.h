/* token.h */
#ifndef TOKEN_H
#define TOKEN_H
typedef enum
{
    EOL = 0, // newline (final de linha)
    NUMBER,  // 1
    PLUS,    // 2
    MINUS,   // 3
    TIMES,   // 4
    DIV,     // 5
    ERROR,   // 6
} token_t;
#endif