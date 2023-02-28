%{
#include <bits/stdc++.h>
using namespace std;

extern int yylex();
extern int yylineno;

#define YYDEBUG 1

fstream fout;
stack<int> st;
int node_number=1;
int leaf_number=0;

void yyerror(const char* error){
    fprintf (stderr, "%s | %d\n",error,yylineno);
}

void func(string s, int k){
    if(k){
        fout<<"n"<<node_number<<"[label=\""<<s<<"\"]"<<endl;
        int a[k]={0};
        for(int i=k-1;i>=0 && !st.empty();i--){
            int t = st.top();
            st.pop();
            a[i]=t;
        }
        fout<<"n"<<node_number<<"->{";
        for(int i=0;i<k;i++){
            if(a[i]<0) fout<<"t"<<(-a[i]);
            else fout<<"n"<<a[i];
            if(i==k-1) fout<<"}"<<endl;
            else fout<<",";
        }
        st.push(node_number);
        node_number++;
    }
    return;
}


%}

%define parse.error verbose
%locations

%union{
    char str[1000];
}

%token <s> AMPERSAND AMPERSAND_AMPERSAND AMPERSAND_EQUALS ARROW_RIGHT ASSERT BAR BAR_BAR BAR_EQUALS BOOLEAN_LITERAL BOOLEAN_TYPE BREAK CATCH CHARACTER_LITERAL CLASS COLON COMMA CONTINUE DOT DOUBLE_COLON ELSE EQUALS EQUALS_EQUALS EXCLAIM EXCLAIM_EQUALS EXTENDS FINAL FINALLY FLOATINGPOINT_LITERAL FLOAT_POINT_TYPE FOR GREATER_THAN GREATER_THAN_EQUALS GREATER_THAN_GREATER_THAN GREATER_THAN_GREATER_THAN_EQUALS GREATER_THAN_GREATER_THAN_GREATER_THAN GREATER_THAN_GREATER_THAN_GREATER_THAN_EQUALS IDENTIFIER IF IMPLEMENTS IMPORT INTEGER_LITERAL INTEGRAL_TYPE INTERFACE LEFT_CURLY_BRACE LEFT_PARANTHESIS LEFT_SQUARE_BRACE LESS_THAN LESS_THAN_EQUALS LESS_THAN_LESS_THAN LESS_THAN_LESS_THAN_EQUALS MINUS MINUS_EQUALS MINUS_MINUS NEW NULL_LITERAL PERCENT PERCENT_EQUALS PERMITS PLUS PLUS_EQUALS PLUS_PLUS POWER POWER_EQUALS PRIVATE PUBLIC QUESTION RETURN RIGHT_CURLY_BRACE RIGHT_PARANTHESIS RIGHT_SQUARE_BRACE SEMI_COLON SLASH SLASH_EQUALS STAR STAR_EQUALS STATIC STRING_LITERAL SUPER SYNCHRONIZED TEXTBLOCK THIS THROW THROWS TILDA TRIPLE_DOT TRY VAR VOID WHILE YIELD
%type <s> AdditiveExpression AndExpression ArrayAccess ArrayCreationExpression ArrayInitializer ArrayType AssertStatement Assignment AssignmentExpression AssignmentOperator BasicForStatement BasicForStatementNoShortIf Block BlockStatement BlockStatements BreakStatement CatchClause Catches ClassBody ClassBodyDeclaration ClassBodyDeclarations ClassDeclaration ClassExtends ClassImplements ClassInstanceCreationExpression ClassLiteral ClassMemberDeclaration ClassModifier ClassModifiers ClassType ClassTypes CompiledStuff ConditionalAndExpression ConditionalExpression ConditionalOrExpression ConstructorBody ConstructorDeclaration ContinueStatement Declarator DimExprs Dims DotIdentifiers EmptyStatement EnhancedForStatement EnhancedForStatementNoShortIf EqualityExpression ExclusiveOrExpression ExplicitConstructorInvocation Expression ExpressionStatement Expressions FieldAccess FieldDeclaration ForInit ForStatement ForStatementNoShortIf ForUpdate FormalParameter FormalParameterList IfThenElseStatement IfThenElseStatementNoShortIf IfThenStatement ImportDeclaration ImportDeclarations InclusiveOrExpression InterfaceDeclaration LabeledStatement LabeledStatementNoShortIf LambdaExpression Literal LocalVariableDeclaration MethodBody MethodDeclaration MethodDeclarator MethodHeader MethodInvocation MethodReference MultiplicativeExpression NumericType PostDecrementExpression PostIncrementExpression PostfixExpression PreDecrementExpression PreIncrementExpression Primary PrimaryNoNewArray PrimitiveType ReceiverParameter ReferenceType RelationalExpression ReturnStatement ShiftExpression SingleStaticImportDeclaration SingleTypeImportDeclaration Statement StatementExpression StatementExpressionList StatementNoShortIf StatementWithoutTrailingSubstatement StaticImportOnDemandDeclaration StaticInitializer SynchronizedStatement ThrowStatement Throws TryStatement Type TypeArgument TypeArgumentList TypeArguments TypeDeclaration TypeDeclarations TypeImportOnDemandDeclaration TypeParameterList TypeParameters UnaryExpression UnaryExpressionNotPlusMinus UnqualifiedClassInstanceCreationExpression VariableDeclarator VariableDeclaratorList VariableInitializer VariableInitializerList VariableModifiers WhileStatement WhileStatementNoShortIf Wildcard YieldStatement

%start input

%%

input: CompiledStuff {cout<<node_number<<endl;}

CompiledStuff:
TypeDeclarations 		                    {func("CompiledCode", 1);}
| ImportDeclarations 		                {func("CompiledCode", 1);}
| ImportDeclarations TypeDeclarations		{func("CompiledCode", 2);}
;

ImportDeclarations:
ImportDeclarations ImportDeclaration		{func("ImportDeclarations", 2);}
| ImportDeclaration		                    {func("ImportDeclarations", 1);}
;

ImportDeclaration:
SingleTypeImportDeclaration		            {func("ImportDeclaration", 1);}
| TypeImportOnDemandDeclaration		        {func("ImportDeclaration", 1);}
| SingleStaticImportDeclaration		        {func("ImportDeclaration", 1);}
| StaticImportOnDemandDeclaration		    {func("ImportDeclaration", 1);}
;

SingleTypeImportDeclaration:
IMPORT DotIdentifiers SEMI_COLON		                    {func("SingleTypeImportDeclaration", 3);}
;

TypeImportOnDemandDeclaration:
IMPORT DotIdentifiers DOT STAR SEMI_COLON		            {func("TypeImportOnDemandDeclaration", 5);}
;

SingleStaticImportDeclaration:
IMPORT STATIC DotIdentifiers DOT IDENTIFIER SEMI_COLON		{func("SingleStaticImportDeclaration", 6);}
;

StaticImportOnDemandDeclaration:
IMPORT STATIC DotIdentifiers DOT STAR SEMI_COLON		    {func("StaticImportOnDemandDeclaration", 6);}
;

TypeDeclarations:
TypeDeclarations TypeDeclaration		                    {func("TypeDeclarations", 2);}
| TypeDeclaration		                                    {func("TypeDeclarations", 1);}
;

TypeDeclaration:
ClassDeclaration		                                    {func("TypeDeclaration", 1);}
| InterfaceDeclaration		                                {func("TypeDeclaration", 1);}
;

Type:
PrimitiveType		                                        {func("Type", 1);}
| ReferenceType		                                        {func("Type", 1);}
;

PrimitiveType:
NumericType		                                            {func("PrimitiveType", 1);}
| BOOLEAN_TYPE		                                        {func("PrimitiveType", 1);}
;

NumericType:
INTEGRAL_TYPE		                                        {func("NumericType", 1);}
| FLOAT_POINT_TYPE		                                    {func("NumericType", 1);}
;

ReferenceType:
ClassType		                                            {func("ReferenceType", 1);}
| ArrayType		                                            {func("ReferenceType", 1);}
;

ClassType:
DotIdentifiers		                                        {func("ClassType", 1);}
;

DotIdentifiers:
DotIdentifiers DOT IDENTIFIER		                        {func("Name", 3);}
| IDENTIFIER		                                        {func("Name", 1);}
;

ArrayType:
DotIdentifiers Dims		                                    {func("ArrayType", 2);}
| PrimitiveType Dims		                                {func("ArrayType", 2);}
;

Dims:
Dims LEFT_SQUARE_BRACE RIGHT_SQUARE_BRACE	                {func("Dims", 3);}
| LEFT_SQUARE_BRACE RIGHT_SQUARE_BRACE		                {func("Dims", 2);}
;

TypeArguments:
LESS_THAN TypeArgumentList GREATER_THAN		                {func("TypeArguments", 3);}
;

TypeArgumentList:
TypeArgumentList COMMA TypeArgument		                    {func("TypeArgumentList", 3);}
| TypeArgument		                                        {func("TypeArgumentList", 1);}
;

TypeArgument:
ReferenceType		                                        {func("TypeArgument", 1);}
| Wildcard		                                            {func("TypeArgument", 1);}
;

Wildcard:
QUESTION EXTENDS ReferenceType		                        {func("Wildcard", 3);}
| QUESTION SUPER ReferenceType		                        {func("Wildcard", 3);}
| QUESTION		                                            {func("Wildcard", 1);}
;

ClassDeclaration:
CLASS IDENTIFIER ClassBody 		                                                                                        {func("ClassDeclaration", 3);}
| CLASS IDENTIFIER PERMITS DotIdentifiers ClassBody 		                                                            {func("ClassDeclaration", 5);}
| CLASS IDENTIFIER ClassImplements ClassBody 	                                                                    	{func("ClassDeclaration", 4);}
| CLASS IDENTIFIER ClassImplements PERMITS DotIdentifiers ClassBody 		                                            {func("ClassDeclaration", 6);}
| CLASS IDENTIFIER ClassExtends ClassBody 		                                                                        {func("ClassDeclaration", 4);}
| CLASS IDENTIFIER ClassExtends PERMITS DotIdentifiers ClassBody 		                                                {func("ClassDeclaration", 6);}
| CLASS IDENTIFIER ClassExtends ClassImplements ClassBody 		                                                        {func("ClassDeclaration", 5);}
| CLASS IDENTIFIER ClassExtends ClassImplements PERMITS DotIdentifiers ClassBody 		                                {func("ClassDeclaration", 7);}
| CLASS IDENTIFIER TypeParameterList ClassBody 		                                                                    {func("ClassDeclaration", 4);}
| CLASS IDENTIFIER TypeParameterList PERMITS DotIdentifiers ClassBody 		                                            {func("ClassDeclaration", 6);}
| CLASS IDENTIFIER TypeParameterList ClassImplements ClassBody 		                                                    {func("ClassDeclaration", 5);}
| CLASS IDENTIFIER TypeParameterList ClassImplements PERMITS DotIdentifiers ClassBody 		                            {func("ClassDeclaration", 7);}
| CLASS IDENTIFIER TypeParameterList ClassExtends ClassBody 		                                                    {func("ClassDeclaration", 5);}
| CLASS IDENTIFIER TypeParameterList ClassExtends PERMITS DotIdentifiers ClassBody 		                                {func("ClassDeclaration", 7);}
| CLASS IDENTIFIER TypeParameterList ClassExtends ClassImplements ClassBody 		                                    {func("ClassDeclaration", 6);}
| CLASS IDENTIFIER TypeParameterList ClassExtends ClassImplements PERMITS DotIdentifiers ClassBody		                {func("ClassDeclaration", 8);}
| ClassModifiers CLASS IDENTIFIER ClassBody 		                                                                    {func("ClassDeclaration", 4);}
| ClassModifiers CLASS IDENTIFIER PERMITS DotIdentifiers ClassBody 		                                                {func("ClassDeclaration", 6);}
| ClassModifiers CLASS IDENTIFIER ClassImplements ClassBody 		                                                    {func("ClassDeclaration", 5);}
| ClassModifiers CLASS IDENTIFIER ClassImplements PERMITS DotIdentifiers ClassBody 		                                {func("ClassDeclaration", 7);}
| ClassModifiers CLASS IDENTIFIER ClassExtends ClassBody 		                                                        {func("ClassDeclaration", 5);}
| ClassModifiers CLASS IDENTIFIER ClassExtends PERMITS DotIdentifiers ClassBody 		                                {func("ClassDeclaration", 7);}
| ClassModifiers CLASS IDENTIFIER ClassExtends ClassImplements ClassBody 		                                        {func("ClassDeclaration", 6);}
| ClassModifiers CLASS IDENTIFIER ClassExtends ClassImplements PERMITS DotIdentifiers ClassBody 		                {func("ClassDeclaration", 8);}
| ClassModifiers CLASS IDENTIFIER TypeParameterList ClassBody 		                                                    {func("ClassDeclaration", 5);}
| ClassModifiers CLASS IDENTIFIER TypeParameterList PERMITS DotIdentifiers ClassBody 		                            {func("ClassDeclaration", 7);}
| ClassModifiers CLASS IDENTIFIER TypeParameterList ClassImplements ClassBody 		                                    {func("ClassDeclaration", 6);}
| ClassModifiers CLASS IDENTIFIER TypeParameterList ClassImplements PERMITS DotIdentifiers ClassBody 		            {func("ClassDeclaration", 8);}
| ClassModifiers CLASS IDENTIFIER TypeParameterList ClassExtends ClassBody 		                                        {func("ClassDeclaration", 6);}
| ClassModifiers CLASS IDENTIFIER TypeParameterList ClassExtends PERMITS DotIdentifiers ClassBody 		                {func("ClassDeclaration", 8);}
| ClassModifiers CLASS IDENTIFIER TypeParameterList ClassExtends ClassImplements ClassBody 		                        {func("ClassDeclaration", 7);}
| ClassModifiers CLASS IDENTIFIER TypeParameterList ClassExtends ClassImplements PERMITS DotIdentifiers ClassBody		{func("ClassDeclaration", 9);}
;

ClassModifiers:
ClassModifiers ClassModifier		{func("Modifiers", 2);}
| ClassModifier		                {func("Modifiers", 1);}
;

ClassModifier:
PUBLIC		                        {func("Modifier", 1);}
| PRIVATE		                    {func("Modifier", 1);}
| FINAL		                        {func("Modifier", 1);}
| STATIC		                    {func("Modifier", 1);}
| SYNCHRONIZED		                {func("Modifier", 1);}
;

TypeParameterList:
LESS_THAN IDENTIFIER GREATER_THAN 		                {func("TypeParameterList", 3);}
| LESS_THAN IDENTIFIER TypeParameters GREATER_THAN 		{func("TypeParameterList", 4);}
;

TypeParameters:
TypeParameters COMMA IDENTIFIER 		                {func("TypeParameters", 3);}
| COMMA IDENTIFIER		                                {func("TypeParameters", 2);}
;

ClassExtends:
EXTENDS ClassType		                                {func("ClassExtends", 2);}
;

ClassImplements:
IMPLEMENTS ClassType		                            {func("ClassImplements", 2);}
IMPLEMENTS ClassType ClassTypes		                    {func("ClassImplements", 3);}
;

ClassTypes:
ClassTypes COMMA ClassType		                        {func("ClassTypes", 3);}
| COMMA ClassType		                                {func("ClassTypes", 2);}
;

ClassBody:
LEFT_CURLY_BRACE RIGHT_CURLY_BRACE		                        {func("ClassBody", 2);}
| LEFT_CURLY_BRACE ClassBodyDeclarations RIGHT_CURLY_BRACE		{func("ClassBody", 3);}
;

ClassBodyDeclarations:
ClassBodyDeclarations ClassBodyDeclaration		{func("ClassBodyDeclarations", 2);}
| ClassBodyDeclaration		                    {func("ClassBodyDeclarations", 1);}
;

ClassBodyDeclaration:
ClassMemberDeclaration		    {func("ClassBodyDeclaration", 1);}
| StaticInitializer		        {func("ClassBodyDeclaration", 1);}
| ConstructorDeclaration		{func("ClassBodyDeclaration", 1);}
;

ClassMemberDeclaration:
FieldDeclaration		        {func("ClassMemberDeclaration", 1);}
| MethodDeclaration		        {func("ClassMemberDeclaration", 1);}
| SEMI_COLON		            {func("ClassMemberDeclaration", 1);}
;

FieldDeclaration:
Type VariableDeclaratorList SEMI_COLON		                {func("FieldDeclaration", 3);}
| ClassModifiers Type VariableDeclaratorList SEMI_COLON		{func("FieldDeclaration", 4);}
;

VariableDeclaratorList:
VariableDeclaratorList COMMA VariableDeclarator		        {func("VariableDeclaratorList", 3);}
| VariableDeclarator		                                {func("VariableDeclaratorList", 1);}
;

VariableDeclarator:
IDENTIFIER EQUALS VariableInitializer		                {func("VariableDeclarator", 3);}
| IDENTIFIER Dims EQUALS VariableInitializer		        {func("VariableDeclarator", 4);}
| IDENTIFIER		                                        {func("VariableDeclarator", 1);}
| IDENTIFIER Dims		                                    {func("VariableDeclarator", 2);}
;

VariableInitializer:
Expression		                                            {func("VariableInitializer", 1);}
| ArrayInitializer		                                    {func("VariableInitializer", 1);}
;


MethodDeclaration:
MethodHeader MethodBody		                                {func("MethodDeclaration", 2);}
| ClassModifiers MethodHeader MethodBody		            {func("MethodDeclaration", 3);}
;

MethodHeader:
VOID MethodDeclarator 		                                {func("MethodHeader", 2);}
| VOID MethodDeclarator Throws 		                        {func("MethodHeader", 3);}
| Type MethodDeclarator 		                            {func("MethodHeader", 2);}
| Type MethodDeclarator Throws 		                        {func("MethodHeader", 3);}
| TypeParameterList VOID MethodDeclarator 		            {func("MethodHeader", 3);}
| TypeParameterList VOID MethodDeclarator Throws 		    {func("MethodHeader", 4);}
| TypeParameterList Type MethodDeclarator 		            {func("MethodHeader", 3);}
| TypeParameterList Type MethodDeclarator Throws 		    {func("MethodHeader", 4);}
;

MethodDeclarator:
Declarator		                                            {func("MethodDeclarator", 1);}
| Declarator Dims		                                    {func("MethodDeclarator", 2);}
;

ReceiverParameter:
Type THIS		                                            {func("ReceiverParameter", 2);}
| Type IDENTIFIER DOT THIS		                            {func("ReceiverParameter", 4);}
;

FormalParameterList:
FormalParameterList COMMA FormalParameter		            {func("ParameterList", 3);}
| FormalParameter		                                    {func("ParameterList", 1);}
;

FormalParameter:
Type IDENTIFIER 		                                    {func("Parameter", 2);}
| VariableModifiers Type IDENTIFIER 		                {func("Parameter", 3);}
| Type IDENTIFIER Dims 		                                {func("Parameter", 3);}
| VariableModifiers Type IDENTIFIER Dims		            {func("Parameter", 4);}
| Type TRIPLE_DOT IDENTIFIER		                        {func("Parameter", 3);}
| VariableModifiers Type TRIPLE_DOT IDENTIFIER		        {func("Parameter", 4);}
;

VariableModifiers:
VariableModifiers FINAL		                                {func("VariableModifiers", 2);}
| FINAL		                                                {func("VariableModifiers", 1);}
;

Throws:
THROWS ClassTypes		                                    {func("Throws", 2);}
;

MethodBody:
Block		                                                {func("MethodBody", 1);}
| SEMI_COLON		                                        {func("MethodBody", 1);}
;

StaticInitializer:
STATIC Block		                                        {func("StaticInitializer", 2);}
;

ConstructorDeclaration:
TypeParameterList Declarator ConstructorBody 		                        {func("ConstructorDeclaration", 3);}
| TypeParameterList Declarator Throws ConstructorBody		                {func("ConstructorDeclaration", 4);}
| ClassModifiers TypeParameterList Declarator ConstructorBody 		        {func("ConstructorDeclaration", 4);}
| ClassModifiers TypeParameterList Declarator Throws ConstructorBody		{func("ConstructorDeclaration", 5);}
| Declarator ConstructorBody 		                                        {func("ConstructorDeclaration", 2);}
| Declarator Throws ConstructorBody		                                    {func("ConstructorDeclaration", 3);}
| ClassModifiers Declarator ConstructorBody 		                        {func("ConstructorDeclaration", 3);}
| ClassModifiers Declarator Throws ConstructorBody		                    {func("ConstructorDeclaration", 4);}
;

Declarator:
IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		                                                {func("Declarator", 3);}
| IDENTIFIER LEFT_PARANTHESIS FormalParameterList RIGHT_PARANTHESIS 		                        {func("Declarator", 4);}
| IDENTIFIER LEFT_PARANTHESIS ReceiverParameter COMMA RIGHT_PARANTHESIS                             {func("Declarator", 5);}
| IDENTIFIER LEFT_PARANTHESIS ReceiverParameter COMMA FormalParameterList RIGHT_PARANTHESIS 		{func("Declarator", 6);}
;

ConstructorBody:
LEFT_CURLY_BRACE RIGHT_CURLY_BRACE 		                                                        {func("ConstructorBody", 2);}
| LEFT_CURLY_BRACE BlockStatements RIGHT_CURLY_BRACE 		                                    {func("ConstructorBody", 3);}
| LEFT_CURLY_BRACE ExplicitConstructorInvocation RIGHT_CURLY_BRACE 		                        {func("ConstructorBody", 3);}
| LEFT_CURLY_BRACE ExplicitConstructorInvocation BlockStatements RIGHT_CURLY_BRACE		        {func("ConstructorBody", 4);}
;

ExplicitConstructorInvocation:
THIS LEFT_PARANTHESIS RIGHT_PARANTHESIS SEMI_COLON 		                                                {func("ExplicitConstructorInvocation", 4);}
| THIS LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS SEMI_COLON 		                                {func("ExplicitConstructorInvocation", 5);}
| TypeArguments THIS LEFT_PARANTHESIS RIGHT_PARANTHESIS SEMI_COLON 		                                {func("ExplicitConstructorInvocation", 5);}
| TypeArguments THIS LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS SEMI_COLON 		                    {func("ExplicitConstructorInvocation", 6);}
| SUPER LEFT_PARANTHESIS RIGHT_PARANTHESIS SEMI_COLON 		                                            {func("ExplicitConstructorInvocation", 4);}
| SUPER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS SEMI_COLON 		                                {func("ExplicitConstructorInvocation", 5);}
| TypeArguments SUPER LEFT_PARANTHESIS RIGHT_PARANTHESIS SEMI_COLON 		                            {func("ExplicitConstructorInvocation", 5);}
| TypeArguments SUPER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS SEMI_COLON 		                {func("ExplicitConstructorInvocation", 6);}
| DotIdentifiers DOT SUPER LEFT_PARANTHESIS RIGHT_PARANTHESIS SEMI_COLON 		                        {func("ExplicitConstructorInvocation", 6);}
| DotIdentifiers DOT SUPER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS SEMI_COLON 		            {func("ExplicitConstructorInvocation", 7);}
| DotIdentifiers DOT TypeArguments SUPER LEFT_PARANTHESIS RIGHT_PARANTHESIS SEMI_COLON 		            {func("ExplicitConstructorInvocation", 7);}
| DotIdentifiers DOT TypeArguments SUPER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS SEMI_COLON		{func("ExplicitConstructorInvocation", 8);}
;

Expressions:
Expressions COMMA Expression		        {func("Expressions", 3);}
| Expression		                        {func("Expressions", 1);}
;

InterfaceDeclaration:
INTERFACE IDENTIFIER ClassBody 		                                                {func("InterfaceDeclaration", 3);}
| INTERFACE IDENTIFIER ClassExtends ClassBody 		                                {func("InterfaceDeclaration", 4);}
| INTERFACE IDENTIFIER TypeParameterList ClassBody 		                            {func("InterfaceDeclaration", 4);}
| INTERFACE IDENTIFIER TypeParameterList ClassExtends ClassBody 		            {func("InterfaceDeclaration", 5);}
| ClassModifiers INTERFACE IDENTIFIER ClassBody 		                            {func("InterfaceDeclaration", 4);}
| ClassModifiers INTERFACE IDENTIFIER ClassExtends ClassBody 		                {func("InterfaceDeclaration", 5);}
| ClassModifiers INTERFACE IDENTIFIER TypeParameterList ClassBody 		            {func("InterfaceDeclaration", 5);}
| ClassModifiers INTERFACE IDENTIFIER TypeParameterList ClassExtends ClassBody 		{func("InterfaceDeclaration", 6);}
;

ArrayInitializer:
LEFT_CURLY_BRACE RIGHT_CURLY_BRACE 		                                {func("ArrayInitializer", 2);}
| LEFT_CURLY_BRACE COMMA RIGHT_CURLY_BRACE 		                        {func("ArrayInitializer", 3);}
| LEFT_CURLY_BRACE VariableInitializerList RIGHT_CURLY_BRACE 		    {func("ArrayInitializer", 3);}
| LEFT_CURLY_BRACE VariableInitializerList COMMA RIGHT_CURLY_BRACE 		{func("ArrayInitializer", 4);}
;

VariableInitializerList:
VariableInitializerList COMMA VariableInitializer		    {func("VariableInitializerList", 3);}
| VariableInitializer		                                {func("VariableInitializerList", 1);}
;

Block:
LEFT_CURLY_BRACE RIGHT_CURLY_BRACE		                    {func("Block", 2);}
| LEFT_CURLY_BRACE BlockStatements RIGHT_CURLY_BRACE		{func("Block", 3);}
;

BlockStatements:
BlockStatements BlockStatement		                        {func("BlockStatements", 2);}
| BlockStatement		                                    {func("BlockStatements", 1);}
;

BlockStatement:
Type VariableDeclaratorList SEMI_COLON		                    {func("BlockStatement", 3);}
| VAR VariableDeclaratorList SEMI_COLON		                    {func("BlockStatement", 3);}
| VariableModifiers Type VariableDeclaratorList SEMI_COLON		{func("BlockStatement", 4);}
| VariableModifiers VAR VariableDeclaratorList SEMI_COLON		{func("BlockStatement", 4);}
| Statement		                                                {func("BlockStatement", 1);}
;

Statement:
StatementWithoutTrailingSubstatement		                    {func("Statement", 1);}
| LabeledStatement		                                        {func("Statement", 1);}
| IfThenStatement		                                        {func("Statement", 1);}
| IfThenElseStatement		                                    {func("Statement", 1);}
| WhileStatement		                                        {func("Statement", 1);}
| ForStatement		                                            {func("Statement", 1);}
;

StatementNoShortIf:
StatementWithoutTrailingSubstatement		                    {func("StatementNoShortIf", 1);}
| LabeledStatementNoShortIf		                                {func("StatementNoShortIf", 1);}
| IfThenElseStatementNoShortIf		                            {func("StatementNoShortIf", 1);}
| WhileStatementNoShortIf		                                {func("StatementNoShortIf", 1);}
| ForStatementNoShortIf		                                    {func("StatementNoShortIf", 1);}
;

StatementWithoutTrailingSubstatement:
Block		                {func("StatementWithoutTrailingSubstatement", 1);}
| EmptyStatement		    {func("StatementWithoutTrailingSubstatement", 1);}
| ExpressionStatement	    {func("StatementWithoutTrailingSubstatement", 1);}
| AssertStatement		    {func("StatementWithoutTrailingSubstatement", 1);}
| BreakStatement		    {func("StatementWithoutTrailingSubstatement", 1);}
| ContinueStatement		    {func("StatementWithoutTrailingSubstatement", 1);}
| ReturnStatement		    {func("StatementWithoutTrailingSubstatement", 1);}
| SynchronizedStatement		{func("StatementWithoutTrailingSubstatement", 1);}
| ThrowStatement		    {func("StatementWithoutTrailingSubstatement", 1);}
| TryStatement		        {func("StatementWithoutTrailingSubstatement", 1);}
| YieldStatement		    {func("StatementWithoutTrailingSubstatement", 1);}
;

EmptyStatement:
SEMI_COLON		                        {func("EmptyStatement", 1);}
;

LabeledStatement:
IDENTIFIER COLON Statement		        {func("LabeledStatement", 3);}
;

LabeledStatementNoShortIf:
IDENTIFIER COLON StatementNoShortIf		{func("LabeledStatementNoShortIf", 3);}
;

ExpressionStatement:
StatementExpression SEMI_COLON		    {func("ExpressionStatement", 2);}
;

StatementExpression:
Assignment		                        {func("StatementExpression", 1);}
| PreIncrementExpression		        {func("StatementExpression", 1);}
| PreDecrementExpression		        {func("StatementExpression", 1);}
| PostIncrementExpression		        {func("StatementExpression", 1);}
| PostDecrementExpression		        {func("StatementExpression", 1);}
| MethodInvocation		                {func("StatementExpression", 1);}
| ClassInstanceCreationExpression		{func("StatementExpression", 1);}
;

IfThenStatement:
IF LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS Statement		                                {func("IfThenStatement", 5);}
;

IfThenElseStatement:
IF LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS StatementNoShortIf ELSE Statement		        {func("IfThenElseStatement", 7);}
;

IfThenElseStatementNoShortIf:
IF LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS StatementNoShortIf ELSE StatementNoShortIf		{func("IfThenElseStatementNoShortIf", 7);}
;

AssertStatement:
ASSERT Expression SEMI_COLON		                                        {func("AssertStatement", 3);}
| ASSERT Expression COLON Expression SEMI_COLON		                        {func("AssertStatement", 5);}
;

WhileStatement:
WHILE LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS Statement		        {func("WhileStatement", 5);}
;

WhileStatementNoShortIf:
WHILE LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS StatementNoShortIf		{func("WhileStatementNoShortIf", 5);}
;

ForStatement:
BasicForStatement		                                                    {func("ForStatement", 1);}
| EnhancedForStatement		                                                {func("ForStatement", 1);}
;

ForStatementNoShortIf:
BasicForStatementNoShortIf		                                            {func("ForStatementNoShortIf", 1);}
| EnhancedForStatementNoShortIf		                                        {func("ForStatementNoShortIf", 1);}
;

BasicForStatement:
FOR LEFT_PARANTHESIS SEMI_COLON SEMI_COLON RIGHT_PARANTHESIS Statement 		                                {func("BasicForStatement", 6);}
| FOR LEFT_PARANTHESIS SEMI_COLON SEMI_COLON ForUpdate RIGHT_PARANTHESIS Statement 		                    {func("BasicForStatement", 7);}
| FOR LEFT_PARANTHESIS SEMI_COLON Expression SEMI_COLON RIGHT_PARANTHESIS Statement 	                    {func("BasicForStatement", 7);}
| FOR LEFT_PARANTHESIS SEMI_COLON Expression SEMI_COLON ForUpdate RIGHT_PARANTHESIS Statement 		        {func("BasicForStatement", 8);}
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON SEMI_COLON RIGHT_PARANTHESIS Statement 		                    {func("BasicForStatement", 7);}
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON SEMI_COLON ForUpdate RIGHT_PARANTHESIS Statement 		            {func("BasicForStatement", 8);}
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON Expression SEMI_COLON RIGHT_PARANTHESIS Statement 		        {func("BasicForStatement", 8);}
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON Expression SEMI_COLON ForUpdate RIGHT_PARANTHESIS Statement		{func("BasicForStatement", 9);}
;

BasicForStatementNoShortIf:
FOR LEFT_PARANTHESIS SEMI_COLON SEMI_COLON RIGHT_PARANTHESIS StatementNoShortIf 		                            {func("BasicForStatementNoShortIf", 6);}
| FOR LEFT_PARANTHESIS SEMI_COLON SEMI_COLON ForUpdate RIGHT_PARANTHESIS StatementNoShortIf 		                {func("BasicForStatementNoShortIf", 7);}
| FOR LEFT_PARANTHESIS SEMI_COLON Expression SEMI_COLON RIGHT_PARANTHESIS StatementNoShortIf 		                {func("BasicForStatementNoShortIf", 7);}
| FOR LEFT_PARANTHESIS SEMI_COLON Expression SEMI_COLON ForUpdate RIGHT_PARANTHESIS StatementNoShortIf 		        {func("BasicForStatementNoShortIf", 8);}
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON SEMI_COLON RIGHT_PARANTHESIS StatementNoShortIf 		                    {func("BasicForStatementNoShortIf", 7);}
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON SEMI_COLON ForUpdate RIGHT_PARANTHESIS StatementNoShortIf 		        {func("BasicForStatementNoShortIf", 8);}
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON Expression SEMI_COLON RIGHT_PARANTHESIS StatementNoShortIf 		        {func("BasicForStatementNoShortIf", 8);}
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON Expression SEMI_COLON ForUpdate RIGHT_PARANTHESIS StatementNoShortIf 		{func("BasicForStatementNoShortIf", 9);}
;

ForInit:
StatementExpressionList		    {func("ForInit", 1);}
| LocalVariableDeclaration		{func("ForInit", 1);}
;

LocalVariableDeclaration:
Type VariableDeclaratorList		                    {func("LocalVariableDeclaration", 2);}
| VariableModifiers Type VariableDeclaratorList		{func("LocalVariableDeclaration", 3);}
| VAR VariableDeclaratorList		                {func("LocalVariableDeclaration", 2);}
| VariableModifiers VAR VariableDeclaratorList		{func("LocalVariableDeclaration", 3);}
;

ForUpdate:
StatementExpressionList		{func("ForUpdate", 1);}
;

StatementExpressionList:
StatementExpressionList COMMA StatementExpression		{func("StatementExpressionList", 3);}
| StatementExpression		                            {func("StatementExpressionList", 1);}
;

EnhancedForStatement:
FOR LEFT_PARANTHESIS LocalVariableDeclaration COLON Expression RIGHT_PARANTHESIS Statement		        {func("EnhancedForStatement", 7);}
;

EnhancedForStatementNoShortIf:
FOR LEFT_PARANTHESIS LocalVariableDeclaration COLON Expression RIGHT_PARANTHESIS StatementNoShortIf		{func("EnhancedForStatementNoShortIf", 7);}
;

BreakStatement:
BREAK SEMI_COLON		            {func("BreakStatement", 2);}
| BREAK IDENTIFIER SEMI_COLON		{func("BreakStatement", 3);}
;

YieldStatement:
YIELD Expression SEMI_COLON		    {func("YieldStatement", 3);}
;

ContinueStatement:
CONTINUE SEMI_COLON		                {func("ContinueStatement", 2);}
| CONTINUE IDENTIFIER SEMI_COLON		{func("ContinueStatement", 3);}
;

ReturnStatement:
RETURN SEMI_COLON		            {func("ReturnStatement", 2);}
|  RETURN Expression SEMI_COLON		{func("ReturnStatement", 3);}
;

ThrowStatement:
THROW Expression SEMI_COLON		    {func("ThrowStatement", 3);}
;

SynchronizedStatement:
SYNCHRONIZED LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS Block		{func("SynchronizedStatement", 5);}
;

TryStatement:
TRY Block Catches		                {func("TryStatement", 3);}
| TRY Block FINALLY Block		        {func("TryStatement", 4);}
| TRY Block Catches FINALLY Block		{func("TryStatement", 5);}
;

Catches:
Catches CatchClause		                {func("Catches", 2);}
| CatchClause		                    {func("Catches", 1);}
;

CatchClause:
CATCH LEFT_PARANTHESIS FormalParameter RIGHT_PARANTHESIS Block		{func("CatchClause", 5);}
;

Primary:
PrimaryNoNewArray		        {func("Primary", 1);}
| ArrayCreationExpression		{func("Primary", 1);}
;

PrimaryNoNewArray:
Literal		                                        {func("PrimaryNoNewArray", 1);}
| ClassLiteral		                                {func("PrimaryNoNewArray", 1);}
| THIS		                                        {func("PrimaryNoNewArray", 1);}
| DotIdentifiers DOT THIS		                    {func("PrimaryNoNewArray", 3);}
| LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS		{func("PrimaryNoNewArray", 3);}
| ClassInstanceCreationExpression		            {func("PrimaryNoNewArray", 1);}
| FieldAccess		                                {func("PrimaryNoNewArray", 1);}
| ArrayAccess		                                {func("PrimaryNoNewArray", 1);}
| MethodInvocation		                            {func("PrimaryNoNewArray", 1);}
| MethodReference		                            {func("PrimaryNoNewArray", 1);}
;

Literal:
INTEGER_LITERAL		                                {func("Literal", 1);}
| FLOATINGPOINT_LITERAL		                        {func("Literal", 1);}
| BOOLEAN_LITERAL		                            {func("Literal", 1);}
| CHARACTER_LITERAL		                            {func("Literal", 1);}
| STRING_LITERAL		                            {func("Literal", 1);}
| TEXTBLOCK		                                    {func("Literal", 1);}
| NULL_LITERAL		                                {func("Literal", 1);}
;

ClassLiteral:
DotIdentifiers DOT CLASS 		                    {func("ClassLiteral", 3);}
| DotIdentifiers Dims DOT CLASS 		            {func("ClassLiteral", 4);}
| PrimitiveType DOT CLASS 		                    {func("ClassLiteral", 3);}
| PrimitiveType Dims DOT CLASS 		                {func("ClassLiteral", 4);}
| VOID DOT CLASS		                            {func("ClassLiteral", 3);}
;

ClassInstanceCreationExpression:
UnqualifiedClassInstanceCreationExpression		                    {func("ClassInstanceCreationExpression", 1);}
| DotIdentifiers DOT UnqualifiedClassInstanceCreationExpression		{func("ClassInstanceCreationExpression", 3);}
| Primary DOT UnqualifiedClassInstanceCreationExpression		    {func("ClassInstanceCreationExpression", 3);}
;

UnqualifiedClassInstanceCreationExpression:
NEW DotIdentifiers LEFT_PARANTHESIS RIGHT_PARANTHESIS 		                                                            {func("UnqualifiedClassInstanceCreationExpression", 4);}
| NEW DotIdentifiers LEFT_PARANTHESIS RIGHT_PARANTHESIS ClassBody 		                                                {func("UnqualifiedClassInstanceCreationExpression", 5);}
| NEW DotIdentifiers LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 		                                            {func("UnqualifiedClassInstanceCreationExpression", 5);}
| NEW DotIdentifiers LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS ClassBody 		                                    {func("UnqualifiedClassInstanceCreationExpression", 6);}
| NEW DotIdentifiers LESS_THAN GREATER_THAN LEFT_PARANTHESIS RIGHT_PARANTHESIS 		                                    {func("UnqualifiedClassInstanceCreationExpression", 6);}
| NEW DotIdentifiers LESS_THAN GREATER_THAN LEFT_PARANTHESIS RIGHT_PARANTHESIS ClassBody 		                        {func("UnqualifiedClassInstanceCreationExpression", 7);}
| NEW DotIdentifiers LESS_THAN GREATER_THAN LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 		                        {func("UnqualifiedClassInstanceCreationExpression", 7);}
| NEW DotIdentifiers LESS_THAN GREATER_THAN LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS ClassBody 		            {func("UnqualifiedClassInstanceCreationExpression", 8);}
| NEW TypeArguments DotIdentifiers LEFT_PARANTHESIS RIGHT_PARANTHESIS 		                                            {func("UnqualifiedClassInstanceCreationExpression", 5);}
| NEW TypeArguments DotIdentifiers LEFT_PARANTHESIS RIGHT_PARANTHESIS ClassBody 		                                {func("UnqualifiedClassInstanceCreationExpression", 6);}
| NEW TypeArguments DotIdentifiers LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 		                                {func("UnqualifiedClassInstanceCreationExpression", 6);}
| NEW TypeArguments DotIdentifiers LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS ClassBody 		                    {func("UnqualifiedClassInstanceCreationExpression", 7);}
| NEW TypeArguments DotIdentifiers LESS_THAN GREATER_THAN LEFT_PARANTHESIS RIGHT_PARANTHESIS 		                    {func("UnqualifiedClassInstanceCreationExpression", 7);}
| NEW TypeArguments DotIdentifiers LESS_THAN GREATER_THAN LEFT_PARANTHESIS RIGHT_PARANTHESIS ClassBody 		            {func("UnqualifiedClassInstanceCreationExpression", 8);}
| NEW TypeArguments DotIdentifiers LESS_THAN GREATER_THAN LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 	            {func("UnqualifiedClassInstanceCreationExpression", 8);}
| NEW TypeArguments DotIdentifiers LESS_THAN GREATER_THAN LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS ClassBody 		{func("UnqualifiedClassInstanceCreationExpression", 9);}
;

FieldAccess:
Primary DOT IDENTIFIER		                    {func("FieldAccess", 3);}
| SUPER DOT IDENTIFIER		                    {func("FieldAccess", 3);}
| DotIdentifiers DOT SUPER DOT IDENTIFIER		{func("FieldAccess", 5);}
;

ArrayAccess:
DotIdentifiers LEFT_SQUARE_BRACE Expression RIGHT_SQUARE_BRACE  		{func("ArrayAccess", 4);}
| PrimaryNoNewArray LEFT_SQUARE_BRACE Expression RIGHT_SQUARE_BRACE		{func("ArrayAccess", 4);}
;

MethodInvocation:
IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		                                                        {func("MethodInvocation", 3);}
| IDENTIFIER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 		                                        {func("MethodInvocation", 4);}
| DotIdentifiers DOT IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		                                    {func("MethodInvocation", 5);}
| DotIdentifiers DOT IDENTIFIER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 		                        {func("MethodInvocation", 6);}
| DotIdentifiers DOT TypeArguments IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		                    {func("MethodInvocation", 6);}
| DotIdentifiers DOT TypeArguments IDENTIFIER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 		        {func("MethodInvocation", 7);}
| Primary DOT IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		                                        {func("MethodInvocation", 5);}
| Primary DOT IDENTIFIER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 		                            {func("MethodInvocation", 6);}
| Primary DOT TypeArguments IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		                            {func("MethodInvocation", 6);}
| Primary DOT TypeArguments IDENTIFIER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 		                {func("MethodInvocation", 7);}
| SUPER DOT IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		                                            {func("MethodInvocation", 5);}
| SUPER DOT IDENTIFIER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 		                                {func("MethodInvocation", 6);}
| SUPER DOT TypeArguments IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		                            {func("MethodInvocation", 6);}
| SUPER DOT TypeArguments IDENTIFIER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 		                {func("MethodInvocation", 7);}
| DotIdentifiers DOT SUPER DOT IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		                        {func("MethodInvocation", 7);}
| DotIdentifiers DOT SUPER DOT IDENTIFIER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 		            {func("MethodInvocation", 8);}
| DotIdentifiers DOT SUPER DOT TypeArguments IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		            {func("MethodInvocation", 8);}
| DotIdentifiers DOT SUPER DOT TypeArguments IDENTIFIER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS		{func("MethodInvocation", 9);}
;

MethodReference:
Primary DOUBLE_COLON IDENTIFIER 		                                {func("MethodReference", 3);}
| Primary DOUBLE_COLON TypeArguments IDENTIFIER 		                {func("MethodReference", 4);}
| ReferenceType DOUBLE_COLON IDENTIFIER 		                        {func("MethodReference", 3);}
| ReferenceType DOUBLE_COLON TypeArguments IDENTIFIER 		            {func("MethodReference", 4);}
| ReferenceType DOUBLE_COLON NEW 		                                {func("MethodReference", 3);}
| ReferenceType DOUBLE_COLON TypeArguments NEW 		                    {func("MethodReference", 4);}
| SUPER DOUBLE_COLON IDENTIFIER 		                                {func("MethodReference", 3);}
| SUPER DOUBLE_COLON TypeArguments IDENTIFIER 		                    {func("MethodReference", 4);}
| DotIdentifiers DOT SUPER DOUBLE_COLON IDENTIFIER 		                {func("MethodReference", 5);}
| DotIdentifiers DOT SUPER DOUBLE_COLON TypeArguments IDENTIFIER		{func("MethodReference", 6);}
;

ArrayCreationExpression:
NEW PrimitiveType DimExprs 		            {func("ArrayCreationExpression", 3);}
| NEW PrimitiveType DimExprs Dims 		    {func("ArrayCreationExpression", 4);}
| NEW ClassType DimExprs 		            {func("ArrayCreationExpression", 3);}
| NEW ClassType DimExprs Dims 		        {func("ArrayCreationExpression", 4);}
| NEW PrimitiveType Dims ArrayInitializer 	{func("ArrayCreationExpression", 4);}
| NEW ClassType Dims ArrayInitializer 		{func("ArrayCreationExpression", 4);}
;

DimExprs:
DimExprs LEFT_SQUARE_BRACE Expression RIGHT_SQUARE_BRACE		{func("DimExprs", 4);}
| LEFT_SQUARE_BRACE Expression RIGHT_SQUARE_BRACE		        {func("DimExprs", 3);}
;

Expression:
LambdaExpression		    {func("Expression", 1);}
| AssignmentExpression		{func("Expression", 1);}
;

LambdaExpression:
LEFT_PARANTHESIS FormalParameterList RIGHT_PARANTHESIS ARROW_RIGHT Block		    {func("LambdaExpression", 5);}
| LEFT_PARANTHESIS RIGHT_PARANTHESIS ARROW_RIGHT Block		                        {func("LambdaExpression", 4);}
| IDENTIFIER ARROW_RIGHT Block		                                                {func("LambdaExpression", 3);}
| LEFT_PARANTHESIS FormalParameterList RIGHT_PARANTHESIS ARROW_RIGHT Expression		{func("LambdaExpression", 5);}
| LEFT_PARANTHESIS RIGHT_PARANTHESIS ARROW_RIGHT Expression		                    {func("LambdaExpression", 4);}
| IDENTIFIER ARROW_RIGHT Expression		                                            {func("LambdaExpression", 3);}
;

AssignmentExpression:
ConditionalExpression		{func("AssignmentExpression", 1);}
| Assignment		        {func("AssignmentExpression", 1);}
;

Assignment:
DotIdentifiers AssignmentOperator Expression	{func("Assignment", 3);}
| FieldAccess AssignmentOperator Expression		{func("Assignment", 3);}
| ArrayAccess AssignmentOperator Expression		{func("Assignment", 3);}
;

AssignmentOperator:
EQUALS		                                        {func("AssignmentOperator", 1);}
| STAR_EQUALS		                                {func("AssignmentOperator", 1);}
| SLASH_EQUALS		                                {func("AssignmentOperator", 1);}
| PERCENT_EQUALS		                            {func("AssignmentOperator", 1);}
| PLUS_EQUALS		                                {func("AssignmentOperator", 1);}
| MINUS_EQUALS		                                {func("AssignmentOperator", 1);}
| LESS_THAN_LESS_THAN_EQUALS		                {func("AssignmentOperator", 1);}
| GREATER_THAN_GREATER_THAN_EQUALS		            {func("AssignmentOperator", 1);}
| GREATER_THAN_GREATER_THAN_GREATER_THAN_EQUALS		{func("AssignmentOperator", 1);}
| AMPERSAND_EQUALS		                            {func("AssignmentOperator", 1);}
| POWER_EQUALS		                                {func("AssignmentOperator", 1);}
| BAR_EQUALS		                                {func("AssignmentOperator", 1);}
;

ConditionalExpression:
ConditionalOrExpression		                                                    {func("ConditionalExpression", 1);}
| ConditionalOrExpression QUESTION Expression COLON ConditionalExpression		{func("ConditionalExpression", 5);}
| ConditionalOrExpression QUESTION Expression COLON LambdaExpression		    {func("ConditionalExpression", 5);}
;

ConditionalOrExpression:
ConditionalAndExpression		                                {func("ConditionalOrExpression", 1);}
| ConditionalOrExpression BAR_BAR ConditionalAndExpression		{func("ConditionalOrExpression", 3);}
;

ConditionalAndExpression:
InclusiveOrExpression		                                                {func("ConditionalAndExpression", 1);}
| ConditionalAndExpression AMPERSAND_AMPERSAND InclusiveOrExpression		{func("ConditionalAndExpression", 3);}
;

InclusiveOrExpression:
ExclusiveOrExpression		                            {func("InclusiveOrExpression", 1);}
| InclusiveOrExpression BAR ExclusiveOrExpression		{func("InclusiveOrExpression", 3);}
;

ExclusiveOrExpression:
AndExpression		                            {func("ExclusiveOrExpression", 1);}
| ExclusiveOrExpression POWER AndExpression		{func("ExclusiveOrExpression", 3);}
;

AndExpression:
EqualityExpression		                            {func("AndExpression", 1);}
| AndExpression AMPERSAND EqualityExpression		{func("AndExpression", 3);}
;

EqualityExpression:
RelationalExpression		                                    {func("EqualityExpression", 1);}
| EqualityExpression EQUALS_EQUALS RelationalExpression		    {func("EqualityExpression", 3);}
| EqualityExpression EXCLAIM_EQUALS RelationalExpression		{func("EqualityExpression", 3);}
;

RelationalExpression:
ShiftExpression		                                        {func("RelationalExpression", 1);}
| RelationalExpression LESS_THAN ShiftExpression		    {func("RelationalExpression", 3);}
| RelationalExpression GREATER_THAN ShiftExpression		    {func("RelationalExpression", 3);}
| RelationalExpression LESS_THAN_EQUALS ShiftExpression		{func("RelationalExpression", 3);}
| RelationalExpression GREATER_THAN_EQUALS ShiftExpression	{func("RelationalExpression", 3);}
;

ShiftExpression:
AdditiveExpression		                                                        {func("ShiftExpression", 1);}
| ShiftExpression LESS_THAN_LESS_THAN AdditiveExpression		                {func("ShiftExpression", 3);}
| ShiftExpression GREATER_THAN_GREATER_THAN AdditiveExpression		            {func("ShiftExpression", 3);}
| ShiftExpression GREATER_THAN_GREATER_THAN_GREATER_THAN AdditiveExpression		{func("ShiftExpression", 3);}
;

AdditiveExpression:
MultiplicativeExpression		                        {func("AdditiveExpression", 1);}
| AdditiveExpression PLUS MultiplicativeExpression		{func("AdditiveExpression", 3);}
| AdditiveExpression MINUS MultiplicativeExpression		{func("AdditiveExpression", 3);}
;

MultiplicativeExpression:
UnaryExpression		                                    {func("MultiplicativeExpression", 1);}
| MultiplicativeExpression STAR UnaryExpression		    {func("MultiplicativeExpression", 3);}
| MultiplicativeExpression SLASH UnaryExpression		{func("MultiplicativeExpression", 3);}
| MultiplicativeExpression PERCENT UnaryExpression		{func("MultiplicativeExpression", 3);}
;

UnaryExpression:
PreIncrementExpression		    {func("UnaryExpression", 1);}
| PreDecrementExpression		{func("UnaryExpression", 1);}
| PLUS UnaryExpression		    {func("UnaryExpression", 2);}
| MINUS UnaryExpression		    {func("UnaryExpression", 2);}
| UnaryExpressionNotPlusMinus	{func("UnaryExpression", 1);}
;

PreIncrementExpression:
PLUS_PLUS UnaryExpression		{func("PreIncrementExpression", 2);}
;

PreDecrementExpression:
MINUS_MINUS UnaryExpression		{func("PreDecrementExpression", 2);}
;

UnaryExpressionNotPlusMinus:
PostfixExpression		    {func("UnaryExpressionNotPlusMinus", 1);}
| TILDA UnaryExpression		{func("UnaryExpressionNotPlusMinus", 2);}
| EXCLAIM UnaryExpression	{func("UnaryExpressionNotPlusMinus", 2);}
;

PostfixExpression:
Primary		                    {func("PostfixExpression", 1);}
| DotIdentifiers		        {func("PostfixExpression", 1);}
| PostIncrementExpression		{func("PostfixExpression", 1);}
| PostDecrementExpression		{func("PostfixExpression", 1);}
;

PostIncrementExpression:
PostfixExpression PLUS_PLUS		    {func("PostIncrementExpression", 2);}
;

PostDecrementExpression:
PostfixExpression MINUS_MINUS		{func("PostDecrementExpression", 2);}
;



%%

int main(){
    fout.open("ast.dot",ios::out);
    st.empty();
    node_number=1;
    leaf_number=0;
    #if YYDEBUG
        yydebug=1;
    #endif
    fout<<"digraph G{"<<endl;
    yyparse();
    fout<<"}"<<endl;
    exit(0);
}