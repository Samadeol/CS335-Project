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
vector<pair<string,string> > declarations;
vector<pair<string,string> > function_call;
vector<tuple<string,string,int,int> > arguments;
string curr_class_name;
extern sym_table* print_table;
extern int inst_num;
int k=0;

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
        if(first_parse)   make_entry(v[i].first,t,yylineno,"0000",1);
    }
    v.clear();
    declarations.clear();	
}
| ClassModifiers Type VariableDeclaratorList SEMI_COLON {
    for(int i=0;i<v.size();i++){
        string t = expression_type(yylineno,$2->type,v[i].second,"declare");
        if(first_parse) make_entry(v[i].first,t,yylineno,check_method_modifiers($1->label),1);
    }
    v.clear();
    declarations.clear();
}		
;

VariableDeclaratorList:
VariableDeclaratorList COMMA VariableDeclarator	    {if(!first_parse){$$->i_number = $1->i_number; $$->dimension = $1->dimension;}}	
| VariableDeclarator	{if(!first_parse){$$->i_number = $1->i_number;$$->dimension = $1->dimension;}}	
;

VariableDeclarator:
IDENTIFIER EQUALS VariableInitializer   {if(first_parse)v.push_back(make_pair($1->label,"")); else{v.push_back(make_pair($1->label,$3->type)); 
    $$->i_number = $3->i_number;
    string p = $3->type;
    if(p=="boolean"){
        emitt("","true","",get_base_offset($1->label),-1);
        backpatch($3->true_list,inst_num-1);
        emitt("","false","",get_base_offset($1->label),-1);
        backpatch($3->false_list,inst_num-1);
    }else{
        declarations.push_back(make_pair($1->label,$3->temp_var));
    };
}}	
| IDENTIFIER	{v.push_back(make_pair($1->label,""));}	
| IDENTIFIER Dims	{string t; for(int i=0;i<$2->dims;i++) t.push_back('*'); v.push_back(make_pair($1->label,t));}		
| IDENTIFIER Dims EQUALS ArrayCreationExpression {if(first_parse){string t; for(int i=0;i<$2->dims;i++) t.push_back('*'); v.push_back(make_pair($1->label,t));}else{if($2->dims == $4->dims) v.push_back(make_pair($1->label,$4->type)); else{cout<<"Dimensions of array not matched in line number: "<<yylineno<<endl; exit(1);}declarations.push_back(make_pair($1->label,$4->temp_var));$$->dimension = $4->dimension; }}
;

VariableInitializer:
Expression		{if(!first_parse){strcpy($$->type,$1->type);$$->i_number = $1->i_number;}}

MethodDeclarationHeader:
VOID MethodDeclarator   {if($2->dims){cout<<"Void function cant be of array type in line number "<<yylineno<<endl; exit(1);} strcpy($$->label,$2->label); strcpy($$->type,"void0000"); line_number = yylineno; if(!first_parse){go_in_scope($2->label);string l = $2->label; l=curr_class_name+"."+l; emitt("begin",l,"","",-1);$$->i_number = inst_num-1; print_table = new sym_table;}}
| Type MethodDeclarator {string t; for(int i=0;i<$2->dims;i++) t.push_back('*'); strcpy($$->label,$2->label); strcpy($$->type,strcat($1->type,(t+"0000").c_str())); line_number = yylineno; if(!first_parse){go_in_scope($2->label);string l = $2->label; l=curr_class_name+"."+l; emitt("begin",l,"","",-1); $$->i_number = inst_num-1; print_table = new sym_table;}}
| ClassModifiers VOID MethodDeclarator  {{if($3->dims){cout<<"Void function cant be of array type in line number "<<yylineno<<endl;exit(1);} string x = check_method_modifiers($1->label); strcpy($$->label,$3->label); strcpy($$->type,("void"+x).c_str()); line_number = yylineno;} if(!first_parse){go_in_scope($3->label);string l = $3->label; l=curr_class_name+"."+l; emitt("begin",l,"","",-1);$$->i_number = inst_num-1; print_table = new sym_table;}}
| ClassModifiers Type MethodDeclarator  {{string t; for(int i=0;i<$2->dims;i++) t.push_back('*'); string x = check_method_modifiers($1->label); strcpy($$->label,$3->label); strcpy($$->type,strcat($2->type,(t+x).c_str())); line_number = yylineno;} if(!first_parse){go_in_scope($3->label);string l = $3->label; l=curr_class_name+"."+l; emitt("begin",l,"","",-1);$$->i_number = inst_num-1; print_table = new sym_table;}}

MethodDeclaration:
MethodDeclarationHeader MethodBody	{if(first_parse){string x = $1->type; make_func_entry($1->label,x.substr(0,x.size()-4),arguments,line_number,x.substr(x.size()-4,4));}else{print(curr_class_name+"."+$1->label);emitt("end","","","",-1); $$->i_number = $1->i_number; backpatch($2->next_list,inst_num-1);}arguments.clear();}
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
Type IDENTIFIER     {arguments.push_back(make_tuple($2->label,$1->type,0,0));}	
| FINAL Type IDENTIFIER 		{arguments.push_back(make_tuple($3->label,$2->type,0,1));}
| Type IDENTIFIER Dims 		{string t; for(int i=0;i<$3->dims;i++) t.push_back('*'); arguments.push_back(make_tuple($2->label,strcat($1->type,t.c_str()),0,0));}
| FINAL Type IDENTIFIER Dims		{string t; for(int i=0;i<$3->dims;i++) t.push_back('*'); arguments.push_back(make_tuple($3->label,strcat($1->type,t.c_str()),0,1));}
| Type TRIPLE_DOT IDENTIFIER		{arguments.push_back(make_tuple($3->label,$1->type,1,0));}
| FINAL Type TRIPLE_DOT IDENTIFIER		{arguments.push_back(make_tuple($4->label,$2->type,1,1));}
;

MethodBody:
Block   {if(!first_parse){$$->i_number = $1->i_number,$$->next_list = $1->next_list;}}
| SEMI_COLON
;

ConstructorDeclarationHeader:
Declarator  {strcpy($$->label,$1->label); strcpy($$->type,"0000"); line_number = yylineno; if(!first_parse){go_in_scope($1->label);string l = $1->label; l=curr_class_name+"."+l; emitt("begin",l,"","",-1); $$->i_number = inst_num-1; }}
| ClassModifiers Declarator {string x = check_method_modifiers($1->label); strcpy($$->type,x.c_str()); strcpy($$->label,$2->label); strcpy($$->type,$2->label); line_number = yylineno; if(!first_parse){go_in_scope($2->label);string l = $2->label; l=curr_class_name+"."+l; emitt("begin",l,"","",-1); $$->i_number = inst_num-1;}}

ConstructorDeclaration:		
ConstructorDeclarationHeader ConstructorBody {if(first_parse){check_constructor($2->label); make_func_entry($1->label,$1->label,arguments,line_number,$1->type);}arguments.clear(); if(!first_parse){print(curr_class_name+"."+curr_class_name); emitt("end","","","",-1); $$->i_number = $1->i_number; backpatch($2->next_list,inst_num-1);}}
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
Expressions COMMA Expression	{if(!first_parse){function_call.push_back(make_pair($3->type,$3->temp_var));}}	
| Expression	{if(!first_parse){function_call.push_back(make_pair($1->type,$1->temp_var));}}	
;


InterfaceDeclaration:
INTERFACE IDENTIFIER ClassBody	{if(first_parse) make_class_entry($2->label,yylineno,"00");}
| ClassModifiers INTERFACE IDENTIFIER ClassBody {if(first_parse){string mod = check_class_modifiers($1->label); make_class_entry($3->label,yylineno,mod);}}
;

Block:
LeftCurl RightCurl		{if(!first_parse){$$->i_number = -1;}}
| LeftCurl BlockStatements RightCurl    {if(!first_parse){$$->i_number = $2->i_number, $$->true_list = $2->true_list; $$->next_list = $2->next_list;}}
;

BlockStatements:
BlockStatements BlockStatement  {if(!first_parse){backpatch($1->next_list,$2->i_number); $$->next_list = $2->next_list; $$->i_number=$1->i_number; $$->true_list = merge($1->true_list, $2->true_list);}}
| BlockStatement {if(!first_parse){$$->next_list = $1->next_list;$$->i_number=$1->i_number; $$->true_list = $1->true_list;}}
;

BlockStatement:
Type VariableDeclaratorList SEMI_COLON	{
    if(!first_parse){
        for(int i=0;i<v.size();i++){
            string t = expression_type(yylineno,$1->type,v[i].second,"declare");
            make_entry(v[i].first,t,yylineno,"0000",-1);
        }
        for(int i=0;i<declarations.size();i++){
            char temp[1000];
            strcpy(temp,(declarations[i].first).c_str());
            string t = find_in_scope(declarations[i].first,temp);
            emitt("",declarations[i].second,"",temp,-1);
        }
        if($2->dimension.size()) set_dimensions(v[0].first,$2->dimension);
        $$->i_number = $2->i_number;
    }	
    v.clear();
    declarations.clear();
}
| FINAL Type VariableDeclaratorList SEMI_COLON  {
    if(!first_parse){
        for(int i=0;i<v.size();i++){
            string t = expression_type(yylineno,$2->type,v[i].second,"declare");
            make_entry(declarations[i].first,t,yylineno,"0010",-1);
        }
        for(int i=0;i<declarations.size();i++){
            char temp[1000];
            strcpy(temp,(declarations[i].first).c_str());
            string t = find_in_scope(declarations[i].first,temp);
            emitt("",declarations[i].second,"",temp,-1);
        }
        if($3->dimension.size()) set_dimensions(v[0].first,$3->dimension);
        $$->i_number = $3->i_number;
    }	
    v.clear();
    declarations.clear();
}
| Statement		{if(!first_parse){strcpy($$->type,$1->type); $$->next_list = $1->next_list;$$->i_number=$1->i_number; $$->true_list = $1->true_list;}}
;

Statement:
StatementWithoutTrailingSubstatement		{if(!first_parse){strcpy($$->type,$1->type); $$->next_list=$1->next_list;$$->i_number=$1->i_number; $$->true_list = $1->true_list;}}
| LabeledStatement		                    {if(!first_parse){$$->next_list=$1->next_list; $$->i_number=$1->i_number;}}
| IfThenStatement		                    {if(!first_parse){$$->next_list=$1->next_list; $$->i_number=$1->i_number;}}
| IfThenElseStatement		                {if(!first_parse){$$->next_list=$1->next_list; $$->i_number=$1->i_number;}}
| WhileStatement		                    {if(!first_parse){$$->next_list=$1->next_list; $$->i_number=$1->i_number;}}
| ForStatement		                        {if(!first_parse){$$->next_list=$1->next_list; $$->i_number=$1->i_number;}}
;

StatementNoShortIf:
StatementWithoutTrailingSubstatement		{if(!first_parse){strcpy($$->type,$1->type); $$->next_list=$1->next_list;$$->i_number=$1->i_number; $$->true_list = $1->true_list;}}
| LabeledStatementNoShortIf		            {if(!first_parse){$$->next_list=$1->next_list;$$->i_number=$1->i_number; $$->true_list = $1->true_list;}}
| IfThenElseStatementNoShortIf		        {if(!first_parse){$$->next_list=$1->next_list;$$->i_number=$1->i_number; $$->true_list = $1->true_list;}}
| WhileStatementNoShortIf		            {if(!first_parse){$$->next_list=$1->next_list;$$->i_number=$1->i_number;}}
| ForStatementNoShortIf		                {if(!first_parse){$$->next_list=$1->next_list;$$->i_number=$1->i_number;}}
;

StatementWithoutTrailingSubstatement:
Block		                                    {if(!first_parse){$$->next_list=$1->next_list;$$->i_number=$1->i_number; $$->true_list = $1->true_list;}}
| EmptyStatement		                        {if(!first_parse){$$->i_number=$1->i_number;}}
| ExpressionStatement		                    {if(!first_parse){$$->i_number=$1->i_number;}}
| AssertStatement		                        {if(!first_parse){$$->i_number=$1->i_number;}}
| BreakStatement	                            {if(!first_parse){$$->i_number=$1->i_number; $$->true_list = $1->true_list;}}	
| ContinueStatement		                        {if(!first_parse){$$->i_number=$1->i_number;}}
| ReturnStatement	                            {if(!first_parse){$$->i_number=$1->i_number;}}
| ThrowStatement		                        {if(!first_parse){$$->i_number=$1->i_number;}}
| TryStatement		                            {if(!first_parse){$$->i_number=$1->i_number;}}
| YieldStatement		                        {if(!first_parse){$$->i_number=$1->i_number;}}
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
StatementExpression SEMI_COLON		{if(!first_parse){$$->i_number = $1->i_number;}}
;

StatementExpression:
Assignment		{if(!first_parse){$$->i_number = $1->i_number;}}
| PreIncrementExpression	{if(!first_parse){$$->i_number = $1->i_number;}}	
| PreDecrementExpression	{if(!first_parse){$$->i_number = $1->i_number;}}	
| PostIncrementExpression	{if(!first_parse){$$->i_number = $1->i_number;}}	
| PostDecrementExpression	{if(!first_parse){$$->i_number = $1->i_number;}}	
| MethodInvocation      {if(!first_parse){$$->i_number = $1->i_number;}}
| ClassInstanceCreationExpression   {if(!first_parse){$$->i_number = $1->i_number;}}		
		
IfThenStatement:
IF LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS Statement	{if(!first_parse){reset(); backpatch($3->true_list,$5->i_number); $$->next_list = merge($3->false_list,$5->next_list); $$->i_number=$3->i_number; $$->true_list = $5->true_list;  }}	
;

IfThenElseStatement:
IfThenElseStatementStart ELSE Statement	    {if(!first_parse){reset(); backpatch($$->false_list,$3->i_number); $$->next_list = merge($1->next_list,$3->next_list);$$->i_number = $1->i_number; $$->true_list = merge($1->true_list,$3->true_list); }}
;

IfThenElseStatementStart:
IF LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS StatementNoShortIf {if(!first_parse){reset(); backpatch($3->true_list,$5->i_number); emitt("","","","goto",-1); $$->false_list = $3->false_list; $$->next_list = $5->next_list; $$->next_list.push_back(inst_num-1); $$->i_number = $3->i_number; $$->true_list = $5->true_list; }}
;

IfThenElseStatementNoShortIf:
IfThenElseStatementStart ELSE StatementNoShortIf	{if(!first_parse){reset(); backpatch($$->false_list,$3->i_number); $$->next_list = merge($1->next_list,$3->next_list);$$->i_number = $1->i_number; $$->true_list = merge($1->true_list,$3->true_list); }}
;


AssertStatement:
ASSERT Expression SEMI_COLON		
| ASSERT Expression COLON Expression SEMI_COLON		
;

WhileStatement:
WHILE LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS Statement	{if(!first_parse){string t = $3->type; if(t!="boolean"){cout<<"Expression must be of type boolean in line number "<<yylineno<<endl;exit(1);} reset(); backpatch($5->next_list,$3->i_number); backpatch($3->true_list,$5->i_number); $$->next_list = merge($3->false_list,$5->true_list); emitt("","","","goto",$3->i_number); $$->i_number = $3->i_number; }}	
;

WhileStatementNoShortIf:
WHILE LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS StatementNoShortIf		{if(!first_parse){string t = $3->type; if(t!="boolean"){cout<<"Expression must be of type boolean in line number "<<yylineno<<endl;exit(1);} reset(); backpatch($5->next_list,$3->i_number); backpatch($3->true_list,$5->i_number); $$->next_list = merge($3->false_list,$5->true_list); emitt("","","","goto",$3->i_number); $$->i_number = $3->i_number;}}
;

ForStatement:
BasicForStatement		{if(!first_parse){$$->i_number = $1->i_number; $$->next_list = $1->next_list;}}
| EnhancedForStatement		
;

ForStatementNoShortIf:
BasicForStatementNoShortIf		{if(!first_parse){$$->i_number = $1->i_number; $$->next_list = $1->next_list;}}
| EnhancedForStatementNoShortIf		
;

BasicForStatement:
FOR LEFT_PARANTHESIS SEMI_COLON SEMI_COLON RIGHT_PARANTHESIS Statement  {if(!first_parse){reset();$$->i_number = $6->i_number; backpatch($6->next_list,$6->i_number); $$->next_list = $6->true_list;  emitt("","","","goto",$6->i_number);}} 		
| FOR LEFT_PARANTHESIS SEMI_COLON SEMI_COLON ForUpdate RIGHT_PARANTHESIS Statement  {if(!first_parse){reset();$$->i_number = $7->i_number; backpatch($7->next_list,$5->i_number); $$->next_list = $7->true_list;  emitt("","","","goto",$5->i_number);  backpatch($5->next_list,$7->i_number);}} 		
| FOR LEFT_PARANTHESIS SEMI_COLON Expression SEMI_COLON RIGHT_PARANTHESIS Statement 		{if(!first_parse){string t = $4->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression in line number "<<yylineno<<endl; exit(1);}reset();$$->i_number = $4->i_number; if($7->i_number==-1) $7->i_number = inst_num; backpatch($4->true_list,$7->i_number); backpatch($7->next_list,$4->i_number); $$->next_list = merge($4->false_list,$7->true_list);  emitt("","","","goto",$4->i_number);}}
| FOR LEFT_PARANTHESIS SEMI_COLON Expression SEMI_COLON ForUpdate RIGHT_PARANTHESIS Statement 		{if(!first_parse){string t = $4->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression in line number "<<yylineno<<endl; exit(1);}reset();$$->i_number = $4->i_number;if($8->i_number==-1) $8->i_number = inst_num; backpatch($4->true_list,$8->i_number); backpatch($8->next_list,$6->i_number); $$->next_list = merge($4->false_list,$8->true_list);  emitt("","","","goto",$6->i_number);  backpatch($6->next_list,$4->i_number);}}
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON SEMI_COLON RIGHT_PARANTHESIS Statement 		{if(!first_parse){reset();$$->i_number = $3->i_number; backpatch($7->next_list,$7->i_number); $$->next_list = $7->true_list;  emitt("","","","goto",$7->i_number);}}
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON SEMI_COLON ForUpdate RIGHT_PARANTHESIS Statement 		{if(!first_parse){reset();$$->i_number = $3->i_number; backpatch($8->next_list,$6->i_number); $$->next_list = $8->true_list;  emitt("","","","goto",$6->i_number);  backpatch($6->next_list,$8->i_number);}}
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON Expression SEMI_COLON RIGHT_PARANTHESIS Statement 		{if(!first_parse){string t = $5->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression in line number "<<yylineno<<endl; exit(1);}reset();$$->i_number = $3->i_number; if($8->i_number==-1) $8->i_number = inst_num;backpatch($5->true_list,$8->i_number); backpatch($8->next_list,$5->i_number); $$->next_list = merge($5->false_list,$8->true_list); emitt("","","","goto",$5->i_number);}}
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON Expression SEMI_COLON ForUpdate RIGHT_PARANTHESIS Statement		{if(!first_parse){string t = $5->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression in line number "<<yylineno<<endl; exit(1);}reset();$$->i_number = $3->i_number;if($9->i_number==-1) $9->i_number = inst_num; backpatch($5->true_list,$9->i_number); backpatch($9->next_list,$7->i_number); $$->next_list = merge($5->false_list,$9->true_list); emitt("","","","goto",$7->i_number); backpatch($7->next_list,$5->i_number);}}
;

BasicForStatementNoShortIf:
FOR LEFT_PARANTHESIS SEMI_COLON SEMI_COLON RIGHT_PARANTHESIS StatementNoShortIf  {if(!first_parse){reset();$$->i_number = $6->i_number; backpatch($6->next_list,$6->i_number); $$->next_list = $6->true_list;  emitt("","","","goto",$6->i_number);}} 		
| FOR LEFT_PARANTHESIS SEMI_COLON SEMI_COLON ForUpdate RIGHT_PARANTHESIS StatementNoShortIf  {if(!first_parse){reset();$$->i_number = $7->i_number; backpatch($7->next_list,$5->i_number); $$->next_list = $7->true_list;  emitt("","","","goto",$5->i_number);  backpatch($5->next_list,$7->i_number);}} 		
| FOR LEFT_PARANTHESIS SEMI_COLON Expression SEMI_COLON RIGHT_PARANTHESIS StatementNoShortIf 		{if(!first_parse){string t = $4->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();$$->i_number = $4->i_number; if($7->i_number==-1) $7->i_number = inst_num;  backpatch($4->true_list,$7->i_number); backpatch($7->next_list,$4->i_number); $$->next_list = merge($4->false_list,$7->true_list);  emitt("","","","goto",$4->i_number);}}
| FOR LEFT_PARANTHESIS SEMI_COLON Expression SEMI_COLON ForUpdate RIGHT_PARANTHESIS StatementNoShortIf 		{if(!first_parse){string t = $4->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();$$->i_number = $4->i_number;if($8->i_number==-1) $8->i_number = inst_num;  backpatch($4->true_list,$8->i_number); backpatch($8->next_list,$6->i_number); $$->next_list = merge($4->false_list,$8->true_list);  emitt("","","","goto",$6->i_number);  backpatch($6->next_list,$4->i_number);}}
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON SEMI_COLON RIGHT_PARANTHESIS StatementNoShortIf 		{if(!first_parse){reset();$$->i_number = $3->i_number; backpatch($7->next_list,$7->i_number); $$->next_list = $7->true_list;  emitt("","","","goto",$7->i_number);}}
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON SEMI_COLON ForUpdate RIGHT_PARANTHESIS StatementNoShortIf 		{if(!first_parse){reset();$$->i_number = $3->i_number; backpatch($8->next_list,$6->i_number); $$->next_list = $8->true_list;  emitt("","","","goto",$6->i_number);  backpatch($6->next_list,$8->i_number);}}
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON Expression SEMI_COLON RIGHT_PARANTHESIS StatementNoShortIf 		{if(!first_parse){string t = $5->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();$$->i_number = $3->i_number;if($8->i_number==-1) $8->i_number = inst_num;  backpatch($5->true_list,$8->i_number); backpatch($8->next_list,$5->i_number); $$->next_list = merge($5->false_list,$8->true_list); emitt("","","","goto",$5->i_number);}}
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON Expression SEMI_COLON ForUpdate RIGHT_PARANTHESIS StatementNoShortIf		{if(!first_parse){string t = $5->type; if(t!="boolean"){cout<<"Second argument for \"FOR\" has to be a boolean expression"<<endl; exit(1);}reset();$$->i_number = $3->i_number;if($9->i_number==-1) $9->i_number = inst_num;  backpatch($5->true_list,$9->i_number); backpatch($9->next_list,$7->i_number); $$->next_list = merge($5->false_list,$9->true_list); emitt("","","","goto",$7->i_number); backpatch($7->next_list,$5->i_number);}}
;

ForInit:
StatementExpressionList		{if(!first_parse){$$->i_number = $1->i_number;}}
| LocalVariableDeclaration  {if(!first_parse){$$->i_number = $1->i_number;}}
;

LocalVariableDeclaration:
Type VariableDeclaratorList{
    if(!first_parse){
        for(int i=0;i<v.size();i++){
            string t = expression_type(yylineno,$1->type,v[i].second,"declare");
            make_dirty_entry(v[i].first,t,yylineno,"0000",-1);
        }
        for(int i=0;i<declarations.size();i++){
            char temp[1000];
            strcpy(temp,(declarations[i].first).c_str());
            string t = find_in_scope(declarations[i].first,temp);
            emitt("",declarations[i].second,"",temp,-1);
        }
        $$->i_number = $2->i_number;
    }	
    declarations.clear();
    v.clear();
}
| FINAL Type VariableDeclaratorList{
    if(!first_parse){
        for(int i=0;i<v.size();i++){
            string t = expression_type(yylineno,$1->type,v[i].second,"declare");
            make_dirty_entry(v[i].first,t,yylineno,"0010",-1);
        }
        for(int i=0;i<declarations.size();i++){
            char temp[1000];
            strcpy(temp,(declarations[i].first).c_str());
            string t = find_in_scope(declarations[i].first,temp);
            emitt("",declarations[i].second,"",temp,-1);
        }
        $$->i_number = $3->i_number;
    }
    declarations.clear();
    v.clear();
}

ForUpdate:
StatementExpressionList		{if(!first_parse){$$->i_number = $1->i_number; emitt("","","","goto",-1); $$->next_list.push_back(inst_num-1);}}
;

StatementExpressionList:
StatementExpressionList COMMA StatementExpression	{if(!first_parse){$$->i_number = $1->i_number;}}	
| StatementExpression	{if(!first_parse){$$->i_number = $1->i_number;}}	
;

EnhancedForStatement:
FOR LEFT_PARANTHESIS LocalVariableDeclaration COLON Expression RIGHT_PARANTHESIS Statement	{if(!first_parse){reset();}}	
;

EnhancedForStatementNoShortIf:
FOR LEFT_PARANTHESIS LocalVariableDeclaration COLON Expression RIGHT_PARANTHESIS StatementNoShortIf		{if(!first_parse){reset();}}
;

BreakStatement:
BREAK SEMI_COLON		{if(!first_parse){emitt("","","","goto",-1); $$->true_list.push_back(inst_num-1); $$->i_number = inst_num-1;}}
| BREAK IDENTIFIER SEMI_COLON		{if(!first_parse){emitt("","","","goto",-1); $$->true_list.push_back(inst_num-1); $$->i_number = inst_num-1;}}
;

YieldStatement:
YIELD Expression SEMI_COLON		
;

ContinueStatement:
CONTINUE SEMI_COLON		{if(!first_parse){emitt("","","","goto",-1); $$->next_list.push_back(inst_num-1); $$->i_number = inst_num-1; }}
| CONTINUE IDENTIFIER SEMI_COLON	{if(!first_parse){emitt("","","","goto",-1); $$->next_list.push_back(inst_num-1); $$->i_number = inst_num-1;}}	
;

ReturnStatement:
RETURN SEMI_COLON		            {if(!first_parse){emitt("string","return","","",-1);$$->i_number = inst_num-1;}}
|  RETURN Expression SEMI_COLON		 {if(!first_parse){emitt("",$2->temp_var,"","rax",-1); emitt("string","return","","",-1);$$->i_number=$2->i_number;}}
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
PrimaryNoNewArray	{if(!first_parse){$$->lit = $1->lit; strcpy($$->type,$1->type);strcpy($$->temp_var,$1->temp_var);$$->i_number = $1->i_number;}}	
| ArrayCreationExpression	{if(!first_parse){$$->lit = false; strcpy($$->type,$1->type);strcpy($$->temp_var,$1->temp_var); $$->dimension = $1->dimension;$$->i_number = $1->i_number;}}	
;

PrimaryNoNewArray:
Literal			{if(!first_parse){$$->lit = true;strcpy($$->type,$1->type);strcpy($$->temp_var,$1->temp_var);$$->i_number = $1->i_number;}}	
| LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS{if(!first_parse){$$->lit = false; strcpy($$->type,$2->type);strcpy($$->temp_var,$2->temp_var);$$->true_list = $2->true_list; $$->false_list = $2->false_list; $$->i_number = $2->i_number;}}
| ClassInstanceCreationExpression	{if(!first_parse){$$->lit = false; strcpy($$->type,$1->type); $$->i_number = $1->i_number; strcpy($$->temp_var,$1->temp_var);}}	
| ArrayAccess		{if(!first_parse){$$->lit = false;  strcpy($$->type,$1->type);$$->i_number = $1->i_number;}}
| MethodInvocation		{if(!first_parse){$$->lit = false; strcpy($$->type,$1->type);strcpy($$->temp_var,$1->temp_var); $$->i_number = $1->i_number;}}
;

Literal:
INTEGER_LITERAL	    {if(!first_parse){strcpy($$->type,"int");strcpy($$->temp_var,new_temporary().c_str());emitt("",$1->label,"",$$->temp_var,-1);$$->i_number = inst_num-1;}}	
| FLOATINGPOINT_LITERAL		{if(!first_parse){strcpy($$->type,"float");strcpy($$->temp_var,new_temporary().c_str());emitt("",$1->label,"",$$->temp_var,-1);$$->i_number = inst_num-1;}}
| BOOLEAN_LITERAL	{if(!first_parse){strcpy($$->type,"boolean");strcpy($$->temp_var,new_temporary().c_str());emitt("",$1->label,"",$$->temp_var,-1);$$->i_number = inst_num-1;}}	
| CHARACTER_LITERAL		{if(!first_parse){strcpy($$->type,"char");strcpy($$->temp_var,new_temporary().c_str());emitt("",$1->label,"",$$->temp_var,-1);$$->i_number = inst_num-1;}}
| STRING_LITERAL		{if(!first_parse){strcpy($$->type,"String");strcpy($$->temp_var,new_temporary().c_str());emitt("",$1->label,"",$$->temp_var,-1);$$->i_number = inst_num-1;}}	
| NULL_LITERAL		{if(!first_parse){strcpy($$->type,"null");strcpy($$->temp_var,new_temporary().c_str());emitt("",$1->label,"",$$->temp_var,-1);$$->i_number = inst_num-1;}}
;

ClassInstanceCreationExpression:
UnqualifiedClassInstanceCreationExpression	{if(!first_parse){strcpy($$->type,$1->type); strcpy($$->temp_var,$1->temp_var); $$->i_number = $1->i_number;}}
;

UnqualifiedClassInstanceCreationExpression:
NEW DotIdentifiers LEFT_PARANTHESIS RIGHT_PARANTHESIS 	{if(!first_parse){$$->i_number = inst_num; strcpy($$->temp_var,"rax"); check_gst($2->label); strcpy($$->type,get_method($2->label,"constructor",function_call).c_str());}}	
| NEW DotIdentifiers LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 	{if(!first_parse){$$->i_number = $3->i_number; strcpy($$->temp_var,"rax"); check_gst($2->label); strcpy($$->type,get_method($2->label,"constructor",function_call).c_str());}}
;

ArrayAccess:
DotIdentifiers DimExprs 	{if(!first_parse){string bruh = $1->label; string t = find_in_scope($1->label,$1->label); int count=0; for(int i=0;i<t.size();i++)if(t[i]=='*') count++; if(count<$2->dims){cout<<"Accessing Higher Dimensions of "<<bruh<<" in line number "<<yylineno<<endl; exit(1);} string l = (t.substr(0,t.size()-$2->dims));strcpy($$->type,l.c_str());vector<int> s = get_dimensions(bruh); strcpy($$->temp_var,array_access($1->label,s,$2->dimension).c_str()); $$->i_number = $2->i_number; strcpy($$->label,bruh.c_str());}}	
;

MethodInvocation:
IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		{if(!first_parse){$$->i_number = inst_num; strcpy($$->temp_var,"rax"); strcpy($$->type,get_method($1->label,"",function_call).c_str());}}
| IDENTIFIER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS     {if(!first_parse){strcpy($$->temp_var,"rax"); strcpy($$->type,get_method($1->label,"",function_call).c_str());function_call.clear();}}		
| DotIdentifiers DOT IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		{if(!first_parse){$$->i_number = inst_num;strcpy($$->temp_var,"rax"); strcpy($$->type,get_method($3->label,find_in_scope($1->label,$1->label),function_call).c_str());}}
| DotIdentifiers DOT IDENTIFIER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 		{if(!first_parse){$$->i_number = $5->i_number; strcpy($$->temp_var,"rax"); strcpy($$->type,get_method($3->label,find_in_scope($1->label,$1->label),function_call).c_str()); function_call.clear();}}	
;

ArrayCreationExpression:
NEW PrimitiveType DimExprs 	{if(!first_parse){string t; for(int i=0;i<$3->dims;i++) t.push_back('*'); strcpy($$->type,strcat($2->type,t.c_str()));$$->dims = $3->dims; $$->dimension = $3->dimension; $$->i_number = $3->i_number;strcpy($$->temp_var,array_func($1->label,$3->dimension,$2->type).c_str());}}	
| NEW PrimitiveType DimExprs Dims 	{if(!first_parse){string t; for(int i=0;i<$3->dims;i++) t.push_back('*'); for(int i=0;i<$4->dims;i++) t.push_back('*'); strcpy($$->type,strcat($2->type,t.c_str()));$$->dims = $3->dims + $4->dims;}}
| NEW ClassType DimExprs 	{if(!first_parse){string t; for(int i=0;i<$3->dims;i++) t.push_back('*'); strcpy($$->type,strcat($2->type,t.c_str()));$$->dims = $3->dims; $$->dimension = $3->dimension; $$->i_number = $3->i_number;}}	
| NEW ClassType DimExprs Dims 		{if(!first_parse){string t; for(int i=0;i<$3->dims;i++) t.push_back('*'); for(int i=0;i<$4->dims;i++) t.push_back('*'); strcpy($$->type,strcat($2->type,t.c_str()));$$->dims = $3->dims + $4->dims;}}
;

DimExprs:
DimExprs LEFT_SQUARE_BRACE Expression RIGHT_SQUARE_BRACE	{if(!first_parse){$$->dims = $1->dims+1; string t = $3->type; if(t!="int" && t!="byte" && t!="short" && t!="long") {cout<<"Array size must be of integer type. Line number: "<<yylineno<<endl; exit(1);}$1->dimension.push_back(reduce($3->temp_var)); $$->dimension = $1->dimension; $$->i_number = $1->i_number;}}	
| LEFT_SQUARE_BRACE Expression RIGHT_SQUARE_BRACE		{if(!first_parse){$$->dims=1; string t = $2->type; if(t!="int" && t!="byte" && t!="short" && t!="long") {cout<<"Array size must be of integer type. Line number: "<<yylineno<<endl; exit(1);} $$->dimension.push_back(reduce($2->temp_var));$$->i_number = $2->i_number;}}
;

Expression:
AssignmentExpression	{if(!first_parse){strcpy($$->type,$1->type);strcpy($$->temp_var,$1->temp_var); $$->i_number=$1->i_number;$$->true_list = $1->true_list; $$->false_list = $1->false_list;$$->dimension = $1->dimension;}}	
;

AssignmentExpression:
ConditionalExpression		{if(!first_parse){strcpy($$->type,$1->type);$$->i_number=$1->i_number;strcpy($$->temp_var,$1->temp_var);$$->true_list = $1->true_list; $$->false_list = $1->false_list;$$->dimension = $1->dimension;}}
| Assignment		{if(!first_parse){strcpy($$->type,$1->type);$$->i_number=$1->i_number;}}
;

Assignment:
DotIdentifiers EQUALS Expression	{
    if(!first_parse){
        string bruh = $1->label;
        string t = find_in_scope($1->label,$1->label);
        strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str());
        $$->i_number = $3->i_number;
        if($3->dimension.size()){
            set_dimensions(bruh,$3->dimension);
        }
        if(t=="boolean"){
            emitt("","true","",get_base_offset($1->label),-1);
            backpatch($3->true_list,inst_num-1);
            emitt("","false","",get_base_offset($1->label),-1);
            backpatch($3->false_list,inst_num-1);
        }else{
            if(t!=$3->type){string temp = new_temporary(); strcpy($3->temp_var,temp.c_str());}
            emitt("",$3->temp_var,"",get_base_offset($1->label),-1);
        }
    }
}
| DotIdentifiers STAR_EQUALS Expression	    {if(!first_parse){string t = find_in_scope($1->label,$1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str()); $$->i_number = $3->i_number; string l = new_temporary(); emitt("",get_base_offset($1->label),"",l,-1); string s = new_temporary(); emitt("*",l,$3->temp_var,s,-1); emitt("",s,"",get_base_offset($1->label),-1);}}
| DotIdentifiers SLASH_EQUALS Expression	{if(!first_parse){string t = find_in_scope($1->label,$1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str()); $$->i_number = $3->i_number; string l = new_temporary(); emitt("",get_base_offset($1->label),"",l,-1); string s = new_temporary(); emitt("/",l,$3->temp_var,s,-1); emitt("",s,"",get_base_offset($1->label),-1);}}	
| DotIdentifiers PERCENT_EQUALS Expression	{if(!first_parse){string t = find_in_scope($1->label,$1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str()); $$->i_number = $3->i_number; string l = new_temporary(); emitt("",get_base_offset($1->label),"",l,-1); string s = new_temporary(); emitt("\%",l,$3->temp_var,s,-1); emitt("",s,"",get_base_offset($1->label),-1);}}	
| DotIdentifiers PLUS_EQUALS Expression		{if(!first_parse){string t = find_in_scope($1->label,$1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str()); $$->i_number = $3->i_number; string l = new_temporary(); emitt("",get_base_offset($1->label),"",l,-1); string s = new_temporary(); emitt("+",l,$3->temp_var,s,-1); emitt("",s,"",get_base_offset($1->label),-1);}}
| DotIdentifiers MINUS_EQUALS Expression	{if(!first_parse){string t = find_in_scope($1->label,$1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str()); $$->i_number = $3->i_number; string l = new_temporary(); emitt("",get_base_offset($1->label),"",l,-1); string s = new_temporary(); emitt("-",l,$3->temp_var,s,-1); emitt("",s,"",get_base_offset($1->label),-1);}}
| DotIdentifiers LESS_THAN_LESS_THAN_EQUALS Expression		{if(!first_parse){string t = find_in_scope($1->label,$1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str()); $$->i_number = $3->i_number; string l = new_temporary(); emitt("",get_base_offset($1->label),"",l,-1); string s = new_temporary(); emitt("<<",l,$3->temp_var,s,-1); emitt("",s,"",get_base_offset($1->label),-1);}}
| DotIdentifiers GREATER_THAN_GREATER_THAN_EQUALS Expression		{if(!first_parse){string t = find_in_scope($1->label,$1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str()); $$->i_number = $3->i_number; string l = new_temporary(); emitt("",get_base_offset($1->label),"",l,-1); string s = new_temporary(); emitt(">>",l,$3->temp_var,s,-1); emitt("",s,"",get_base_offset($1->label),-1);}}
| DotIdentifiers GREATER_THAN_GREATER_THAN_GREATER_THAN_EQUALS Expression		{if(!first_parse){string t = find_in_scope($1->label,$1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str()); $$->i_number = $3->i_number; string l = new_temporary(); emitt("",get_base_offset($1->label),"",l,-1); string s = new_temporary(); emitt(">>>",l,$3->temp_var,s,-1); emitt("",s,"",get_base_offset($1->label),-1);}}
| DotIdentifiers AMPERSAND_EQUALS Expression		{if(!first_parse){string t = find_in_scope($1->label,$1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str()); $$->i_number = $3->i_number; string l = new_temporary(); emitt("",get_base_offset($1->label),"",l,-1); string s = new_temporary(); emitt("&",l,$3->temp_var,s,-1); emitt("",s,"",get_base_offset($1->label),-1);}}
| DotIdentifiers POWER_EQUALS Expression		{if(!first_parse){string t = find_in_scope($1->label,$1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str());$$->i_number = $3->i_number; string l = new_temporary(); emitt("",get_base_offset($1->label),"",l,-1); string s = new_temporary(); emitt("^",l,$3->temp_var,s,-1); emitt("",s,"",get_base_offset($1->label),-1);}}
| DotIdentifiers BAR_EQUALS Expression{if(!first_parse){string t = find_in_scope($1->label,$1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str()); $$->i_number = $3->i_number; string l = new_temporary(); emitt("",get_base_offset($1->label),"",l,-1); string s = new_temporary(); emitt("|",l,$3->temp_var,s,-1); emitt("",s,"",get_base_offset($1->label),-1);}}
| ArrayAccess EQUALS Expression{
    if(!first_parse){
        string t = find_in_scope($1->label,$1->label);
        strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str());
        $$->i_number = $3->i_number;
        if(t=="boolean"){
            emitt("","true","",$1->temp_var,-1);
            backpatch($3->true_list,inst_num-1);
            emitt("","false","",$1->temp_var,-1);
            backpatch($3->false_list,inst_num-1);
        }else{
            
            emitt("",$3->temp_var,"",$1->temp_var,-1);
        }
    }
}
| ArrayAccess STAR_EQUALS Expression	{if(!first_parse){string t = find_in_scope($1->label,$1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str()); $$->i_number = $3->i_number; string l = new_temporary(); emitt("",$1->temp_var,"",l,-1); string s = new_temporary(); emitt("*",l,$3->temp_var,s,-1); emitt("",s,"",$1->temp_var,-1);}}
| ArrayAccess SLASH_EQUALS Expression	{if(!first_parse){string t = find_in_scope($1->label,$1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str()); $$->i_number = $3->i_number; string l = new_temporary(); emitt("",$1->temp_var,"",l,-1); string s = new_temporary(); emitt("/",l,$3->temp_var,s,-1); emitt("",s,"",$1->temp_var,-1);}}	
| ArrayAccess PERCENT_EQUALS Expression	{if(!first_parse){string t = find_in_scope($1->label,$1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str()); $$->i_number = $3->i_number; string l = new_temporary(); emitt("",$1->temp_var,"",l,-1); string s = new_temporary(); emitt("\%",l,$3->temp_var,s,-1); emitt("",s,"",$1->temp_var,-1);}}	
| ArrayAccess PLUS_EQUALS Expression		{if(!first_parse){string t = find_in_scope($1->label,$1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str()); $$->i_number = $3->i_number; string l = new_temporary(); emitt("",$1->temp_var,"",l,-1); string s = new_temporary(); emitt("+",l,$3->temp_var,s,-1); emitt("",s,"",$1->temp_var,-1);}}
| ArrayAccess MINUS_EQUALS Expression	{if(!first_parse){string t = find_in_scope($1->label,$1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str()); $$->i_number = $3->i_number; string l = new_temporary(); emitt("",$1->temp_var,"",l,-1); string s = new_temporary(); emitt("-",l,$3->temp_var,s,-1); emitt("",s,"",$1->temp_var,-1);}}
| ArrayAccess LESS_THAN_LESS_THAN_EQUALS Expression		{if(!first_parse){string t = find_in_scope($1->label,$1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str()); $$->i_number = $3->i_number; string l = new_temporary(); emitt("",$1->temp_var,"",l,-1); string s = new_temporary(); emitt("<<",l,$3->temp_var,s,-1); emitt("",s,"",$1->temp_var,-1);}}
| ArrayAccess GREATER_THAN_GREATER_THAN_EQUALS Expression		{if(!first_parse){string t = find_in_scope($1->label,$1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str()); $$->i_number = $3->i_number; string l = new_temporary(); emitt("",$1->temp_var,"",l,-1); string s = new_temporary(); emitt(">>",l,$3->temp_var,s,-1); emitt("",s,"",$1->temp_var,-1);}}
| ArrayAccess GREATER_THAN_GREATER_THAN_GREATER_THAN_EQUALS Expression		{if(!first_parse){string t = find_in_scope($1->label,$1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str()); $$->i_number = $3->i_number; string l = new_temporary(); emitt("",$1->temp_var,"",l,-1); string s = new_temporary(); emitt(">>>",l,$3->temp_var,s,-1); emitt("",s,"",$1->temp_var,-1);}}
| ArrayAccess AMPERSAND_EQUALS Expression		{if(!first_parse){string t = find_in_scope($1->label,$1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str()); $$->i_number = $3->i_number; string l = new_temporary(); emitt("",$1->temp_var,"",l,-1); string s = new_temporary(); emitt("&",l,$3->temp_var,s,-1); emitt("",s,"",$1->temp_var,-1);}}
| ArrayAccess POWER_EQUALS Expression		{if(!first_parse){string t = find_in_scope($1->label,$1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str());$$->i_number = $3->i_number; string l = new_temporary(); emitt("",$1->temp_var,"",l,-1); string s = new_temporary(); emitt("^",l,$3->temp_var,s,-1); emitt("",s,"",$1->temp_var,-1);}}
| ArrayAccess BAR_EQUALS Expression{if(!first_parse){string t = find_in_scope($1->label,$1->label);strcpy($$->type,expression_type(yylineno,t,$3->type,$2->label).c_str()); $$->i_number = $3->i_number; string l = new_temporary(); emitt("",$1->temp_var,"",l,-1); string s = new_temporary(); emitt("|",l,$3->temp_var,s,-1); emitt("",s,"",$1->temp_var,-1);}}
;

ConditionalExpression:
ConditionalOrExpression		{if(!first_parse){strcpy($$->type,$1->type);strcpy($$->temp_var,$1->temp_var); $$->i_number = $1->i_number;$$->true_list = $1->true_list; $$->false_list = $1->false_list;$$->dimension = $1->dimension;}}
| ConditionalOrExpression QUESTION Expression COLON ConditionalExpression	{if(!first_parse){string s = $1->type; if(s!="boolean"){cout<<"First expression has to be boolean"<<endl;exit(1);}; backpatch($1->true_list,$3->i_number);}}	
;

ConditionalOrExpression:
ConditionalAndExpression	{if(!first_parse){strcpy($$->type,$1->type);strcpy($$->temp_var,$1->temp_var); $$->i_number = $1->i_number;$$->true_list = $1->true_list; $$->false_list = $1->false_list;$$->dimension = $1->dimension;}}	
| ConditionalOrExpression BAR_BAR ConditionalAndExpression		{if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str());backpatch($1->false_list,$3->i_number);$$->false_list = $3->false_list; $$->true_list = merge($1->true_list,$3->true_list);$$->i_number = $1->i_number;}}
;

ConditionalAndExpression:
InclusiveOrExpression		{if(!first_parse){strcpy($$->type,$1->type);strcpy($$->temp_var,$1->temp_var); $$->i_number = $1->i_number;$$->true_list = $1->true_list; $$->false_list = $1->false_list;$$->dimension = $1->dimension;}}
| ConditionalAndExpression AMPERSAND_AMPERSAND InclusiveOrExpression		{if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str());backpatch($1->true_list,$3->i_number);$$->true_list = $3->true_list; $$->false_list = merge($1->false_list,$3->false_list);$$->i_number = $1->i_number;}}
;

InclusiveOrExpression:
ExclusiveOrExpression		{if(!first_parse){strcpy($$->type,$1->type);strcpy($$->temp_var,$1->temp_var); $$->i_number = $1->i_number;$$->true_list = $1->true_list; $$->false_list = $1->false_list;$$->dimension = $1->dimension;}}
| InclusiveOrExpression BAR ExclusiveOrExpression		{if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str());  string l = new_temporary(); emitt($2->label,$1->temp_var,$3->temp_var,l,-1); strcpy($$->temp_var,l.c_str()); $$->i_number = $1->i_number;}}
;

ExclusiveOrExpression:
AndExpression		{if(!first_parse){strcpy($$->type,$1->type);strcpy($$->temp_var,$1->temp_var); $$->i_number = $1->i_number;$$->true_list = $1->true_list; $$->false_list = $1->false_list;$$->dimension = $1->dimension;}}
| ExclusiveOrExpression POWER AndExpression		{if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str());  string l = new_temporary(); emitt($2->label,$1->temp_var,$3->temp_var,l,-1); strcpy($$->temp_var,l.c_str()); $$->i_number = $1->i_number;}}
;

AndExpression:
EqualityExpression		{if(!first_parse){strcpy($$->type,$1->type);strcpy($$->temp_var,$1->temp_var); $$->i_number = $1->i_number;$$->true_list = $1->true_list; $$->false_list = $1->false_list;$$->dimension = $1->dimension;}}
| AndExpression AMPERSAND EqualityExpression	{if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str());  string l = new_temporary(); emitt($2->label,$1->temp_var,$3->temp_var,l,-1); strcpy($$->temp_var,l.c_str()); $$->i_number = $1->i_number;}}	
;

EqualityExpression:
RelationalExpression	{if(!first_parse){strcpy($$->type,$1->type);strcpy($$->temp_var,$1->temp_var); $$->i_number = $1->i_number;$$->true_list = $1->true_list; $$->false_list = $1->false_list;$$->dimension = $1->dimension;}}
| EqualityExpression EQUALS_EQUALS RelationalExpression		{if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str());char pp[1000] = " "; char qq[1000] = " "; emitt("if",strcat($1->temp_var,strcat(qq,strcat($2->label,strcat(pp,$3->temp_var)))),"","goto",-1);$$->true_list.push_back(inst_num-1);emitt("","","","goto",-1); $$->false_list.push_back(inst_num-1); $$->i_number = $1->i_number;}}
| EqualityExpression EXCLAIM_EQUALS RelationalExpression	{if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str());char pp[1000] = " "; char qq[1000] = " "; emitt("if",strcat($1->temp_var,strcat(qq,strcat($2->label,strcat(pp,$3->temp_var)))),"","goto",-1);$$->true_list.push_back(inst_num-1);emitt("","","","goto",-1); $$->false_list.push_back(inst_num-1); $$->i_number = $1->i_number;}}	
;

RelationalExpression:
ShiftExpression		{if(!first_parse){strcpy($$->type,$1->type);strcpy($$->temp_var,$1->temp_var); $$->i_number = $1->i_number;$$->dimension = $1->dimension;}}
| RelationalExpression LESS_THAN ShiftExpression	{if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str()); char pp[1000] = " "; char qq[1000] = " ";  emitt("if",strcat($1->temp_var,strcat(qq,strcat($2->label,strcat(pp,$3->temp_var)))),"","goto",-1);$$->true_list.push_back(inst_num-1);emitt("","","","goto",-1); $$->false_list.push_back(inst_num-1); $$->i_number = $1->i_number;}}	
| RelationalExpression GREATER_THAN ShiftExpression		{if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str());char pp[1000] = " "; char qq[1000] = " "; emitt("if",strcat($1->temp_var,strcat(qq,strcat($2->label,strcat(pp,$3->temp_var)))),"","goto",-1);$$->true_list.push_back(inst_num-1);emitt("","","","goto",-1); $$->false_list.push_back(inst_num-1); $$->i_number = $1->i_number;}}
| RelationalExpression LESS_THAN_EQUALS ShiftExpression		{if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str());char pp[1000] = " "; char qq[1000] = " "; emitt("if",strcat($1->temp_var,strcat(qq,strcat($2->label,strcat(pp,$3->temp_var)))),"","goto",-1);$$->true_list.push_back(inst_num-1);emitt("","","","goto",-1); $$->false_list.push_back(inst_num-1); $$->i_number = $1->i_number;}}
| RelationalExpression GREATER_THAN_EQUALS ShiftExpression  {if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str());char pp[1000] = " "; char qq[1000] = " "; emitt("if",strcat($1->temp_var,strcat(qq,strcat($2->label,strcat(pp,$3->temp_var)))),"","goto",-1);$$->true_list.push_back(inst_num-1);emitt("","","","goto",-1); $$->false_list.push_back(inst_num-1); $$->i_number = $1->i_number;}}
;

ShiftExpression:
AdditiveExpression		{if(!first_parse){strcpy($$->type,$1->type);strcpy($$->temp_var,$1->temp_var);$$->i_number = $1->i_number;$$->dimension = $1->dimension;}}
| ShiftExpression LESS_THAN_LESS_THAN AdditiveExpression		{if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str()); string l = new_temporary(); emitt($2->label,$1->temp_var,$3->temp_var,l,-1); strcpy($$->temp_var,l.c_str()); $$->i_number = $1->i_number;}}
| ShiftExpression GREATER_THAN_GREATER_THAN AdditiveExpression		{if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str()); string l = new_temporary(); emitt($2->label,$1->temp_var,$3->temp_var,l,-1); strcpy($$->temp_var,l.c_str()); $$->i_number = $1->i_number;}}
| ShiftExpression GREATER_THAN_GREATER_THAN_GREATER_THAN AdditiveExpression		{if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str()); string l = new_temporary(); emitt($2->label,$1->temp_var,$3->temp_var,l,-1); strcpy($$->temp_var,l.c_str()); $$->i_number = $1->i_number;}}
;

AdditiveExpression:
MultiplicativeExpression    {if(!first_parse){strcpy($$->type,$1->type);strcpy($$->temp_var,$1->temp_var);$$->i_number = $1->i_number;$$->dimension = $1->dimension;}}	
| AdditiveExpression PLUS MultiplicativeExpression	    {if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str());  string l = new_temporary(); emitt($2->label,$1->temp_var,$3->temp_var,l,-1); strcpy($$->temp_var,l.c_str()); $$->i_number = $1->i_number;}}	
| AdditiveExpression MINUS MultiplicativeExpression	    {if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str());  string l = new_temporary(); emitt($2->label,$1->temp_var,$3->temp_var,l,-1); strcpy($$->temp_var,l.c_str()); $$->i_number = $1->i_number;}}	
;

MultiplicativeExpression:
UnaryExpression		{if(!first_parse){strcpy($$->type,$1->type);strcpy($$->temp_var,$1->temp_var);$$->i_number = $1->i_number;$$->dimension = $1->dimension;}}
| MultiplicativeExpression STAR UnaryExpression	    {if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str());  string l = new_temporary(); emitt($2->label,$1->temp_var,$3->temp_var,l,-1); strcpy($$->temp_var,l.c_str()); $$->i_number = $1->i_number;}}	
| MultiplicativeExpression SLASH UnaryExpression    {if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str());  string l = new_temporary(); emitt($2->label,$1->temp_var,$3->temp_var,l,-1); strcpy($$->temp_var,l.c_str()); $$->i_number = $1->i_number;}}
| MultiplicativeExpression PERCENT UnaryExpression	{if(!first_parse){string t = expression_type(yylineno,$1->type,$3->type,$2->label); strcpy($$->type,t.c_str());  string l = new_temporary(); emitt($2->label,$1->temp_var,$3->temp_var,l,-1); strcpy($$->temp_var,l.c_str()); $$->i_number = $1->i_number;}}	
;

UnaryExpression:
PreIncrementExpression		    {if(!first_parse){$$->lit = $1->lit; strcpy($$->type,$1->type);strcpy($$->temp_var,$1->temp_var);$$->i_number = $1->i_number;}}
| PreDecrementExpression		{if(!first_parse){$$->lit = $1->lit; strcpy($$->type,$1->type);strcpy($$->temp_var,$1->temp_var);$$->i_number = $1->i_number;}}
| PLUS UnaryExpression		    {if(!first_parse){string t = expression_type(yylineno,$2->type,"",$1->label); $$->lit = $2->lit; strcpy($$->type,t.c_str());strcpy($$->temp_var,$2->temp_var);$$->i_number = $1->i_number;}}
| MINUS UnaryExpression		    {if(!first_parse){string t = expression_type(yylineno,$2->type,"",$1->label); $$->lit = $2->lit; strcpy($$->type,t.c_str());t = new_temporary(); emitt($1->label,"",$2->temp_var,t,-1); strcpy($$->temp_var,t.c_str());$$->i_number = $1->i_number;}}
| UnaryExpressionNotPlusMinus	{if(!first_parse){$$->lit = $1->lit; strcpy($$->type,$1->type);strcpy($$->temp_var,$1->temp_var);$$->i_number = $1->i_number;$$->dimension = $1->dimension;}}	
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
    t = new_temporary();
    emitt("",$2->temp_var,"",t,-1);
    emitt("+",$2->temp_var,"1",$2->temp_var,-1);
    strcpy($$->temp_var,t.c_str());
    $$->i_number = $2->i_number;
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
    t = new_temporary();
    emitt("",$2->temp_var,"",t,-1);
    emitt("-",$2->temp_var,"1",$2->temp_var,-1);
    strcpy($$->temp_var,t.c_str());
    $$->i_number = $2->i_number;
}
}
;

UnaryExpressionNotPlusMinus:
PostfixExpression	{if(!first_parse){$$->lit = $1->lit; strcpy($$->type,$1->type); strcpy($$->type,$1->type);strcpy($$->temp_var,$1->temp_var);$$->i_number = $1->i_number;$$->dimension = $1->dimension;}}
| TILDA UnaryExpression		
| EXCLAIM UnaryExpression		{if(!first_parse){string t = $2->type; if(t!="boolean"){cout<<"! operation only allowed on boolean in line number "<<yylineno<<endl; exit(1);}else{strcpy($$->type,$2->type);} $$->true_list = $2->false_list; $$->false_list = $2->true_list; $$->i_number = $2->i_number;}}
| CastExpression        
;

CastExpression:
LEFT_PARANTHESIS PrimitiveType RIGHT_PARANTHESIS UnaryExpression        
| LEFT_PARANTHESIS PrimitiveType Dims RIGHT_PARANTHESIS UnaryExpression     
| LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS UnaryExpressionNotPlusMinus     
| LEFT_PARANTHESIS DotIdentifiers Dims RIGHT_PARANTHESIS UnaryExpressionNotPlusMinus        
;

PostfixExpression:
Primary		                    {if(!first_parse){$$->lit = $1->lit; strcpy($$->type,$1->type);strcpy($$->temp_var,$1->temp_var);$$->i_number = $1->i_number;$$->dimension = $1->dimension;}}
| DotIdentifiers		        {if(!first_parse){$$->lit = false; strcpy($$->type,find_in_scope($1->label,$1->label).c_str()); $$->i_number = inst_num; string l = new_temporary(); emitt("",get_base_offset($1->label),"",l,-1); strcpy($$->temp_var,l.c_str()); strcpy($$->label,$1->label);}}
| PostIncrementExpression		{if(!first_parse){$$->lit = $1->lit; strcpy($$->type,$1->type);strcpy($$->temp_var,$1->temp_var);$$->i_number = $1->i_number;}}
| PostDecrementExpression		{if(!first_parse){$$->lit = $1->lit; strcpy($$->type,$1->type);strcpy($$->temp_var,$1->temp_var);$$->i_number = $1->i_number;}}
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
    emitt("+",$1->temp_var,"1",$1->temp_var,-1);
    emitt("",$1->temp_var,"",get_base_offset($1->label),-1);
    strcpy($$->temp_var,$1->temp_var);
    $$->i_number = $1->i_number;
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
    emitt("-",$1->temp_var,"1",$1->temp_var,-1);
    emitt("",$1->temp_var,"",get_base_offset($1->label),-1);
    strcpy($$->temp_var,$1->temp_var);
    $$->i_number = $1->i_number;
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
    print3AC_code();
    exit(0);
}