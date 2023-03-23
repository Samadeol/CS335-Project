%{
#include <bits/stdc++.h>
#include "symbol_table.cpp"
using namespace std;

extern int yylex();
extern int yylineno;
extern FILE* yyin;

#define YYDEBUG 1

bool first_parse;
fstream fout,fin;
stack<int> st;
int node_number=1;
string type;
string modifiers;
string temp;

vector<tuple<string,string,int,bool,bool> > arguments;

void yyerror(const char* error){
    fprintf (stderr, "%s | %d\n",error,yylineno);
    exit(1);
}

void func(string q,string p){
    if(p=="0") return;
    if(p[1]=='?') p="0";
    fout<<"n"<<node_number<<"[label=\""<<q<<"\"]"<<endl;
    int a[p.size()]={0};
    for(int i=p.size()-1;i>=0;i--){
        if(p[i]=='0'){
            int t = st.top();
            st.pop();
            a[i]=t;
        }
    }
    for(int i=0;i<p.size();i++){
        if(p[i]>'1') continue;
        fout<<"n"<<node_number<<"->";
        char c = 'a'+i;
        if(p[i]=='0') fout<<"n"<<a[i]<<endl;
        else fout<<"n"<<node_number<<c<<endl;
    }
    st.push(node_number);
    node_number++;
    return;
}


%}

%define parse.error verbose
%locations

%union{
    struct {
        char label[1000];
        char type[100];
        int dims;
    }item;
}

%token <item> AMPERSAND AMPERSAND_AMPERSAND AMPERSAND_EQUALS ARROW_RIGHT ASSERT BAR BAR_BAR BAR_EQUALS BOOLEAN_LITERAL BOOLEAN_TYPE BREAK CATCH CHARACTER_LITERAL CLASS COLON COMMA CONTINUE DOT DOUBLE_COLON ELSE EQUALS EQUALS_EQUALS EXCLAIM EXCLAIM_EQUALS EXTENDS FINAL FINALLY FLOATINGPOINT_LITERAL FLOAT_POINT_TYPE FOR GREATER_THAN GREATER_THAN_EQUALS GREATER_THAN_GREATER_THAN GREATER_THAN_GREATER_THAN_EQUALS GREATER_THAN_GREATER_THAN_GREATER_THAN GREATER_THAN_GREATER_THAN_GREATER_THAN_EQUALS IDENTIFIER IF IMPLEMENTS IMPORT INTEGER_LITERAL INTEGRAL_TYPE INTERFACE LEFT_CURLY_BRACE LEFT_PARANTHESIS LEFT_SQUARE_BRACE LESS_THAN LESS_THAN_EQUALS LESS_THAN_LESS_THAN LESS_THAN_LESS_THAN_EQUALS MINUS MINUS_EQUALS MINUS_MINUS NEW NULL_LITERAL PACKAGE PERCENT PERCENT_EQUALS PERMITS PLUS PLUS_EQUALS PLUS_PLUS POWER POWER_EQUALS PRIVATE PUBLIC QUESTION RETURN RIGHT_CURLY_BRACE RIGHT_PARANTHESIS RIGHT_SQUARE_BRACE SEMI_COLON SLASH SLASH_EQUALS STAR STAR_EQUALS STATIC STRING_TYPE STRING_LITERAL SUPER SYNCHRONIZED TEXTBLOCK THIS THROW THROWS TILDA TRIPLE_DOT TRY VAR VOID WHILE YIELD
%type <item> AdditiveExpression AndExpression ArrayAccess ArrayCreationExpression ArrayInitializer ArrayType AssertStatement Assignment AssignmentExpression BasicForStatement BasicForStatementNoShortIf Block BlockStatement BlockStatements BreakStatement CastExpression CatchClause Catches ClassBody ClassBodyDeclaration ClassBodyDeclarations ClassDeclaration ClassInstanceCreationExpression ClassLiteral ClassMemberDeclaration ClassModifier ClassModifiers ClassType CompiledStuff ConditionalAndExpression ConditionalExpression ConditionalOrExpression ConstructorBody ConstructorDeclaration ContinueStatement Declarator DimExprs Dims DotIdentifiers EmptyStatement EnhancedForStatement EnhancedForStatementNoShortIf EqualityExpression ExclusiveOrExpression ExplicitConstructorInvocation Expression ExpressionStatement Expressions FieldAccess FieldDeclaration ForInit ForStatement ForStatementNoShortIf ForUpdate FormalParameter FormalParameterList IfThenElseStatement IfThenElseStatementNoShortIf IfThenStatement ImportDeclaration ImportDeclarations InclusiveOrExpression InterfaceDeclaration LabeledStatement LabeledStatementNoShortIf LambdaExpression Literal LocalVariableDeclaration MethodBody MethodDeclaration MethodDeclarator MethodInvocation MultiplicativeExpression NumericType PackageDeclaration PostDecrementExpression PostIncrementExpression PostfixExpression PreDecrementExpression PreIncrementExpression Primary PrimaryNoNewArray PrimitiveType ReferenceType RelationalExpression ReturnStatement ShiftExpression SingleStaticImportDeclaration SingleTypeImportDeclaration Statement StatementExpression StatementExpressionList StatementNoShortIf StatementWithoutTrailingSubstatement StaticImportOnDemandDeclaration StaticInitializer SynchronizedStatement ThrowStatement TryStatement Type TypeArgument TypeArgumentList TypeArguments TypeDeclaration TypeDeclarations TypeImportOnDemandDeclaration UnaryExpression UnaryExpressionNotPlusMinus UnqualifiedClassInstanceCreationExpression VariableDeclarator VariableDeclaratorList VariableInitializer VariableInitializerList WhileStatement WhileStatementNoShortIf Wildcard YieldStatement IfThenElseStatementStart 

%start input

%%

input: CompiledStuff

CompiledStuff:
TypeDeclarations 		
| ImportDeclarations 		
| ImportDeclarations TypeDeclarations		
| PackageDeclaration        
| PackageDeclaration TypeDeclarations 		
| PackageDeclaration ImportDeclarations 		
| PackageDeclaration ImportDeclarations TypeDeclarations		
;

PackageDeclaration:
PACKAGE DotIdentifiers 
;

ImportDeclarations:
ImportDeclarations ImportDeclaration		
| ImportDeclaration		
;

ImportDeclaration:
SingleTypeImportDeclaration		
| TypeImportOnDemandDeclaration		
| SingleStaticImportDeclaration		
| StaticImportOnDemandDeclaration		
;

SingleTypeImportDeclaration:
IMPORT DotIdentifiers SEMI_COLON		
;

TypeImportOnDemandDeclaration:
IMPORT DotIdentifiers DOT STAR SEMI_COLON		
;

SingleStaticImportDeclaration:
IMPORT STATIC DotIdentifiers DOT IDENTIFIER SEMI_COLON		
;

StaticImportOnDemandDeclaration:
IMPORT STATIC DotIdentifiers DOT STAR SEMI_COLON		
;

TypeDeclarations:
TypeDeclarations TypeDeclaration		
| TypeDeclaration		
;

TypeDeclaration:
ClassDeclaration		
| InterfaceDeclaration		
;

Type:
PrimitiveType   {strcpy($$.type,$1.type);type = $$.type;}		
| ReferenceType	{strcpy($$.type,$1.type);type = $$.type;}	
;

PrimitiveType:
NumericType	 {strcpy($$.type,$1.type);}	
| BOOLEAN_TYPE	{strcpy($$.type,$1.type);}	
| STRING_TYPE   {strcpy($$.type,$1.type);}    
;

NumericType:
INTEGRAL_TYPE	{strcpy($$.type,$1.type);}	
| FLOAT_POINT_TYPE	{strcpy($$.type,$1.type);}	
;

ReferenceType:
ClassType	{check_gst($1.label); strcpy($$.type,$1.type);}	
| ArrayType		
;

ClassType:
DotIdentifiers	{strcpy($$.type,$1.type);}	
;

DotIdentifiers:
DotIdentifiers DOT IDENTIFIER	{strcpy($$.label,strcat($1.label,strcat($2.label,$3.label)));}	
| IDENTIFIER		{strcpy($$.type,$1.type);}
;

ArrayType:
PrimitiveType Dims		
;

Dims:
Dims LEFT_SQUARE_BRACE RIGHT_SQUARE_BRACE {$$.dims = $1.dims+1;}		
| LEFT_SQUARE_BRACE RIGHT_SQUARE_BRACE	{$$.dims = 1;}	
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

ClassDeclaration:
CLASS IDENTIFIER ClassBody	{if(first_parse) make_class_entry($2.label,yylineno,"00");}
| ClassModifiers CLASS IDENTIFIER ClassBody {if(first_parse){string mod = check_class_modifiers($1.label,$3.label); make_class_entry($3.label,yylineno,mod);} modifiers.clear();}
;

ClassModifiers:
ClassModifiers ClassModifier {strcpy($$.label,strcat($1.label,$2.label)); modifiers = $$.label;}		
| ClassModifier	{strcpy($$.label,$1.label); modifiers = $$.label;}	
;

ClassModifier:
PUBLIC	    {strcpy($$.label,"0");}
| PRIVATE	{strcpy($$.label,"1");}	
| FINAL		{strcpy($$.label,"2");temp.clear();}
| STATIC	{strcpy($$.label,"3");}			
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
| Block {reset();}		
;

ClassMemberDeclaration:
FieldDeclaration		
| MethodDeclaration		
| SEMI_COLON		
;

FieldDeclaration:
Type VariableDeclaratorList SEMI_COLON	{type.clear();}	
| ClassModifiers Type VariableDeclaratorList SEMI_COLON {modifiers.clear();type.clear();}		
;

VariableDeclaratorList:
VariableDeclaratorList COMMA VariableDeclarator		
| VariableDeclarator		
;

VariableDeclarator:
IDENTIFIER EQUALS VariableInitializer   {if(check_first()){string x; if(modifiers.size()==0) x = check_method_modifiers(temp); else x = check_method_modifiers(modifiers); make_entry($1.label,type,yylineno,x);}}		
| IDENTIFIER Dims EQUALS VariableInitializer	{if(check_first()){string x; if(modifiers.size()==0) x = check_method_modifiers(temp); else x = check_method_modifiers(modifiers); vector<int> v($2.dims,0); make_array_entry($1.label,type,yylineno,v,x);}}	
| IDENTIFIER	{if(check_first()){string x; if(modifiers.size()==0) x = check_method_modifiers(temp); else x = check_method_modifiers(modifiers); make_entry($1.label,type,yylineno,x);}}	
| IDENTIFIER Dims	{if(check_first()){string x; if(modifiers.size()==0) x = check_method_modifiers(temp); else x = check_method_modifiers(modifiers); vector<int> v($2.dims,0); make_array_entry($1.label,type,yylineno,v,x);}}		
;

VariableInitializer:
Expression		
| ArrayInitializer		
;

MethodDeclaration:
VOID MethodDeclarator MethodBody	{if(first_parse){make_func_entry($2.label,"void",arguments,yylineno,"0000",$2.dims); add_arguments(arguments,$2.label); arguments.clear();}}	
| Type MethodDeclarator MethodBody	{if(first_parse){make_func_entry($2.label,$1.type,arguments,yylineno,"0000",$2.dims); add_arguments(arguments,$2.label); arguments.clear();}}	
| ClassModifiers VOID MethodDeclarator MethodBody  {if(first_parse){string x = check_method_modifiers($1.label); make_func_entry($3.label,"void",arguments,yylineno,x,$2.dims); add_arguments(arguments,$3.label); arguments.clear();}modifiers.clear();}
| ClassModifiers Type MethodDeclarator MethodBody {if(first_parse){string x = check_method_modifiers($1.label); make_func_entry($3.label,$2.type,arguments,yylineno,x,$2.dims); add_arguments(arguments,$3.label); arguments.clear();}modifiers.clear();}	
;

MethodDeclarator:
Declarator  {strcpy($$.label,$1.label); $$.dims = 0;}		
| Declarator Dims	{strcpy($$.label,$1.label); $$.dims = $2.dims;}	
;

FormalParameterList:
FormalParameterList COMMA FormalParameter		
| FormalParameter		
;

FormalParameter:
Type IDENTIFIER     {if(first_parse){arguments.push_back(make_tuple($2.label,$1.type,0,0,0));}}	
| FINAL Type IDENTIFIER 		{if(first_parse){arguments.push_back(make_tuple($3.label,$2.type,0,0,1));}}
| Type IDENTIFIER Dims 		{if(first_parse){arguments.push_back(make_tuple($2.label,$1.type,$3.dims,0,0));}}
| FINAL Type IDENTIFIER Dims		{if(first_parse){arguments.push_back(make_tuple($3.label,$1.type,0,0,0));}}
| Type TRIPLE_DOT IDENTIFIER		{if(first_parse){arguments.push_back(make_tuple($3.label,$1.type,0,1,0));}}
| FINAL Type TRIPLE_DOT IDENTIFIER		{if(first_parse){arguments.push_back(make_tuple($4.label,$2.type,0,1,1));}}
;

MethodBody:
Block		
| SEMI_COLON		
;

StaticInitializer:
STATIC Block		
;

ConstructorDeclaration:		
Declarator ConstructorBody {if(first_parse){check_constructor($2.label); make_func_entry($1.label,$1.label,arguments,yylineno,"0000",$1.dims); add_arguments(arguments,$1.label); arguments.clear();}}
| ClassModifiers Declarator ConstructorBody{if(first_parse){check_constructor($2.label); string x = check_method_modifiers($1.label); make_func_entry($2.label,$2.label,arguments,yylineno,x,$2.dims); add_arguments(arguments,$3.label); arguments.clear();}modifiers.clear();}
;

Declarator:
IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		
| IDENTIFIER LEFT_PARANTHESIS FormalParameterList RIGHT_PARANTHESIS 		
;

ConstructorBody:
LEFT_CURLY_BRACE RIGHT_CURLY_BRACE 		
| LEFT_CURLY_BRACE BlockStatements RIGHT_CURLY_BRACE 		
| LEFT_CURLY_BRACE ExplicitConstructorInvocation RIGHT_CURLY_BRACE 		
| LEFT_CURLY_BRACE ExplicitConstructorInvocation BlockStatements RIGHT_CURLY_BRACE		
;

ExplicitConstructorInvocation:
THIS LEFT_PARANTHESIS RIGHT_PARANTHESIS SEMI_COLON 		
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
INTERFACE IDENTIFIER ClassBody	{if(first_parse) make_class_entry($2.label,yylineno,"00");}
| ClassModifiers INTERFACE IDENTIFIER ClassBody {if(first_parse){string mod = check_class_modifiers($1.label,$3.label); make_class_entry($3.label,yylineno,mod);} modifiers.clear();}
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
| FINAL Type VariableDeclaratorList SEMI_COLON	{temp.clear();}	
| FINAL VAR VariableDeclaratorList SEMI_COLON	{temp.clear();}	
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
IfThenElseStatementStart ELSE Statement	
;

IfThenElseStatementStart:
IF LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS StatementNoShortIf
;

IfThenElseStatementNoShortIf:
IfThenElseStatementStart ELSE StatementNoShortIf	
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

LocalVariableDeclaration:
Type VariableDeclaratorList		
| FINAL Type VariableDeclaratorList		
| VAR VariableDeclaratorList		
| FINAL VAR VariableDeclaratorList		
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

Primary:
PrimaryNoNewArray		
| ArrayCreationExpression		
;

PrimaryNoNewArray:
Literal			
| THIS		
| DotIdentifiers DOT THIS		
| LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS		
| ClassInstanceCreationExpression		
| FieldAccess		
| ArrayAccess		
| MethodInvocation		
;

Literal:
INTEGER_LITERAL	    {strcpy($$.type,"int");}	
| FLOATINGPOINT_LITERAL		{strcpy($$.type,"float");}
| BOOLEAN_LITERAL	{strcpy($$.type,"bool");}	
| CHARACTER_LITERAL		{strcpy($$.type,"char");}
| STRING_LITERAL		{strcpy($$.type,"string");}	
| NULL_LITERAL		{strcpy($$.type,"null");}
;

ClassInstanceCreationExpression:
UnqualifiedClassInstanceCreationExpression		
| DotIdentifiers DOT UnqualifiedClassInstanceCreationExpression		
| Primary DOT UnqualifiedClassInstanceCreationExpression		
;

UnqualifiedClassInstanceCreationExpression:
NEW DotIdentifiers LEFT_PARANTHESIS RIGHT_PARANTHESIS 		
| NEW DotIdentifiers LEFT_PARANTHESIS RIGHT_PARANTHESIS ClassBody 		
| NEW DotIdentifiers LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 		
| NEW DotIdentifiers LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS ClassBody 		
;

FieldAccess:
Primary DOT IDENTIFIER		
| SUPER DOT IDENTIFIER		
| DotIdentifiers DOT SUPER DOT IDENTIFIER		
;

ArrayAccess:
DotIdentifiers LEFT_SQUARE_BRACE Expression RIGHT_SQUARE_BRACE  		
| PrimaryNoNewArray LEFT_SQUARE_BRACE Expression RIGHT_SQUARE_BRACE		
;

MethodInvocation:
IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		
| IDENTIFIER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 		
| DotIdentifiers DOT IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		
| DotIdentifiers DOT IDENTIFIER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 		
| DotIdentifiers DOT TypeArguments IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		
| DotIdentifiers DOT TypeArguments IDENTIFIER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 		
| Primary DOT IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		
| Primary DOT IDENTIFIER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 		
| Primary DOT TypeArguments IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		
| Primary DOT TypeArguments IDENTIFIER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 		
| SUPER DOT IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		
| SUPER DOT IDENTIFIER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 		
| SUPER DOT TypeArguments IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		
| SUPER DOT TypeArguments IDENTIFIER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 		
| DotIdentifiers DOT SUPER DOT IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		
| DotIdentifiers DOT SUPER DOT IDENTIFIER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 		
| DotIdentifiers DOT SUPER DOT TypeArguments IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		
| DotIdentifiers DOT SUPER DOT TypeArguments IDENTIFIER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS		
;

ArrayCreationExpression:
NEW PrimitiveType DimExprs 		
| NEW PrimitiveType DimExprs Dims 		
| NEW ClassType DimExprs 		
| NEW ClassType DimExprs Dims 		
| NEW PrimitiveType Dims ArrayInitializer 		
| NEW ClassType Dims ArrayInitializer 		
;

DimExprs:
DimExprs LEFT_SQUARE_BRACE Expression RIGHT_SQUARE_BRACE		
| LEFT_SQUARE_BRACE Expression RIGHT_SQUARE_BRACE		
;

Expression:
LambdaExpression		
| AssignmentExpression		
;

LambdaExpression:
LEFT_PARANTHESIS FormalParameterList RIGHT_PARANTHESIS ARROW_RIGHT Block		
| LEFT_PARANTHESIS RIGHT_PARANTHESIS ARROW_RIGHT Block		
| IDENTIFIER ARROW_RIGHT Block		
| LEFT_PARANTHESIS FormalParameterList RIGHT_PARANTHESIS ARROW_RIGHT Expression		
| LEFT_PARANTHESIS RIGHT_PARANTHESIS ARROW_RIGHT Expression		
| IDENTIFIER ARROW_RIGHT Expression		
;

AssignmentExpression:
ConditionalExpression		
| Assignment		
;

Assignment:
DotIdentifiers EQUALS Expression	
| DotIdentifiers STAR_EQUALS Expression		
| DotIdentifiers SLASH_EQUALS Expression		
| DotIdentifiers PERCENT_EQUALS Expression		
| DotIdentifiers PLUS_EQUALS Expression		
| DotIdentifiers MINUS_EQUALS Expression		
| DotIdentifiers LESS_THAN_LESS_THAN_EQUALS Expression		
| DotIdentifiers GREATER_THAN_GREATER_THAN_EQUALS Expression		
| DotIdentifiers GREATER_THAN_GREATER_THAN_GREATER_THAN_EQUALS Expression		
| DotIdentifiers AMPERSAND_EQUALS Expression		
| DotIdentifiers POWER_EQUALS Expression		
| DotIdentifiers BAR_EQUALS Expression		
| FieldAccess EQUALS Expression	
| FieldAccess STAR_EQUALS Expression		
| FieldAccess SLASH_EQUALS Expression		
| FieldAccess PERCENT_EQUALS Expression		
| FieldAccess PLUS_EQUALS Expression		
| FieldAccess MINUS_EQUALS Expression		
| FieldAccess LESS_THAN_LESS_THAN_EQUALS Expression		
| FieldAccess GREATER_THAN_GREATER_THAN_EQUALS Expression		
| FieldAccess GREATER_THAN_GREATER_THAN_GREATER_THAN_EQUALS Expression		
| FieldAccess AMPERSAND_EQUALS Expression		
| FieldAccess POWER_EQUALS Expression		
| FieldAccess BAR_EQUALS Expression		
| ArrayAccess EQUALS Expression	
| ArrayAccess STAR_EQUALS Expression		
| ArrayAccess SLASH_EQUALS Expression		
| ArrayAccess PERCENT_EQUALS Expression		
| ArrayAccess PLUS_EQUALS Expression		
| ArrayAccess MINUS_EQUALS Expression		
| ArrayAccess LESS_THAN_LESS_THAN_EQUALS Expression		
| ArrayAccess GREATER_THAN_GREATER_THAN_EQUALS Expression		
| ArrayAccess GREATER_THAN_GREATER_THAN_GREATER_THAN_EQUALS Expression		
| ArrayAccess AMPERSAND_EQUALS Expression		
| ArrayAccess POWER_EQUALS Expression		
| ArrayAccess BAR_EQUALS Expression		
;

ConditionalExpression:
ConditionalOrExpression		
| ConditionalOrExpression QUESTION Expression COLON ConditionalExpression		
| ConditionalOrExpression QUESTION Expression COLON LambdaExpression		
;

ConditionalOrExpression:
ConditionalAndExpression		
| ConditionalOrExpression BAR_BAR ConditionalAndExpression		
;

ConditionalAndExpression:
InclusiveOrExpression		
| ConditionalAndExpression AMPERSAND_AMPERSAND InclusiveOrExpression		
;

InclusiveOrExpression:
ExclusiveOrExpression		
| InclusiveOrExpression BAR ExclusiveOrExpression		
;

ExclusiveOrExpression:
AndExpression		
| ExclusiveOrExpression POWER AndExpression		
;

AndExpression:
EqualityExpression		
| AndExpression AMPERSAND EqualityExpression		
;

EqualityExpression:
RelationalExpression		
| EqualityExpression EQUALS_EQUALS RelationalExpression		
| EqualityExpression EXCLAIM_EQUALS RelationalExpression		
;

RelationalExpression:
ShiftExpression		
| RelationalExpression LESS_THAN ShiftExpression		
| RelationalExpression GREATER_THAN ShiftExpression		
| RelationalExpression LESS_THAN_EQUALS ShiftExpression		
| RelationalExpression GREATER_THAN_EQUALS ShiftExpression		
;

ShiftExpression:
AdditiveExpression		
| ShiftExpression LESS_THAN_LESS_THAN AdditiveExpression		
| ShiftExpression GREATER_THAN_GREATER_THAN AdditiveExpression		
| ShiftExpression GREATER_THAN_GREATER_THAN_GREATER_THAN AdditiveExpression		
;

AdditiveExpression:
MultiplicativeExpression		
| AdditiveExpression PLUS MultiplicativeExpression		
| AdditiveExpression MINUS MultiplicativeExpression		
;

MultiplicativeExpression:
UnaryExpression		
| MultiplicativeExpression STAR UnaryExpression		
| MultiplicativeExpression SLASH UnaryExpression		
| MultiplicativeExpression PERCENT UnaryExpression		
;

UnaryExpression:
PreIncrementExpression		    {if(!first_parse){strcpy($$.type,$1.type);}}
| PreDecrementExpression		{if(!first_parse){strcpy($$.type,$1.type);}}
| PLUS UnaryExpression		    {if(!first_parse){strcpy($$.type,$2.type);}}
| MINUS UnaryExpression		    {if(!first_parse){strcpy($$.type,$2.type);}}
| UnaryExpressionNotPlusMinus	{if(!first_parse){strcpy($$.type,$1.type);}}	
;

PreIncrementExpression:
PLUS_PLUS UnaryExpression		{if(!first_parse){strcpy($$.type,$2.type);}}
;

PreDecrementExpression:
MINUS_MINUS UnaryExpression		{if(!first_parse){strcpy($$.type,$2.type);}}
;

UnaryExpressionNotPlusMinus:
PostfixExpression	{if(!first_parse){strcpy($$.type,$1.type);}}	
| TILDA UnaryExpression		
| EXCLAIM UnaryExpression		
| CastExpression        
;

CastExpression:
LEFT_PARANTHESIS PrimitiveType RIGHT_PARANTHESIS UnaryExpression        
| LEFT_PARANTHESIS PrimitiveType Dims RIGHT_PARANTHESIS UnaryExpression     
| LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS UnaryExpressionNotPlusMinus     
| LEFT_PARANTHESIS DotIdentifiers Dims RIGHT_PARANTHESIS UnaryExpressionNotPlusMinus        
;

PostfixExpression:
Primary		                    {if(!first_parse){strcpy($$.type,$1.type);}}
| DotIdentifiers		        {if(!first_parse){strcpy($$.type,$1.type);}}
| PostIncrementExpression		{if(!first_parse){strcpy($$.type,$1.type);}}
| PostDecrementExpression		{if(!first_parse){strcpy($$.type,$1.type);}}
;

PostIncrementExpression:
PostfixExpression PLUS_PLUS		{if(!first_parse){strcpy($$.type,$1.type);}}
;

PostDecrementExpression:
PostfixExpression MINUS_MINUS	{if(!first_parse){strcpy($$.type,$1.type);}}	
;


%%

int main(int argc, char** argv){
    string input, output;
    if(argc<2){
        cout<<"No Actions Provided"<<endl;
        exit(1);
    }
    for(int i=1;i<argc;i++){
        string k = argv[i];
        if(k.size()<6){
            cout<<k<<" is not a valid option."<<endl;
            exit(1);
        }
        if(k=="--help"){
            cout<<"Available Options:"<<endl<<endl;
            cout<<"--help     :  Opens this menu"<<endl;
            cout<<"--input    :  To enter input file destination from the build folder"<<endl;
            cout<<"--output   :  To enter output file destination from the build folder"<<endl;
            cout<<"--verbose  :  To list all the shift/reduce/lexer actions of the parsed program"<<endl;
            exit(1);
        }
        else if(k.size()<8){
            cout<<k<<" is not a valid option."<<endl;
            exit(1);
        }
        else if(k.substr(0,8)=="--input=") input = k.substr(8,k.size()-8);
        else if(k.size()<9){
            cout<<k<<" is not a valid option."<<endl;
            exit(1);
        }
        else if(k.substr(0,9)=="--output=") output = k.substr(9,k.size()-9);
        else if(k=="--verbose") yydebug=1;
        else{
            cout<<k<<" is not a valid option."<<endl;
            exit(1);
        }
    }
    if(input.size()==0){
        cout<<"No input file provided"<<endl;
        exit(1);
    }
    if(input.size()<6 || input.substr(input.size()-5,5)!=".java"){
        cout<<input<<" is not a valid java file"<<endl;
        exit(1);
    }
    if(output.size()==0) output = input.substr(0,input.size()-5)+".dot";
    node_number=1;
    yyin = fopen(input.c_str(),"r");
    fout.open(output,ios::out);
    st.empty();
    fout<<"digraph G{"<<endl<<"node[ordering=out]"<<endl;

    first_parse = true;
    init_symbol_table();
    yyparse();


    fout<<"}"<<endl;
    exit(0);
}