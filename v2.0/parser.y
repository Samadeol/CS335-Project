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
    char[1000] str;
}

%token <str> BOOLEAN_TYPE COMMA DOT EXTENDS FLOAT_POINT_TYPE GREATER_THAN IDENTIFIER INTEGRAL_TYPE LEFT_SQUARE_BRACE LESS_THAN QUESTION RIGHT_SQUARE_BRACE SUPER
%type <str> ArrayType ClassType Dims DotIdentifiers NumericType PrimitiveType ReferenceType Type TypeArgument TypeArgumentList TypeArguments Wildcard

%start input

%%

input: Type

Type:
PrimitiveType
| ReferenceType
;

PrimitiveType:
NumericType
| BOOLEAN_TYPE
;

NumericType:
INTEGRAL_TYPE
| FLOAT_POINT_TYPE
;

ReferenceType:
ClassType
| ArrayType
;

ClassType:
DotIdentifiers     //Package_Name -> DotIdentifiers
| DotIdentifiers TypeArguments 
| ClassType DOT IDENTIFIER 
| ClassType DOT IDENTIFIER TypeArguments 
;

DotIdentifiers:
DotIdentifiers DOT IDENTIFIER
| IDENTIFIER
;

ArrayType:
Type Dims
;

Dims:
Dims LEFT_SQUARE_BRACE RIGHT_SQUARE_BRACE
| LEFT_SQUARE_BRACE RIGHT_SQUARE_BRACE
;

TypeArguments:
LESS_THAN TypeArgumentList GREATER_THAN
;

TypeArgumentList:
TypeArgumentList COMMA TypeArgument
| TypeArgument
;

TypeArgument:
ReferenceType
| Wildcard
;

Wildcard:
QUESTION EXTENDS ReferenceType
| QUESTION SUPER ReferenceType
| QUESTION
;

//ModuleName, PackageName, TypeName, ExpressionName, MethodName, PackageOrTypeName, AmbiguosName -> DotIdentifiers

ClassDeclaration:
| NormalClassDeclaration
| EnumDeclaration
| RecordDeclaration
;

NormalClassDeclaration:
CLASS TypeIdentifier ClassBody 
| CLASS TypeIdentifier ClassPermits ClassBody 
| CLASS TypeIdentifier ClassImplements ClassBody 
| CLASS TypeIdentifier ClassImplements ClassPermits ClassBody 
| CLASS TypeIdentifier ClassExtends ClassBody 
| CLASS TypeIdentifier ClassExtends ClassPermits ClassBody 
| CLASS TypeIdentifier ClassExtends ClassImplements ClassBody 
| CLASS TypeIdentifier ClassExtends ClassImplements ClassPermits ClassBody 
| CLASS TypeIdentifier TypeParameters ClassBody 
| CLASS TypeIdentifier TypeParameters ClassPermits ClassBody 
| CLASS TypeIdentifier TypeParameters ClassImplements ClassBody 
| CLASS TypeIdentifier TypeParameters ClassImplements ClassPermits ClassBody 
| CLASS TypeIdentifier TypeParameters ClassExtends ClassBody 
| CLASS TypeIdentifier TypeParameters ClassExtends ClassPermits ClassBody 
| CLASS TypeIdentifier TypeParameters ClassExtends ClassImplements ClassBody 
| CLASS TypeIdentifier TypeParameters ClassExtends ClassImplements ClassPermits ClassBody 
| ClassModifiers CLASS TypeIdentifier ClassBody 
| ClassModifiers CLASS TypeIdentifier ClassPermits ClassBody 
| ClassModifiers CLASS TypeIdentifier ClassImplements ClassBody 
| ClassModifiers CLASS TypeIdentifier ClassImplements ClassPermits ClassBody 
| ClassModifiers CLASS TypeIdentifier ClassExtends ClassBody 
| ClassModifiers CLASS TypeIdentifier ClassExtends ClassPermits ClassBody 
| ClassModifiers CLASS TypeIdentifier ClassExtends ClassImplements ClassBody 
| ClassModifiers CLASS TypeIdentifier ClassExtends ClassImplements ClassPermits ClassBody 
| ClassModifiers CLASS TypeIdentifier TypeParameters ClassBody 
| ClassModifiers CLASS TypeIdentifier TypeParameters ClassPermits ClassBody 
| ClassModifiers CLASS TypeIdentifier TypeParameters ClassImplements ClassBody 
| ClassModifiers CLASS TypeIdentifier TypeParameters ClassImplements ClassPermits ClassBody 
| ClassModifiers CLASS TypeIdentifier TypeParameters ClassExtends ClassBody 
| ClassModifiers CLASS TypeIdentifier TypeParameters ClassExtends ClassPermits ClassBody 
| ClassModifiers CLASS TypeIdentifier TypeParameters ClassExtends ClassImplements ClassBody 
| ClassModifiers CLASS TypeIdentifier TypeParameters ClassExtends ClassImplements ClassPermits ClassBody 
;

ClassModifiers:
ClassModifiers ClassModifier
| ClassModifier
;

ClassModifier:
PUBLIC
| PRIVATE
;

TypeParameters:
LESS_THAN TypeParameterList GREATER_THAN
;

TypeParameterList:
TypeParameterList COMMA TypeParameter
| TypeParameter
;

TypeParameter:


%%

int main(){
    #if YYDEBUG
        yydebug = 1;
    #endif
    yyparse();
}