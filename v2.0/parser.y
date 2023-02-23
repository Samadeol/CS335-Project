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
CLASS IDENTIFIER ClassBody 
| CLASS IDENTIFIER PERMITS DotIdentifiers ClassBody 
| CLASS IDENTIFIER ClassImplements ClassBody 
| CLASS IDENTIFIER ClassImplements PERMITS DotIdentifiers ClassBody 
| CLASS IDENTIFIER ClassExtends ClassBody 
| CLASS IDENTIFIER ClassExtends PERMITS DotIdentifiers ClassBody 
| CLASS IDENTIFIER ClassExtends ClassImplements ClassBody 
| CLASS IDENTIFIER ClassExtends ClassImplements PERMITS DotIdentifiers ClassBody 
| CLASS IDENTIFIER TypeParameterList ClassBody 
| CLASS IDENTIFIER TypeParameterList PERMITS DotIdentifiers ClassBody 
| CLASS IDENTIFIER TypeParameterList ClassImplements ClassBody 
| CLASS IDENTIFIER TypeParameterList ClassImplements PERMITS DotIdentifiers ClassBody 
| CLASS IDENTIFIER TypeParameterList ClassExtends ClassBody 
| CLASS IDENTIFIER TypeParameterList ClassExtends PERMITS DotIdentifiers ClassBody 
| CLASS IDENTIFIER TypeParameterList ClassExtends ClassImplements ClassBody 
| CLASS IDENTIFIER TypeParameterList ClassExtends ClassImplements PERMITS DotIdentifiers ClassBody
;

ClassModifiers:
ClassModifiers ClassModifier
| ClassModifier
;

ClassModifier:
PUBLIC
| PRIVATE
;

TypeParameterList
LESS_THAN IDENTIFIER GREATER_THAN 
| LESS_THAN IDENTIFIER TypeParameters GREATER_THAN 
| LESS_THAN IDENTIFIER TypeBound GREATER_THAN 
| LESS_THAN IDENTIFIER TypeBound TypeParameters GREATER_THAN 
;

TypeParameters:
TypeParameters COMMA IDENTIFIER 
| TypeParameters COMMA IDENTIFIER TypeBound 
| COMMA IDENTIFIER 
| COMMA IDENTIFIER TypeBound 
;

ClassExtends:
EXTENDS ClassType
;

TypeBound:
EXTENDS IDENTIFIER
| ClassExtends
| ClassExtends Additional_Bound
;

Additional_Bound:
Additional_Bound AMPERSAND ClassType
| AMPERSAND ClassType
;

ClassImplements:
IMPLEMENTS ClassType
IMPLEMENTS ClassType ClassTypes
;

ClassTypes:
ClassTypes COMMA ClassType
| COMMA ClassType
;

ClassBody:
LEFT_CURLY_BRACE RIGHT_SQUARE_BRACE
| LEFT_CURLY_BRACE ClassBodyDeclarations RIGHT_SQUARE_BRACE
;

ClassBodyDeclarations:
ClassBodyDeclarations ClassBodyDeclaration
| ClassBodyDeclaration
;

ClassBodyDeclaration:
FieldDeclaration
MethodDeclaration
ClassDeclaration
InterfaceDeclaration
SEMI_COLON

//UnnanType -> Type

FieldDeclaration:
Type IDENTIFIER SEMI_COLON 
| Type IDENTIFIER EQUALS VariableInitializer SEMI_COLON 
| Type IDENTIFIER Dims SEMI_COLON 
| Type IDENTIFIER Dims EQUALS VariableInitializer SEMI_COLON 
| Type IDENTIFIER VariableDeclaratorList SEMI_COLON 
| Type IDENTIFIER EQUALS VariableInitializer VariableDeclaratorList SEMI_COLON 
| Type IDENTIFIER Dims VariableDeclaratorList SEMI_COLON 
| Type IDENTIFIER Dims EQUALS VariableInitializer VariableDeclaratorList SEMI_COLON
;

VariableDeclaratorList:
VariableDeclaratorList COMMA IDENTIFIER 
| VariableDeclaratorList COMMA IDENTIFIER EQUALS VariableInitializer 
| VariableDeclaratorList COMMA IDENTIFIER Dims 
| VariableDeclaratorList COMMA IDENTIFIER Dims EQUALS VariableInitializer 
| COMMA IDENTIFIER 
| COMMA IDENTIFIER EQUALS VariableInitializer 
| COMMA IDENTIFIER Dims 
| COMMA IDENTIFIER Dims EQUALS VariableInitializer
;

MethodDeclaration:
MethodHeader MethodBody
| ClassModifiers MethodHeader MethodBody
;

//MethodModifier->ClassModifier

MethodHeader:
VOID MethodDeclarator [Throws]
Type MethodDeclarator [Throws]
TypeParameterList VOID MethodDeclarator [Throws]
TypeParameterList Type MethodDeclarator [Throws]








%%

int main(){
    #if YYDEBUG
        yydebug = 1;
    #endif
    yyparse();
}