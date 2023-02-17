%{
#include <bits/stdc++.h>
using namespace std;
int yylex();

extern int yylex();
extern int yylineno;
#define YYDEBUG 1

void yyerror(const char* error){
    fprintf (stderr, "%s | %d\n",s,yylineno);
    return 0;
}
%}

%define parse.error verbose
%locations

%union{
    char[1000] s;
}

%token <s> 

%token <s>

%start input

%%


%%

int main(){
    #if YYDEBUG
        yydebug = 1;
    #endif
    yyparse();
}