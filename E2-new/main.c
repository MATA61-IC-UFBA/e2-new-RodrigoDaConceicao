/* main.c */
#include <stdio.h>
#include "token.h"

extern int yylex(void);
extern int yylval;

int main(int argc, char **argv)
{
    int tok;
    do
    {
        tok = yylex();
        if (tok == NUMBER)
            printf("constante decimal: %d\n", yylval);
        else
            printf("código do token: %d\n", tok);
    } while (tok);
}