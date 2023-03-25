%{
#include <bits/stdc++.h>
#include "symbol_table.cpp"
#include "struct.h"
using namespace std;

extern int yylex();
extern int yylineno;
extern FILE* yyin;
extern string out_file_name;

#define YYDEBUG 1

extern bool first_parse;
int line_number;
fstream fout,fin;
stack<int> st;
int node_number=1;
vector<pair<string,string> > v; 
vector<string> function_call;
vector<tuple<string,string,int,int> > arguments;
string curr_class_name;
int inst_num;

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
    struct Item* item;
}

%token <item> AMPERSAND AMPERSAND_AMPERSAND AMPERSAND_EQUALS ARROW_RIGHT ASSERT BAR BAR_BAR BAR_EQUALS BOOLEAN_LITERAL BOOLEAN_TYPE BREAK CATCH CHARACTER_LITERAL CLASS COLON COMMA CONTINUE DOT DOUBLE_COLON ELSE EQUALS EQUALS_EQUALS EXCLAIM EXCLAIM_EQUALS EXTENDS FINAL FINALLY FLOATINGPOINT_LITERAL FLOAT_POINT_TYPE FOR GREATER_THAN GREATER_THAN_EQUALS GREATER_THAN_GREATER_THAN GREATER_THAN_GREATER_THAN_EQUALS GREATER_THAN_GREATER_THAN_GREATER_THAN GREATER_THAN_GREATER_THAN_GREATER_THAN_EQUALS IDENTIFIER IF IMPLEMENTS IMPORT INTEGER_LITERAL INTEGRAL_TYPE INTERFACE LEFT_CURLY_BRACE LEFT_PARANTHESIS LEFT_SQUARE_BRACE LESS_THAN LESS_THAN_EQUALS LESS_THAN_LESS_THAN LESS_THAN_LESS_THAN_EQUALS MINUS MINUS_EQUALS MINUS_MINUS NEW NULL_LITERAL PACKAGE PERCENT PERCENT_EQUALS PERMITS PLUS PLUS_EQUALS PLUS_PLUS POWER POWER_EQUALS PRIVATE PUBLIC QUESTION RETURN RIGHT_CURLY_BRACE RIGHT_PARANTHESIS RIGHT_SQUARE_BRACE SEMI_COLON SLASH SLASH_EQUALS STAR STAR_EQUALS STATIC STRING_TYPE STRING_LITERAL SUPER SYNCHRONIZED TEXTBLOCK THROW THROWS TILDA TRIPLE_DOT TRY VAR VOID WHILE YIELD
%type <item> AdditiveExpression AndExpression ArrayAccess ArrayCreationExpression ArrayType AssertStatement Assignment AssignmentExpression BasicForStatement BasicForStatementNoShortIf Block BlockStatement BlockStatements BreakStatement CastExpression CatchClause Catches ClassBody ClassBodyDeclaration ClassBodyDeclarations ClassDeclaration ClassDeclarationHeader ClassInstanceCreationExpression ClassMemberDeclaration ClassModifier ClassModifiers ClassType CompiledStuff ConditionalAndExpression ConditionalExpression ConditionalOrExpression ConstructorBody ConstructorDeclaration ConstructorDeclarationHeader ContinueStatement Declarator DimExprs Dims DotIdentifiers EmptyStatement EnhancedForStatement EnhancedForStatementNoShortIf EqualityExpression ExclusiveOrExpression Expression ExpressionStatement Expressions FieldDeclaration ForInit ForStatement ForStatementNoShortIf ForUpdate FormalParameter FormalParameterList IfThenElseStatement IfThenElseStatementNoShortIf IfThenStatement ImportDeclaration ImportDeclarations InclusiveOrExpression InterfaceDeclaration LabeledStatement LabeledStatementNoShortIf Literal LocalVariableDeclaration MethodBody MethodDeclaration MethodDeclarationHeader MethodDeclarator MethodInvocation MultiplicativeExpression NumericType PackageDeclaration PostDecrementExpression PostIncrementExpression PostfixExpression PreDecrementExpression PreIncrementExpression Primary PrimaryNoNewArray PrimitiveType ReferenceType RelationalExpression ReturnStatement ShiftExpression SingleStaticImportDeclaration SingleTypeImportDeclaration Statement StatementExpression StatementExpressionList StatementNoShortIf StatementWithoutTrailingSubstatement StaticImportOnDemandDeclaration ThrowStatement TryStatement Type TypeDeclaration TypeDeclarations TypeImportOnDemandDeclaration UnaryExpression UnaryExpressionNotPlusMinus UnqualifiedClassInstanceCreationExpression VariableDeclarator VariableDeclaratorList VariableInitializer WhileStatement WhileStatementNoShortIf YieldStatement IfThenElseStatementStart LeftCurl RightCurl

%start input

%%

input: CompiledStuff

LeftCurl: LEFT_CURLY_BRACE {new_scope();};
RightCurl: RIGHT_CURLY_BRACE    {old_scope();};

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
PrimitiveType   {strcpy($$->type,$1->type);}		
| ReferenceType	{strcpy($$->type,$1->type);}	
;

PrimitiveType:
NumericType	 {strcpy($$->type,$1->type);}	
| BOOLEAN_TYPE	{strcpy($$->type,$1->label);}	
| STRING_TYPE   {strcpy($$->type,$1->label);}    
;

NumericType:
INTEGRAL_TYPE	{strcpy($$->type,$1->label);}	
| FLOAT_POINT_TYPE	{strcpy($$->type,$1->label);}	
;

ReferenceType:
ClassType	{check_gst($1->label); strcpy($$->type,$1->label);}	
| ArrayType		{strcpy($$->type,$1->type);}
;

ClassType:
DotIdentifiers	{strcpy($$->type,$1->label);}	
;

DotIdentifiers:
DotIdentifiers DOT IDENTIFIER	{strcpy($$->label,strcat($1->label,strcat($2->label,$3->label)));}	
| IDENTIFIER		{strcpy($$->label,$1->label);}
;

ArrayType:
PrimitiveType Dims	{string t; for(int i=0;i<$1->dims;i++) t.push_back('*'); strcpy($$->type,strcat($1->type,t.c_str()));}	
;

Dims:
Dims LEFT_SQUARE_BRACE RIGHT_SQUARE_BRACE {$$->dims = $1->dims+1;}		
| LEFT_SQUARE_BRACE RIGHT_SQUARE_BRACE	{$$->dims = 1;}	
;

ClassDeclarationHeader:
CLASS IDENTIFIER    {strcpy($$->type,""); strcpy($$->label,$2->label); line_number = yylineno;  if(!first_parse) go_in_scope($2->label);curr_class_name = $2->label;}
| ClassModifiers CLASS IDENTIFIER   {strcpy($$->type,$1->label); strcpy($$->label,$3->label); line_number = yylineno;  if(!first_parse) go_in_scope($3->label); curr_class_name = $3->label;}

ClassDeclaration:
ClassDeclarationHeader ClassBody	{if(first_parse){string mod = check_class_modifiers($1->type);make_class_entry($1->label,line_number,mod);}}
;

ClassModifiers:
ClassModifiers ClassModifier {strcpy($$->label,strcat($1->label,$2->label));}		
| ClassModifier	{strcpy($$->label,$1->label);}	
;

ClassModifier:
PUBLIC	    {strcpy($$->label,"0");}
| PRIVATE	{strcpy($$->label,"1");}	
| FINAL		{strcpy($$->label,"2");}
| STATIC	{strcpy($$->label,"3");}			
;

ClassBody:
LeftCurl RightCurl		
| LeftCurl ClassBodyDeclarations RightCurl		
;

ClassBodyDeclarations:
ClassBodyDeclarations ClassBodyDeclaration		
| ClassBodyDeclaration		
;

ClassBodyDeclaration:
ClassMemberDeclaration		
| ConstructorDeclaration
| Block {reset();}		
;

ClassMemberDeclaration:
FieldDeclaration		
| MethodDeclaration		
| SEMI_COLON		
;

FieldDeclaration:
Type VariableDeclaratorList SEMI_COLON	{
    for(int i=0;i<v.size();i++){
        string t = expression_type(yylineno,$1->type,v[i].second,"declare");
        if(first_parse)   make_entry(v[i].first,t,yylineno,"0000");
    }
    v.clear();	
}
| ClassModifiers Type VariableDeclaratorList SEMI_COLON {
    for(int i=0;i<v.size();i++){
        string t = expression_type(yylineno,$2->type,v[i].second,"declare");
        if(first_parse) make_entry(v[i].first,t,yylineno,check_method_modifiers($1->label));
    }
    v.clear();
}		
;

VariableDeclaratorList:
VariableDeclaratorList COMMA VariableDeclarator		
| VariableDeclarator		
;

VariableDeclarator:
IDENTIFIER EQUALS VariableInitializer   {if(first_parse)v.push_back(make_pair($1->label,"")); else v.push_back(make_pair($1->label,$3->type));}	
| IDENTIFIER	{v.push_back(make_pair($1->label,""));}	
| IDENTIFIER Dims	{string t; for(int i=0;i<$2->dims;i++) t.push_back('*'); v.push_back(make_pair($1->label,t));}		
| IDENTIFIER Dims EQUALS ArrayCreationExpression {if(first_parse){string t; for(int i=0;i<$2->dims;i++) t.push_back('*'); v.push_back(make_pair($1->label,t));}else{if($2->dims == $4->dims) v.push_back(make_pair($1->label,$4->type)); else{cout<<"Dimensions of array not matched in line number: "<<yylineno<<endl; exit(1);}}}
;

VariableInitializer:
Expression		{if(!first_parse){strcpy($$->type,$1->type);}}

MethodDeclarationHeader:
VOID MethodDeclarator   {if($2->dims){cout<<"Void function cant be of array type in line number "<<yylineno<<endl; exit(1);} strcpy($$->label,$2->label); strcpy($$->type,"void0000"); line_number = yylineno; if(!first_parse)go_in_scope($2->label);}
| Type MethodDeclarator {string t; for(int i=0;i<$2->dims;i++) t.push_back('*'); strcpy($$->label,$2->label); strcpy($$->type,strcat($1->type,(t+"0000").c_str())); line_number = yylineno; if(!first_parse)go_in_scope($2->label);}
| ClassModifiers VOID MethodDeclarator  {if($2->dims){cout<<"Void function cant be of array type in line number "<<yylineno<<endl;exit(1);} string x = check_method_modifiers($1->label); strcpy($$->label,$3->label); strcpy($$->type,("void"+x).c_str()); line_number = yylineno; if(!first_parse)go_in_scope($3->label);}
| ClassModifiers Type MethodDeclarator  {string t; for(int i=0;i<$2->dims;i++) t.push_back('*'); strcpy($$->label,$3->label); string x = check_method_modifiers($1->label); strcpy($$->type,strcat($2->type,(t+x).c_str())); line_number = yylineno; if(!first_parse)go_in_scope($3->label);}

MethodDeclaration:
MethodDeclarationHeader MethodBody	{if(first_parse){string x = $1->type; make_func_entry($1->label,x.substr(0,x.size()-4),arguments,line_number,x.substr(x.size()-4,4)); arguments.clear();}else{print(curr_class_name+"."+$1->label);}}
;

MethodDeclarator:
Declarator  {strcpy($$->label,$1->label); $$->dims = 0;}		
| Declarator Dims	{strcpy($$->label,$1->label); $$->dims = $2->dims;}	
;

FormalParameterList:
FormalParameterList COMMA FormalParameter		
| FormalParameter		
;

FormalParameter:
Type IDENTIFIER     {if(first_parse){arguments.push_back(make_tuple($2->label,$1->type,0,0));}}	
| FINAL Type IDENTIFIER 		{if(first_parse){arguments.push_back(make_tuple($3->label,$2->type,0,1));}}
| Type IDENTIFIER Dims 		{if(first_parse){string t; for(int i=0;i<$3->dims;i++) t.push_back('*'); arguments.push_back(make_tuple($2->label,strcat($1->type,t.c_str()),0,0));}}
| FINAL Type IDENTIFIER Dims		{if(first_parse){string t; for(int i=0;i<$3->dims;i++) t.push_back('*'); arguments.push_back(make_tuple($3->label,strcat($1->type,t.c_str()),0,1));}}
| Type TRIPLE_DOT IDENTIFIER		{if(first_parse){arguments.push_back(make_tuple($3->label,$1->type,1,0));}}
| FINAL Type TRIPLE_DOT IDENTIFIER		{if(first_parse){arguments.push_back(make_tuple($4->label,$2->type,1,1));}}
;

MethodBody:
Block
| SEMI_COLON
;

ConstructorDeclarationHeader:
Declarator  {strcpy($$->type,"0000"); strcpy($$->label,$1->label); line_number = yylineno;  if(!first_parse) go_in_scope($1->label);}
| ClassModifiers Declarator {string x = check_method_modifiers($1->label); strcpy($$->type,x.c_str()); strcpy($$->label,$2->label);  line_number = yylineno; if(!first_parse) go_in_scope($2->label);}

ConstructorDeclaration:		
ConstructorDeclarationHeader ConstructorBody {if(first_parse){check_constructor($2->label); make_func_entry($1->label,$1->label,arguments,line_number,$1->type); arguments.clear();}}
;

Declarator:
IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		
| IDENTIFIER LEFT_PARANTHESIS FormalParameterList RIGHT_PARANTHESIS 		
;

ConstructorBody:
LeftCurl RightCurl 	
| LeftCurl BlockStatements RightCurl	
;

Expressions:
Expressions COMMA Expression	{if(!first_parse){function_call.push_back($3->type);}}	
| Expression	{if(!first_parse){function_call.push_back($1->type);}}	
;


InterfaceDeclaration:
INTERFACE IDENTIFIER ClassBody	{if(first_parse) make_class_entry($2->label,yylineno,"00");}
| ClassModifiers INTERFACE IDENTIFIER ClassBody {if(first_parse){string mod = check_class_modifiers($1->label); make_class_entry($3->label,yylineno,mod);}}
;

Block:
LeftCurl RightCurl		
| LeftCurl BlockStatements RightCurl
;

BlockStatements:
BlockStatements BlockStatement
| BlockStatement
;

BlockStatement:
Type VariableDeclaratorList SEMI_COLON	{
    if(!first_parse){
        for(int i=0;i<v.size();i++){
            string t = expression_type(yylineno,$1->type,v[i].second,"declare");
            make_entry(v[i].first,t,yylineno,"0000");
        }
    }	
    v.clear();
}
| FINAL Type VariableDeclaratorList SEMI_COLON  {
    if(!first_parse){
        for(int i=0;i<v.size();i++){
            string t = expression_type(yylineno,$2->type,v[i].second,"declare");
            make_entry(v[i].first,t,yylineno,"0010");
        }
    }	
    v.clear();
}
| Statement		{if(!first_parse){strcpy($$->type,$1->type);}}
;

Statement:
StatementWithoutTrailingSubstatement		{if(!first_parse){strcpy($$->type,$1->type);}}
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
IF LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS Statement	{if(!first_parse){reset();}}	
;

IfThenElseStatement:
IfThenElseStatementStart ELSE Statement	    {if(!first_parse){reset();}}
;

IfThenElseStatementStart:
IF LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS StatementNoShortIf {if(!first_parse){reset();}}
;

IfThenElseStatementNoShortIf:
IfThenElseStatementStart ELSE StatementNoShortIf	{if(!first_parse){reset();}}
;


AssertStatement:
ASSERT Expression SEMI_COLON		
| ASSERT Expression COLON Expression SEMI_COLON		
;

WhileStatement:
WHILE LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS Statement	{if(!first_parse){string t = $3->type; if(t!="boolean"){cout<<"Expression must be of type boolean in line number "<<yylineno<<endl;exit(1);} reset();}}	
;

WhileStatementNoShortIf:
WHILE LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS StatementNoShortIf		{if(!first_parse){string t = $3->type; if(t!="boolean"){cout<<"Expression must be of type boolean in line number "<<yylineno<<endl;exit(1);} reset();}}
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
FOR LEFT_PARANTHESIS SEMI_COLON SEMI_COLON RIGHT_PARANTHESIS Statement  {if(!first_parse){reset();}} 		
| FOR LEFT_PARANTHESIS SEMI_COLON SEMI_COLON ForUpdate RIGHT_PARANTHESIS Statement  {if(!first_parse){reset();}} 		
| FOR LEFT_PARANTHESIS SEMI_COLON Expression SEMI_COLON RIGHT_PARANTHESIS Statement 		{if(!first_parse){string t = $4->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();}}
| FOR LEFT_PARANTHESIS SEMI_COLON Expression SEMI_COLON ForUpdate RIGHT_PARANTHESIS Statement 		{if(!first_parse){string t = $4->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();}}
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON SEMI_COLON RIGHT_PARANTHESIS Statement 		{if(!first_parse){reset();}}
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON SEMI_COLON ForUpdate RIGHT_PARANTHESIS Statement 		{if(!first_parse){reset();}}
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON Expression SEMI_COLON RIGHT_PARANTHESIS Statement 		{if(!first_parse){string t = $5->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();}}
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON Expression SEMI_COLON ForUpdate RIGHT_PARANTHESIS Statement		{if(!first_parse){string t = $5->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();}}
;

BasicForStatementNoShortIf:
FOR LEFT_PARANTHESIS SEMI_COLON SEMI_COLON RIGHT_PARANTHESIS StatementNoShortIf  {if(!first_parse){reset();}} 		
| FOR LEFT_PARANTHESIS SEMI_COLON SEMI_COLON ForUpdate RIGHT_PARANTHESIS StatementNoShortIf  {if(!first_parse){reset();}} 		
| FOR LEFT_PARANTHESIS SEMI_COLON Expression SEMI_COLON RIGHT_PARANTHESIS StatementNoShortIf 		{if(!first_parse){string t = $4->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();}}
| FOR LEFT_PARANTHESIS SEMI_COLON Expression SEMI_COLON ForUpdate RIGHT_PARANTHESIS StatementNoShortIf 		{if(!first_parse){string t = $4->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();}}
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON SEMI_COLON RIGHT_PARANTHESIS StatementNoShortIf 		{if(!first_parse){reset();}}
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON SEMI_COLON ForUpdate RIGHT_PARANTHESIS StatementNoShortIf 		{if(!first_parse){reset();}}
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON Expression SEMI_COLON RIGHT_PARANTHESIS StatementNoShortIf 		{if(!first_parse){string t = $5->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();}}
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON Expression SEMI_COLON ForUpdate RIGHT_PARANTHESIS StatementNoShortIf		{if(!first_parse){string t = $5->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();}}
;

ForInit:
StatementExpressionList		
| LocalVariableDeclaration
;

LocalVariableDeclaration:
Type VariableDeclaratorList{
    if(!first_parse){
        for(int i=0;i<v.size();i++){
            string t = expression_type(yylineno,$1->type,v[i].second,"declare");
            make_dirty_entry(v[i].first,t,yylineno,"0000");
        }
    }	
    v.clear();
}
| FINAL Type VariableDeclaratorList{
    if(!first_parse){
        for(int i=0;i<v.size();i++){
            string t = expression_type(yylineno,$1->type,v[i].second,"declare");
            make_dirty_entry(v[i].first,t,yylineno,"0010");
        }
    }
    v.clear();
}

ForUpdate:
StatementExpressionList		
;

StatementExpressionList:
StatementExpressionList COMMA StatementExpression		
| StatementExpression		
;

EnhancedForStatement:
FOR LEFT_PARANTHESIS LocalVariableDeclaration COLON Expression RIGHT_PARANTHESIS Statement	{if(!first_parse){reset();}}	
;

EnhancedForStatementNoShortIf:
FOR LEFT_PARANTHESIS LocalVariableDeclaration COLON Expression RIGHT_PARANTHESIS StatementNoShortIf		{if(!first_parse){reset();}}
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
PrimaryNoNewArray	{if(!first_parse){$$->lit = $1->lit; strcpy($$->type,$1->type);}}	
| ArrayCreationExpression	{if(!first_parse){$$->lit = false; strcpy($$->type,$1->type);}}	
;

PrimaryNoNewArray:
Literal			{if(!first_parse){$$->lit = true;strcpy($$->type,$1->type);}}	
| LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS{if(!first_parse){$$->lit = false; strcpy($$->type,$2->type);}}
| ClassInstanceCreationExpression	{if(!first_parse){$$->lit = false; strcpy($$->type,$1->type);}}	
| ArrayAccess		{if(!first_parse){$$->lit = false; strcpy($$->type,$1->type);}}
| MethodInvocation		{if(!first_parse){$$->lit = false; strcpy($$->type,$1->type);}}
;

Literal:
INTEGER_LITERAL	    {if(!first_parse){strcpy($$->type,"byte");}}	
| FLOATINGPOINT_LITERAL		{if(!first_parse){strcpy($$->type,"float");}}
| BOOLEAN_LITERAL	{if(!first_parse){strcpy($$->type,"boolean");}}	
| CHARACTER_LITERAL		{if(!first_parse){strcpy($$->type,"char");}}
| STRING_LITERAL		{if(!first_parse){strcpy($$->type,"string");}}	
| NULL_LITERAL		{if(!first_parse){strcpy($$->type,"null");}}
;

ClassInstanceCreationExpression:
UnqualifiedClassInstanceCreationExpression	{if(!first_parse){strcpy($$->type,$1->type);}}
;

UnqualifiedClassInstanceCreationExpression:
NEW DotIdentifiers LEFT_PARANTHESIS RIGHT_PARANTHESIS 	{if(!first_parse){string t = find_in_scope($2->label); strcpy($$->type,get_method(t,t,function_call).c_str());}}	
| NEW DotIdentifiers LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 	{if(!first_parse){string t = find_in_scope($2->label); strcpy($$->type,get_method(t,t,function_call).c_str());}}
;

ArrayAccess:
DotIdentifiers LEFT_SQUARE_BRACE Expression RIGHT_SQUARE_BRACE  	{if(!first_parse){string t = find_in_scope($1->label); if(t[t.size()-1]!='*'){cout<<"Accessing Higher Dimensions of "<<$1->label<<" in line number "<<yylineno<<endl; exit(1);} strcpy($$->type,(t.substr(0,t.size()-1)).c_str());}}	
| PrimaryNoNewArray LEFT_SQUARE_BRACE Expression RIGHT_SQUARE_BRACE		{if(!first_parse){string t = $1->type; if(t[t.size()-1]!='*'){cout<<"Accessing Higher Dimensions of "<<$1->type<<" in line number "<<yylineno<<endl; exit(1);} strcpy($$->type,(t.substr(0,t.size()-1)).c_str());}}
;

MethodInvocation:
IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		{if(!first_parse){strcpy($$->type,get_method($1->label,"",function_call).c_str());}}
| IDENTIFIER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS     {if(!first_parse){strcpy($$->type,get_method($1->label,"",function_call).c_str());function_call.clear();}}		
| DotIdentifiers DOT IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		{if(!first_parse){strcpy($$->type,get_method($3->label,find_in_scope($1->label),function_call).c_str());}}
| DotIdentifiers DOT IDENTIFIER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 		{if(!first_parse){strcpy($$->type,get_method($3->label,find_in_scope($1->label),function_call).c_str()); function_call.clear();}}	
;

ArrayCreationExpression:
NEW PrimitiveType DimExprs 	{if(!first_parse){string t; for(int i=0;i<$3->dims;i++) t.push_back('*'); strcpy($$->type,strcat($2->type,t.c_str()));$$->dims = $3->dims;}}	
| NEW PrimitiveType DimExprs Dims 	{if(!first_parse){string t; for(int i=0;i<$3->dims;i++) t.push_back('*'); for(int i=0;i<$4->dims;i++) t.push_back('*'); strcpy($$->type,strcat($2->type,t.c_str()));$$->dims = $3->dims + $4->dims;}}
| NEW ClassType DimExprs 	{if(!first_parse){string t; for(int i=0;i<$3->dims;i++) t.push_back('*'); strcpy($$->type,strcat($2->type,t.c_str()));$$->dims = $3->dims;}}	
| NEW ClassType DimExprs Dims 		{if(!first_parse){string t; for(int i=0;i<$3->dims;i++) t.push_back('*'); for(int i=0;i<$4->dims;i++) t.push_back('*'); strcpy($$->type,strcat($2->type,t.c_str()));$$->dims = $3->dims + $4->dims;}}
;

DimExprs:
DimExprs LEFT_SQUARE_BRACE Expression RIGHT_SQUARE_BRACE	{if(!first_parse){$$->dims = $1->dims+1; string t = $3->type; if(t!="int" && t!="byte" && t!="short" && t!="long") {cout<<"Array size must be of integer type. Line number: "<<yylineno<<endl; exit(1);}}}	
| LEFT_SQUARE_BRACE Expression RIGHT_SQUARE_BRACE		{if(!first_parse){$$->dims=1; string t = $2->type; if(t!="int" && t!="byte" && t!="short" && t!="long") {cout<<"Array size must be of integer type. Line number: "<<yylineno<<endl; exit(1);}}}
;

Expression:
AssignmentExpression	{if(!first_parse){strcpy($$->type,$1->type);}}	
;

AssignmentExpression:
ConditionalExpression		{if(!first_parse){strcpy($$->type,$1->type);}}
| Assignment		{if(!first_parse){strcpy($$->type,$1->type);}}
;

Assignment:
DotIdentifiers EQUALS Expression	{if(!first_parse){string t = find_in_scope($1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str());}}
| DotIdentifiers STAR_EQUALS Expression	{if(!first_parse){string t = find_in_scope($1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str());}}
| DotIdentifiers SLASH_EQUALS Expression	{if(!first_parse){string t = find_in_scope($1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str());}}	
| DotIdentifiers PERCENT_EQUALS Expression	{if(!first_parse){string t = find_in_scope($1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str());}}	
| DotIdentifiers PLUS_EQUALS Expression		{if(!first_parse){string t = find_in_scope($1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str());}}
| DotIdentifiers MINUS_EQUALS Expression	{if(!first_parse){string t = find_in_scope($1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str());}}
| DotIdentifiers LESS_THAN_LESS_THAN_EQUALS Expression		{if(!first_parse){string t = find_in_scope($1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str());}}
| DotIdentifiers GREATER_THAN_GREATER_THAN_EQUALS Expression		{if(!first_parse){string t = find_in_scope($1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str());}}
| DotIdentifiers GREATER_THAN_GREATER_THAN_GREATER_THAN_EQUALS Expression		{if(!first_parse){string t = find_in_scope($1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str());}}
| DotIdentifiers AMPERSAND_EQUALS Expression		{if(!first_parse){string t = find_in_scope($1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str());}}
| DotIdentifiers POWER_EQUALS Expression		{if(!first_parse){string t = find_in_scope($1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str());}}
| DotIdentifiers BAR_EQUALS Expression{if(!first_parse){string t = find_in_scope($1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str());}}
| ArrayAccess EQUALS Expression	{if(!first_parse){string t = find_in_scope($1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str());}}
| ArrayAccess STAR_EQUALS Expression		{if(!first_parse){string t = find_in_scope($1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str());}}
| ArrayAccess SLASH_EQUALS Expression		{if(!first_parse){string t = find_in_scope($1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str());}}
| ArrayAccess PERCENT_EQUALS Expression		{if(!first_parse){string t = find_in_scope($1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str());}}
| ArrayAccess PLUS_EQUALS Expression		{if(!first_parse){string t = find_in_scope($1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str());}}
| ArrayAccess MINUS_EQUALS Expression		{if(!first_parse){string t = find_in_scope($1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str());}}
| ArrayAccess LESS_THAN_LESS_THAN_EQUALS Expression		{if(!first_parse){string t = find_in_scope($1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str());}}
| ArrayAccess GREATER_THAN_GREATER_THAN_EQUALS Expression	{if(!first_parse){string t = find_in_scope($1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str());}}
| ArrayAccess GREATER_THAN_GREATER_THAN_GREATER_THAN_EQUALS Expression		{if(!first_parse){string t = find_in_scope($1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str());}}
| ArrayAccess AMPERSAND_EQUALS Expression		{if(!first_parse){string t = find_in_scope($1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str());}}
| ArrayAccess POWER_EQUALS Expression		{if(!first_parse){string t = find_in_scope($1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str());}}
| ArrayAccess BAR_EQUALS Expression		{if(!first_parse){string t = find_in_scope($1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str());}}
;

ConditionalExpression:
ConditionalOrExpression		{if(!first_parse){strcpy($$->type,$1->type);}}
| ConditionalOrExpression QUESTION Expression COLON ConditionalExpression	{if(!first_parse){string s = $1->type; if(s!="boolean"){cout<<"First expression has to be boolean"<<endl;exit(1);};}}	
;

ConditionalOrExpression:
ConditionalAndExpression	{if(!first_parse){strcpy($$->type,$1->type);}}	
| ConditionalOrExpression BAR_BAR ConditionalAndExpression		{if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str());}}
;

ConditionalAndExpression:
InclusiveOrExpression		{if(!first_parse){strcpy($$->type,$1->type);}}
| ConditionalAndExpression AMPERSAND_AMPERSAND InclusiveOrExpression		{if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str());}}
;

InclusiveOrExpression:
ExclusiveOrExpression		{if(!first_parse){strcpy($$->type,$1->type);}}
| InclusiveOrExpression BAR ExclusiveOrExpression		{if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str());}}
;

ExclusiveOrExpression:
AndExpression		{if(!first_parse){strcpy($$->type,$1->type);}}
| ExclusiveOrExpression POWER AndExpression		{if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str());}}
;

AndExpression:
EqualityExpression		{if(!first_parse){strcpy($$->type,$1->type);}}
| AndExpression AMPERSAND EqualityExpression	{if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str());}}	
;

EqualityExpression:
RelationalExpression	{if(!first_parse){strcpy($$->type,$1->type);}}
| EqualityExpression EQUALS_EQUALS RelationalExpression		{if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str());}}
| EqualityExpression EXCLAIM_EQUALS RelationalExpression	{if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str());}}	
;

RelationalExpression:
ShiftExpression		{if(!first_parse){strcpy($$->type,$1->type);}}
| RelationalExpression LESS_THAN ShiftExpression	{if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str());}}	
| RelationalExpression GREATER_THAN ShiftExpression		{if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str());}}
| RelationalExpression LESS_THAN_EQUALS ShiftExpression		{if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str());}}
| RelationalExpression GREATER_THAN_EQUALS ShiftExpression  {if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str());}}
;

ShiftExpression:
AdditiveExpression		{if(!first_parse){strcpy($$->type,$1->type);}}
| ShiftExpression LESS_THAN_LESS_THAN AdditiveExpression		{if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str());}}
| ShiftExpression GREATER_THAN_GREATER_THAN AdditiveExpression		{if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str());}}
| ShiftExpression GREATER_THAN_GREATER_THAN_GREATER_THAN AdditiveExpression		{if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str());}}
;

AdditiveExpression:
MultiplicativeExpression    {if(!first_parse){strcpy($$->type,$1->type);}}	
| AdditiveExpression PLUS MultiplicativeExpression	    {if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str());}}	
| AdditiveExpression MINUS MultiplicativeExpression	    {if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str());}}	
;

MultiplicativeExpression:
UnaryExpression		{if(!first_parse){strcpy($$->type,$1->type);}}
| MultiplicativeExpression STAR UnaryExpression	    {if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str());}}	
| MultiplicativeExpression SLASH UnaryExpression    {if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str());}}
| MultiplicativeExpression PERCENT UnaryExpression	{if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str());}}	
;

UnaryExpression:
PreIncrementExpression		    {if(!first_parse){$$->lit = $1->lit; strcpy($$->type,$1->type);}}
| PreDecrementExpression		{if(!first_parse){$$->lit = $1->lit; strcpy($$->type,$1->type);}}
| PLUS UnaryExpression		    {if(!first_parse){string t = expression_type(yylineno,$2->type,"",$1->label); $$->lit = $2->lit; strcpy($$->type,t.c_str());}}
| MINUS UnaryExpression		    {if(!first_parse){string t = expression_type(yylineno,$2->type,"",$1->label); $$->lit = $2->lit; strcpy($$->type,t.c_str());}}
| UnaryExpressionNotPlusMinus	{if(!first_parse){$$->lit = $1->lit; strcpy($$->type,$1->type);}}	
;

PreIncrementExpression:
PLUS_PLUS UnaryExpression		{
    if(!first_parse){
    string t = expression_type(yylineno,$2->type,"",$1->label);
    if($2->lit == true){
        cout<<"Cannot apply increment/decrement operation on a literal"<<endl;
        exit(1);
    }
    $$->lit = false;
    strcpy($$->type,t.c_str());
}    
}
;

PreDecrementExpression:
MINUS_MINUS UnaryExpression		{
if(!first_parse){
    string t = expression_type(yylineno,$2->type,"",$1->label);
    if($2->lit == true){
        cout<<"Cannot apply increment/decrement operation on a literal"<<endl;
        exit(1);
    }
    $$->lit = false;
    strcpy($$->type,t.c_str());
}
}
;

UnaryExpressionNotPlusMinus:
PostfixExpression	{if(!first_parse){$$->lit = $1->lit; strcpy($$->type,$1->type); strcpy($$->type,$1->type);}}
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
Primary		                    {if(!first_parse){$$->lit = $1->lit; strcpy($$->type,$1->type);}}
| DotIdentifiers		        {if(!first_parse){$$->lit = false; strcpy($$->type,find_in_scope($1->label).c_str());}}
| PostIncrementExpression		{if(!first_parse){$$->lit = $1->lit; strcpy($$->type,$1->type);}}
| PostDecrementExpression		{if(!first_parse){$$->lit = $1->lit; strcpy($$->type,$1->type);}}
;

PostIncrementExpression:
PostfixExpression PLUS_PLUS		{
    if(!first_parse){
    string t = expression_type(yylineno,$1->type,"",$2->label);
    if($1->lit == true){
        cout<<"Cannot apply increment operation on a literal"<<endl;
        exit(1);
    }
    $$->lit = false;
    strcpy($$->type,t.c_str());
}
}
;

PostDecrementExpression:
PostfixExpression MINUS_MINUS	{
    if(!first_parse){
    string t = expression_type(yylineno,$1->type,"",$2->label);
    if($1->lit == true){
        cout<<"Cannot apply increment operation on a literal"<<endl;
        exit(1);
    }
    $$->lit = false;
    strcpy($$->type,t.c_str());
    }
}	
;


%%

int main(int argc, char** argv){
    string input;
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
    string remove = "rm -rf "+input.substr(0,input.size()-5)+" || true";
    string make = "mkdir "+input.substr(0,input.size()-5);
    out_file_name = input.substr(0,input.size()-5)+"/";
    const char* rm = remove.c_str();
    const char* mkdir = make.c_str();
    system(rm);
    system(mkdir);

    yyin = fopen(input.c_str(),"r");
    first_parse = true;
    init_symbol_table();
    yyparse();
    first_parse = false;
    yyin = fopen(input.c_str(),"r");
    yylineno = 1;
    second_init();
    inst_num = 0;
    yyparse();
    final_print();
    exit(0);
}