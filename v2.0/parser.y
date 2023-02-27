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
| ClassModifiers CLASS IDENTIFIER ClassBody 
| ClassModifiers CLASS IDENTIFIER PERMITS DotIdentifiers ClassBody 
| ClassModifiers CLASS IDENTIFIER ClassImplements ClassBody 
| ClassModifiers CLASS IDENTIFIER ClassImplements PERMITS DotIdentifiers ClassBody 
| ClassModifiers CLASS IDENTIFIER ClassExtends ClassBody 
| ClassModifiers CLASS IDENTIFIER ClassExtends PERMITS DotIdentifiers ClassBody 
| ClassModifiers CLASS IDENTIFIER ClassExtends ClassImplements ClassBody 
| ClassModifiers CLASS IDENTIFIER ClassExtends ClassImplements PERMITS DotIdentifiers ClassBody 
| ClassModifiers CLASS IDENTIFIER TypeParameterList ClassBody 
| ClassModifiers CLASS IDENTIFIER TypeParameterList PERMITS DotIdentifiers ClassBody 
| ClassModifiers CLASS IDENTIFIER TypeParameterList ClassImplements ClassBody 
| ClassModifiers CLASS IDENTIFIER TypeParameterList ClassImplements PERMITS DotIdentifiers ClassBody 
| ClassModifiers CLASS IDENTIFIER TypeParameterList ClassExtends ClassBody 
| ClassModifiers CLASS IDENTIFIER TypeParameterList ClassExtends PERMITS DotIdentifiers ClassBody 
| ClassModifiers CLASS IDENTIFIER TypeParameterList ClassExtends ClassImplements ClassBody 
| ClassModifiers CLASS IDENTIFIER TypeParameterList ClassExtends ClassImplements PERMITS DotIdentifiers ClassBody
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
LEFT_CURLY_BRACE RIGHT_CURLY_BRACE
| LEFT_CURLY_BRACE ClassBodyDeclarations RIGHT_CURLY_BRACE
;

ClassBodyDeclarations:
ClassBodyDeclarations ClassBodyDeclaration
| ClassBodyDeclaration
;

ClassBodyDeclaration:
ClassMemberDeclaration
| StaticInitializer
| ConstructorDeclaration
;

ClassMemberDeclaration:
FieldDeclaration
| MethodDeclaration
| SEMI_COLON
;

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

VariableInitializer:
Expression
| ArrayInitializer
;


MethodDeclaration:
MethodHeader MethodBody
| ClassModifiers MethodHeader MethodBody
;

//MethodModifier->ClassModifier

MethodHeader:
VOID MethodDeclarator 
| VOID MethodDeclarator Throws 
| Type MethodDeclarator 
| Type MethodDeclarator Throws 
| TypeParameterList VOID MethodDeclarator 
| TypeParameterList VOID MethodDeclarator Throws 
| TypeParameterList Type MethodDeclarator 
| TypeParameterList Type MethodDeclarator Throws 
;

MethodDeclarator:
Declarator
| Declarator Dims
;

ReceiverParameter:
Type THIS
| Type IDENTIFIER DOT THIS
;

FormalParameterList:
FormalParameterList COMMA FormalParameter
| FormalParameter
;

FormalParameter:
Type IDENTIFIER 
| VariableModifiers Type IDENTIFIER 
| Type IDENTIFIER Dims 
| VariableModifiers Type IDENTIFIER Dims 
| Type TRIPLE_DOT IDENTIFIER 
| VariableModifiers Type TRIPLE_DOT IDENTIFIER 
;

VariableModifiers:
VariableModifiers FINAL
| FINAL
;

Throws:
THROWS ClassTypes
;

MethodBody:
Block
| SEMI_COLON
;

StaticInitializer:
STATIC Block
;

ConstructorDeclaration:
TypeParameterList Declarator ConstructorBody 
| TypeParameterList Declarator Throws ConstructorBody 
| TypeParameterList Declarator ConstructorBody 
| TypeParameterList Declarator Throws ConstructorBody 
| ClassModifiers TypeParameterList Declarator ConstructorBody 
| ClassModifiers TypeParameterList Declarator Throws ConstructorBody
| Declarator ConstructorBody 
| Declarator Throws ConstructorBody 
| Declarator ConstructorBody 
| Declarator Throws ConstructorBody 
| ClassModifiers Declarator ConstructorBody 
| ClassModifiers Declarator Throws ConstructorBody
;

Declarator:
IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 
| IDENTIFIER LEFT_PARANTHESIS FormalParameterList RIGHT_PARANTHESIS 
| IDENTIFIER LEFT_PARANTHESIS ReceiverParameter COMMA RIGHT_PARANTHESIS 
| IDENTIFIER LEFT_PARANTHESIS ReceiverParameter COMMA FormalParameterList RIGHT_PARANTHESIS 
;

ConstructorBody:
LEFT_CURLY_BRACE RIGHT_CURLY_BRACE 
| LEFT_CURLY_BRACE BlockStatements RIGHT_CURLY_BRACE 
| LEFT_CURLY_BRACE ExplicitConstructorInvocation RIGHT_CURLY_BRACE 
| LEFT_CURLY_BRACE ExplicitConstructorInvocation BlockStatements RIGHT_CURLY_BRACE
;

ExplicitConstructorInvocation:THIS LEFT_PARANTHESIS RIGHT_PARANTHESIS SEMI_COLON 
| THIS LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS SEMI_COLON 
| TypeArguments THIS LEFT_PARANTHESIS RIGHT_PARANTHESIS SEMI_COLON 
| TypeArguments THIS LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS SEMI_COLON 
| SUPER LEFT_PARANTHESIS RIGHT_PARANTHESIS SEMI_COLON 
| SUPER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS SEMI_COLON 
| TypeArguments SUPER LEFT_PARANTHESIS RIGHT_PARANTHESIS SEMI_COLON 
| TypeArguments SUPER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS SEMI_COLON 
| DotIdentifiers DOT SUPER LEFT_PARANTHESIS RIGHT_PARANTHESIS SEMI_COLON 
| DotIdentifiers DOT SUPER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS SEMI_COLON 
| DotIdentifiers DOT TypeArguments SUPER LEFT_PARANTHESIS RIGHT_PARANTHESIS SEMI_COLON 
| DotIdentifiers DOT TypeArguments SUPER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS SEMI_COLON
;

Expressions:
Expressions COMMA Expression
| Expression
;

InterfaceDeclaration:
INTERFACE IDENTIFIER ClassBody 
| INTERFACE IDENTIFIER ClassExtends ClassBody 
| INTERFACE IDENTIFIER TypeParameterList ClassBody 
| INTERFACE IDENTIFIER TypeParameterList ClassExtends ClassBody 
| ClassModifers INTERFACE IDENTIFIER ClassBody 
| ClassModifers INTERFACE IDENTIFIER ClassExtends ClassBody 
| ClassModifers INTERFACE IDENTIFIER TypeParameterList ClassBody 
| ClassModifers INTERFACE IDENTIFIER TypeParameterList ClassExtends ClassBody 
;

ArrayInitializer:
LEFT_CURLY_BRACE RIGHT_CURLY_BRACE 
| LEFT_CURLY_BRACE COMMA RIGHT_CURLY_BRACE 
| LEFT_CURLY_BRACE VariableInitializerList RIGHT_CURLY_BRACE 
| LEFT_CURLY_BRACE VariableInitializerList COMMA RIGHT_CURLY_BRACE 
;

VariableInitializerList:
VariableInitializerList COMMA VariableInitializer
| VariableInitializer
;

Block:
LEFT_CURLY_BRACE RIGHT_CURLY_BRACE
| LEFT_CURLY_BRACE BlockStatements RIGHT_CURLY_BRACE
;

BlockStatements:
BlockStatements BlockStatement
| BlockStatement
;

BlockStatement:
Type VariableDeclaratorList SEMI_COLON
| VAR VariableDeclaratorList SEMI_COLON
| VariableModifiers Type VariableDeclaratorList SEMI_COLON
| VariableModifiers VAR VariableDeclaratorList SEMI_COLON
| Statement
;

Statement:
StatementWithoutTrailingSubstatement
| LabeledStatement
| IfThenStatement
| IfThenElseStatement
| WhileStatement
| ForStatement
;

StatementNoShortIf:
StatementWithoutTrailingSubstatement
| LabeledStatementNoShortIf
| IfThenElseStatementNoShortIf
| WhileStatementNoShortIf
| ForStatementNoShortIf
;

StatementWithoutTrailingSubstatement:
Block
| EmptyStatement
| ExpressionStatement
| AssertStatement
| BreakStatement
| ContinueStatement
| ReturnStatement
| SynchronizedStatement
| ThrowStatement
| TryStatement
| YieldStatement
;

EmptyStatement:
SEMI_COLON
;

LabeledStatement:
IDENTIFIER COLON Statement
;

LabeledStatementNoShortIf:
IDENTIFIER COLON StatementNoShortIf
;

ExpressionStatement:
StatementExpression SEMI_COLON
;

StatementExpression:
Assignment
| PreIncrementExpression
| PreDecrementExpression
| PostIncrementExpression
| PostDecrementExpression
| MethodInvocation
| ClassInstanceCreationExpression

IfThenStatement:
IF LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS Statement
;

IfThenElseStatement:
IF LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS StatementNoShortIf ELSE Statement
;

IfThenElseStatementNoShortIf:
IF LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS StatementNoShortIf ELSE StatementNoShortIf
;

AssertStatement:
ASSERT Expression SEMI_COLON
| ASSERT Expression COLON Expression SEMI_COLON
;

WhileStatement:
WHILE LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS Statement
;

WhileStatementNoShortIf:
WHILE LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS StatementNoShortIf
;

ForStatement:
BasicForStatement
| EnhancedForStatement
;

ForStatementNoShortIf:
BasicForStatementNoShortIf
| EnhancedForStatementNoShortIf
;

BasicForStatement:
FOR LEFT_PARANTHESIS SEMI_COLON SEMI_COLON RIGHT_PARANTHESIS Statement 
| FOR LEFT_PARANTHESIS SEMI_COLON SEMI_COLON ForUpdate RIGHT_PARANTHESIS Statement 
| FOR LEFT_PARANTHESIS SEMI_COLON Expression SEMI_COLON RIGHT_PARANTHESIS Statement 
| FOR LEFT_PARANTHESIS SEMI_COLON Expression SEMI_COLON ForUpdate RIGHT_PARANTHESIS Statement 
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON SEMI_COLON RIGHT_PARANTHESIS Statement 
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON SEMI_COLON ForUpdate RIGHT_PARANTHESIS Statement 
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON Expression SEMI_COLON RIGHT_PARANTHESIS Statement 
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON Expression SEMI_COLON ForUpdate RIGHT_PARANTHESIS Statement
;

BasicForStatementNoShortIf:
FOR LEFT_PARANTHESIS SEMI_COLON SEMI_COLON RIGHT_PARANTHESIS StatementNoShortIf 
| FOR LEFT_PARANTHESIS SEMI_COLON SEMI_COLON ForUpdate RIGHT_PARANTHESIS StatementNoShortIf 
| FOR LEFT_PARANTHESIS SEMI_COLON Expression SEMI_COLON RIGHT_PARANTHESIS StatementNoShortIf 
| FOR LEFT_PARANTHESIS SEMI_COLON Expression SEMI_COLON ForUpdate RIGHT_PARANTHESIS StatementNoShortIf 
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON SEMI_COLON RIGHT_PARANTHESIS StatementNoShortIf 
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON SEMI_COLON ForUpdate RIGHT_PARANTHESIS StatementNoShortIf 
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON Expression SEMI_COLON RIGHT_PARANTHESIS StatementNoShortIf 
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON Expression SEMI_COLON ForUpdate RIGHT_PARANTHESIS StatementNoShortIf 
;

ForInit:
StatementExpressionList
| LocalVariableDeclaration
;

ForUpdate:
StatementExpressionList
;

StatementExpressionList:
StatementExpressionList COMMA StatementExpression
| StatementExpression
;

EnhancedForStatement:
FOR LEFT_PARANTHESIS LocalVariableDeclaration COLON Expression RIGHT_PARANTHESIS Statement
;

EnhancedForStatementNoShortIf:
FOR LEFT_PARANTHESIS LocalVariableDeclaration COLON Expression RIGHT_PARANTHESIS StatementNoShortIf
;

BreakStatement:
BREAK SEMI_COLON
| BREAK IDENTIFIER SEMI_COLON
;

YieldStatement:
YIELD Expression SEMI_COLON
;

ContinueStatement:
CONTINUE SEMI_COLON
| CONTINUE IDENTIFIER SEMI_COLON
;

ReturnStatement:
RETURN SEMI_COLON
|  RETURN Expression SEMI_COLON
;

ThrowStatement:
THROW Expression SEMI_COLON
;

SynchronizedStatement:
SYNCHRONIZED LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS Block
;

TryStatement:
TRY Block Catches
| TRY Block FINALLY Block
| TRY Block Catches FINALLY Block
;

Catches:
Catches CatchClause
| CatchClause
;

CatchClause:
CATCH LEFT_PARANTHESIS FormalParameter RIGHT_PARANTHESIS Block
;



%%

int main(){
    #if YYDEBUG
        yydebug = 1;
    #endif
    yyparse();
}