%{
#include <bits/stdc++.h>
using namespace std;

extern int yylex();
extern int yylineno;
extern FILE* yyin;

#define YYDEBUG 1

fstream fout,fin;
stack<int> st;
int node_number=1;

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
    char str[1000];
}

%token <str> AMPERSAND AMPERSAND_AMPERSAND AMPERSAND_EQUALS ARROW_RIGHT ASSERT BAR BAR_BAR BAR_EQUALS BOOLEAN_LITERAL BOOLEAN_TYPE BREAK CATCH CHARACTER_LITERAL CLASS COLON COMMA CONTINUE DOT DOUBLE_COLON ELSE EQUALS EQUALS_EQUALS EXCLAIM EXCLAIM_EQUALS EXTENDS FINAL FINALLY FLOATINGPOINT_LITERAL FLOAT_POINT_TYPE FOR GREATER_THAN GREATER_THAN_EQUALS GREATER_THAN_GREATER_THAN GREATER_THAN_GREATER_THAN_EQUALS GREATER_THAN_GREATER_THAN_GREATER_THAN GREATER_THAN_GREATER_THAN_GREATER_THAN_EQUALS IDENTIFIER IF IMPLEMENTS IMPORT INTEGER_LITERAL INTEGRAL_TYPE INTERFACE LEFT_CURLY_BRACE LEFT_PARANTHESIS LEFT_SQUARE_BRACE LESS_THAN LESS_THAN_EQUALS LESS_THAN_LESS_THAN LESS_THAN_LESS_THAN_EQUALS MINUS MINUS_EQUALS MINUS_MINUS NEW NULL_LITERAL PACKAGE PERCENT PERCENT_EQUALS PERMITS PLUS PLUS_EQUALS PLUS_PLUS POWER POWER_EQUALS PRIVATE PUBLIC QUESTION RETURN RIGHT_CURLY_BRACE RIGHT_PARANTHESIS RIGHT_SQUARE_BRACE SEMI_COLON SLASH SLASH_EQUALS STAR STAR_EQUALS STATIC STRING_TYPE STRING_LITERAL SUPER SYNCHRONIZED TEXTBLOCK THIS THROW THROWS TILDA TRIPLE_DOT TRY VAR VOID WHILE YIELD
%type <str> AdditiveExpression AndExpression ArrayAccess ArrayCreationExpression ArrayInitializer ArrayType AssertStatement Assignment AssignmentExpression BasicForStatement BasicForStatementNoShortIf Block BlockStatement BlockStatements BreakStatement CastExpression CatchClause Catches ClassBody ClassBodyDeclaration ClassBodyDeclarations ClassDeclaration ClassExtends ClassImplements ClassInstanceCreationExpression ClassLiteral ClassMemberDeclaration ClassModifier ClassModifiers ClassType ClassTypes CompiledStuff ConditionalAndExpression ConditionalExpression ConditionalOrExpression ConstructorBody ConstructorDeclaration ContinueStatement Declarator DimExprs Dims DotIdentifiers EmptyStatement EnhancedForStatement EnhancedForStatementNoShortIf EqualityExpression ExclusiveOrExpression ExplicitConstructorInvocation Expression ExpressionStatement Expressions FieldAccess FieldDeclaration ForInit ForStatement ForStatementNoShortIf ForUpdate FormalParameter FormalParameterList IfThenElseStatement IfThenElseStatementNoShortIf IfThenStatement ImportDeclaration ImportDeclarations InclusiveOrExpression InterfaceDeclaration LabeledStatement LabeledStatementNoShortIf LambdaExpression Literal LocalVariableDeclaration MethodBody MethodDeclaration MethodDeclarator MethodHeader MethodInvocation MethodReference MultiplicativeExpression NumericType PackageDeclaration PostDecrementExpression PostIncrementExpression PostfixExpression PreDecrementExpression PreIncrementExpression Primary PrimaryNoNewArray PrimitiveType ReceiverParameter ReferenceType RelationalExpression ReturnStatement ShiftExpression SingleStaticImportDeclaration SingleTypeImportDeclaration Statement StatementExpression StatementExpressionList StatementNoShortIf StatementWithoutTrailingSubstatement StaticImportOnDemandDeclaration StaticInitializer SynchronizedStatement ThrowStatement Throws TryStatement Type TypeArgument TypeArgumentList TypeArguments TypeDeclaration TypeDeclarations TypeImportOnDemandDeclaration TypeParameterList TypeParameters UnaryExpression UnaryExpressionNotPlusMinus UnqualifiedClassInstanceCreationExpression VariableDeclarator VariableDeclaratorList VariableInitializer VariableInitializerList VariableModifiers WhileStatement WhileStatementNoShortIf Wildcard YieldStatement

%start input

%%

input: CompiledStuff

CompiledStuff:
TypeDeclarations 		{ func("CompiledUnit", "0?");}
| ImportDeclarations 		{ func("CompiledUnit", "0?");}
| ImportDeclarations TypeDeclarations		{ func("CompiledUnit", "00");}
| PackageDeclaration        {func("CompiledUnit","0?");}
| PackageDeclaration TypeDeclarations 		{ func("CompiledUnit", "00");}
| PackageDeclaration ImportDeclarations 		{ func("CompiledUnit", "00");}
| PackageDeclaration ImportDeclarations TypeDeclarations		{ func("CompiledUnit", "000");}
;

PackageDeclaration:
PACKAGE DotIdentifiers {fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; func("PackageDeclaration","10");}
;

ImportDeclarations:
ImportDeclarations ImportDeclaration		{ func("ImportDeclarations", "00");}
| ImportDeclaration		{ func("ImportDeclarations", "0");}
;

ImportDeclaration:
SingleTypeImportDeclaration		{ func("ImportDeclaration", "0");}
| TypeImportOnDemandDeclaration		{ func("ImportDeclaration", "0");}
| SingleStaticImportDeclaration		{ func("ImportDeclaration", "0");}
| StaticImportOnDemandDeclaration		{ func("ImportDeclaration", "0");}
;

SingleTypeImportDeclaration:
IMPORT DotIdentifiers SEMI_COLON		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; func("SingleTypeImportDeclaration", "101");}
;

TypeImportOnDemandDeclaration:
IMPORT DotIdentifiers DOT STAR SEMI_COLON		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Operator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; func("TypeImportOnDemandDeclaration", "10111");}
;

SingleStaticImportDeclaration:
IMPORT STATIC DotIdentifiers DOT IDENTIFIER SEMI_COLON		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Keyword ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Identifier ( "<<$5<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; func("SingleStaticImportDeclaration", "110111");}
;

StaticImportOnDemandDeclaration:
IMPORT STATIC DotIdentifiers DOT STAR SEMI_COLON		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Keyword ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Operator ( "<<$5<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; func("StaticImportOnDemandDeclaration", "110111");}
;

TypeDeclarations:
TypeDeclarations TypeDeclaration		{ func("TypeDeclarations", "00");}
| TypeDeclaration		{ func("TypeDeclarations", "0");}
;

TypeDeclaration:
ClassDeclaration		{ func("TypeDeclaration", "0");}
| InterfaceDeclaration		{ func("TypeDeclaration", "0");}
;

Type:
PrimitiveType		{ func("Type", "0");}
| ReferenceType		{ func("Type", "0");}
;

PrimitiveType:
NumericType		{ func("PrimitiveType", "0");}
| BOOLEAN_TYPE		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; func("PrimitiveType", "1");}
| STRING_TYPE       { fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; func("PrimitiveType", "1");}
;

NumericType:
INTEGRAL_TYPE		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; func("NumericType", "1");}
| FLOAT_POINT_TYPE		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; func("NumericType", "1");}
;

ReferenceType:
ClassType		{ func("ReferenceType", "0");}
| ArrayType		{ func("ReferenceType", "0");}
;

ClassType:
DotIdentifiers		{ func("ClassType", "0");}
;

DotIdentifiers:
DotIdentifiers DOT IDENTIFIER		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; func("Name", "011");}
| IDENTIFIER		{ fout<<"n"<<node_number<<"a"<<"[label=\"Identifier ( "<<$1<<" )\"]"<<endl; func("Name", "1");}
;

ArrayType:
DotIdentifiers Dims		{ func("ArrayType", "00");}
| PrimitiveType Dims		{ func("ArrayType", "00");}
;

Dims:
Dims LEFT_SQUARE_BRACE RIGHT_SQUARE_BRACE		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; func("Dims", "011");}
| LEFT_SQUARE_BRACE RIGHT_SQUARE_BRACE		{ fout<<"n"<<node_number<<"a"<<"[label=\"Seperator ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; func("Dims", "11");}
;

TypeArguments:
LESS_THAN TypeArgumentList GREATER_THAN		{ func("< >", "202");}
;

TypeArgumentList:
TypeArgumentList COMMA TypeArgument		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; func("TypeArgumentList", "010");}
| TypeArgument		{ func("TypeArgumentList", "0");}
;

TypeArgument:
ReferenceType		{ func("TypeArgument", "0");}
| Wildcard		{ func("TypeArgument", "0");}
;

Wildcard:
QUESTION EXTENDS ReferenceType		{ fout<<"n"<<node_number<<"b"<<"[label=\"Keyword ( "<<$2<<" )\"]"<<endl; func("?", "210");}
| QUESTION SUPER ReferenceType		{ fout<<"n"<<node_number<<"b"<<"[label=\"Keyword ( "<<$2<<" )\"]"<<endl; func("?", "210");}
| QUESTION		{ func("?", "2");}
;

ClassDeclaration:
CLASS IDENTIFIER ClassBody 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Identifier ( "<<$2<<" )\"]"<<endl; func("ClassDeclaration", "110");}
| CLASS IDENTIFIER PERMITS DotIdentifiers ClassBody 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Identifier ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Keyword ( "<<$3<<" )\"]"<<endl; func("ClassDeclaration", "11100");}
| CLASS IDENTIFIER ClassImplements ClassBody 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Identifier ( "<<$2<<" )\"]"<<endl; func("ClassDeclaration", "1100");}
| CLASS IDENTIFIER ClassImplements PERMITS DotIdentifiers ClassBody 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Identifier ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Keyword ( "<<$4<<" )\"]"<<endl; func("ClassDeclaration", "110100");}
| CLASS IDENTIFIER ClassExtends ClassBody 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Identifier ( "<<$2<<" )\"]"<<endl; func("ClassDeclaration", "1100");}
| CLASS IDENTIFIER ClassExtends PERMITS DotIdentifiers ClassBody 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Identifier ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Keyword ( "<<$4<<" )\"]"<<endl; func("ClassDeclaration", "110100");}
| CLASS IDENTIFIER ClassExtends ClassImplements ClassBody 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Identifier ( "<<$2<<" )\"]"<<endl; func("ClassDeclaration", "11000");}
| CLASS IDENTIFIER ClassExtends ClassImplements PERMITS DotIdentifiers ClassBody 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Identifier ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Keyword ( "<<$5<<" )\"]"<<endl; func("ClassDeclaration", "1100100");}
| CLASS IDENTIFIER TypeParameterList ClassBody 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Identifier ( "<<$2<<" )\"]"<<endl; func("ClassDeclaration", "1100");}
| CLASS IDENTIFIER TypeParameterList PERMITS DotIdentifiers ClassBody 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Identifier ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Keyword ( "<<$4<<" )\"]"<<endl; func("ClassDeclaration", "110100");}
| CLASS IDENTIFIER TypeParameterList ClassImplements ClassBody 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Identifier ( "<<$2<<" )\"]"<<endl; func("ClassDeclaration", "11000");}
| CLASS IDENTIFIER TypeParameterList ClassImplements PERMITS DotIdentifiers ClassBody 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Identifier ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Keyword ( "<<$5<<" )\"]"<<endl; func("ClassDeclaration", "1100100");}
| CLASS IDENTIFIER TypeParameterList ClassExtends ClassBody 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Identifier ( "<<$2<<" )\"]"<<endl; func("ClassDeclaration", "11000");}
| CLASS IDENTIFIER TypeParameterList ClassExtends PERMITS DotIdentifiers ClassBody 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Identifier ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Keyword ( "<<$5<<" )\"]"<<endl; func("ClassDeclaration", "1100100");}
| CLASS IDENTIFIER TypeParameterList ClassExtends ClassImplements ClassBody 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Identifier ( "<<$2<<" )\"]"<<endl; func("ClassDeclaration", "110000");}
| CLASS IDENTIFIER TypeParameterList ClassExtends ClassImplements PERMITS DotIdentifiers ClassBody		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Identifier ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Keyword ( "<<$6<<" )\"]"<<endl; func("ClassDeclaration", "11000100");}
| ClassModifiers CLASS IDENTIFIER ClassBody 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Keyword ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; func("ClassDeclaration", "0110");}
| ClassModifiers CLASS IDENTIFIER PERMITS DotIdentifiers ClassBody 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Keyword ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Keyword ( "<<$4<<" )\"]"<<endl; func("ClassDeclaration", "011100");}
| ClassModifiers CLASS IDENTIFIER ClassImplements ClassBody 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Keyword ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; func("ClassDeclaration", "01100");}
| ClassModifiers CLASS IDENTIFIER ClassImplements PERMITS DotIdentifiers ClassBody 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Keyword ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Keyword ( "<<$5<<" )\"]"<<endl; func("ClassDeclaration", "0110100");}
| ClassModifiers CLASS IDENTIFIER ClassExtends ClassBody 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Keyword ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; func("ClassDeclaration", "01100");}
| ClassModifiers CLASS IDENTIFIER ClassExtends PERMITS DotIdentifiers ClassBody 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Keyword ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Keyword ( "<<$5<<" )\"]"<<endl; func("ClassDeclaration", "0110100");}
| ClassModifiers CLASS IDENTIFIER ClassExtends ClassImplements ClassBody 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Keyword ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; func("ClassDeclaration", "011000");}
| ClassModifiers CLASS IDENTIFIER ClassExtends ClassImplements PERMITS DotIdentifiers ClassBody 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Keyword ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Keyword ( "<<$6<<" )\"]"<<endl; func("ClassDeclaration", "01100100");}
| ClassModifiers CLASS IDENTIFIER TypeParameterList ClassBody 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Keyword ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; func("ClassDeclaration", "01100");}
| ClassModifiers CLASS IDENTIFIER TypeParameterList PERMITS DotIdentifiers ClassBody 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Keyword ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Keyword ( "<<$5<<" )\"]"<<endl; func("ClassDeclaration", "0110100");}
| ClassModifiers CLASS IDENTIFIER TypeParameterList ClassImplements ClassBody 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Keyword ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; func("ClassDeclaration", "011000");}
| ClassModifiers CLASS IDENTIFIER TypeParameterList ClassImplements PERMITS DotIdentifiers ClassBody 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Keyword ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Keyword ( "<<$6<<" )\"]"<<endl; func("ClassDeclaration", "01100100");}
| ClassModifiers CLASS IDENTIFIER TypeParameterList ClassExtends ClassBody 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Keyword ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; func("ClassDeclaration", "011000");}
| ClassModifiers CLASS IDENTIFIER TypeParameterList ClassExtends PERMITS DotIdentifiers ClassBody 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Keyword ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Keyword ( "<<$6<<" )\"]"<<endl; func("ClassDeclaration", "01100100");}
| ClassModifiers CLASS IDENTIFIER TypeParameterList ClassExtends ClassImplements ClassBody 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Keyword ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; func("ClassDeclaration", "0110000");}
| ClassModifiers CLASS IDENTIFIER TypeParameterList ClassExtends ClassImplements PERMITS DotIdentifiers ClassBody		{ fout<<"n"<<node_number<<"b"<<"[label=\"Keyword ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"g"<<"[label=\"Keyword ( "<<$7<<" )\"]"<<endl; func("ClassDeclaration", "011000100");}
;

ClassModifiers:
ClassModifiers ClassModifier		{ func("Modifiers", "00");}
| ClassModifier		{ func("Modifiers", "0");}
;

ClassModifier:
PUBLIC		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; func("Modifier", "1");}
| PRIVATE		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; func("Modifier", "1");}
| FINAL		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; func("Modifier", "1");}
| STATIC		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; func("Modifier", "1");}
| SYNCHRONIZED		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; func("Modifier", "1");}
;

TypeParameterList:
LESS_THAN IDENTIFIER GREATER_THAN 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Identifier ( "<<$2<<" )\"]"<<endl; func("< >", "212");}
| LESS_THAN IDENTIFIER TypeParameters GREATER_THAN 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Identifier ( "<<$2<<" )\"]"<<endl; func("< >", "2102");}
;

TypeParameters:
TypeParameters COMMA IDENTIFIER 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; func("TypeParameters", "011");}
| COMMA IDENTIFIER		{ fout<<"n"<<node_number<<"a"<<"[label=\"Seperator ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Identifier ( "<<$2<<" )\"]"<<endl; func("TypeParameters", "11");}
;

ClassExtends:
EXTENDS ClassType		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; func("ClassExtends", "10");}
;

ClassImplements:
IMPLEMENTS ClassType		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; func("ClassImplements", "10");}
| IMPLEMENTS ClassType ClassTypes		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; func("ClassImplements", "100");}
;

ClassTypes:
ClassTypes COMMA ClassType		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; func("ClassTypes", "010");}
| COMMA ClassType		{ fout<<"n"<<node_number<<"a"<<"[label=\"Seperator ( "<<$1<<" )\"]"<<endl; func("ClassTypes", "10");}
;

ClassBody:
LEFT_CURLY_BRACE RIGHT_CURLY_BRACE		{ fout<<"n"<<node_number<<"a"<<"[label=\"Seperator ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; func("ClassBody", "11");}
| LEFT_CURLY_BRACE ClassBodyDeclarations RIGHT_CURLY_BRACE		{ fout<<"n"<<node_number<<"a"<<"[label=\"Seperator ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; func("ClassBody", "101");}
;

ClassBodyDeclarations:
ClassBodyDeclarations ClassBodyDeclaration		{ func("ClassBodyDeclarations", "00");}
| ClassBodyDeclaration		{ func("ClassBodyDeclarations", "0");}
;

ClassBodyDeclaration:
ClassMemberDeclaration		{ func("ClassBodyDeclaration", "0");}
| StaticInitializer		{ func("ClassBodyDeclaration", "0");}
| ConstructorDeclaration		{ func("ClassBodyDeclaration", "0");}
;

ClassMemberDeclaration:
FieldDeclaration		{ func("ClassMemberDeclaration", "0");}
| MethodDeclaration		{ func("ClassMemberDeclaration", "0");}
| SEMI_COLON		{ fout<<"n"<<node_number<<"a"<<"[label=\"Seperator ( "<<$1<<" )\"]"<<endl; func("ClassMemberDeclaration", "1");}
;

FieldDeclaration:
Type VariableDeclaratorList SEMI_COLON		{ fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; func("FieldDeclaration", "001");}
| ClassModifiers Type VariableDeclaratorList SEMI_COLON		{ fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; func("FieldDeclaration", "0001");}
;

VariableDeclaratorList:
VariableDeclaratorList COMMA VariableDeclarator		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; func("VariableDeclaratorList", "010");}
| VariableDeclarator		{ func("VariableDeclaratorList", "0");}
;

VariableDeclarator:
IDENTIFIER EQUALS VariableInitializer		{ fout<<"n"<<node_number<<"a"<<"[label=\"Identifier ( "<<$1<<" )\"]"<<endl; func("=", "120");}
| IDENTIFIER Dims EQUALS VariableInitializer		{ fout<<"n"<<node_number<<"a"<<"[label=\"Identifier ( "<<$1<<" )\"]"<<endl; func("=", "1020");}
| IDENTIFIER		{ fout<<"n"<<node_number<<"a"<<"[label=\"Identifier ( "<<$1<<" )\"]"<<endl; func("VariableDeclarator", "1");}
| IDENTIFIER Dims		{ fout<<"n"<<node_number<<"a"<<"[label=\"Identifier ( "<<$1<<" )\"]"<<endl; func("VariableDeclarator", "10");}
;

VariableInitializer:
Expression		{ func("VariableInitializer", "0");}
| ArrayInitializer		{ func("VariableInitializer", "0");}
;

MethodDeclaration:
MethodHeader MethodBody		{ func("MethodDeclaration", "00");}
| ClassModifiers MethodHeader MethodBody		{ func("MethodDeclaration", "000");}
;

MethodHeader:
VOID MethodDeclarator 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; func("MethodHeader", "10");}
| VOID MethodDeclarator Throws 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; func("MethodHeader", "100");}
| Type MethodDeclarator 		{ func("MethodHeader", "00");}
| Type MethodDeclarator Throws 		{ func("MethodHeader", "000");}
| TypeParameterList VOID MethodDeclarator 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Keyword ( "<<$2<<" )\"]"<<endl; func("MethodHeader", "010");}
| TypeParameterList VOID MethodDeclarator Throws 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Keyword ( "<<$2<<" )\"]"<<endl; func("MethodHeader", "0100");}
| TypeParameterList Type MethodDeclarator 		{ func("MethodHeader", "000");}
| TypeParameterList Type MethodDeclarator Throws 		{ func("MethodHeader", "0000");}
;

MethodDeclarator:
Declarator		{ func("MethodDeclarator", "0");}
| Declarator Dims		{ func("MethodDeclarator", "00");}
;

ReceiverParameter:
Type THIS		{ fout<<"n"<<node_number<<"b"<<"[label=\"Keyword ( "<<$2<<" )\"]"<<endl; func("ReceiverParameter", "01");}
| Type IDENTIFIER DOT THIS		{ fout<<"n"<<node_number<<"b"<<"[label=\"Identifier ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Keyword ( "<<$4<<" )\"]"<<endl; func("ReceiverParameter", "0111");}
;

FormalParameterList:
FormalParameterList COMMA FormalParameter		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; func("ParameterList", "010");}
| FormalParameter		{ func("ParameterList", "0");}
;

FormalParameter:
Type IDENTIFIER 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Identifier ( "<<$2<<" )\"]"<<endl; func("Parameter", "01");}
| VariableModifiers Type IDENTIFIER 		{ fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; func("Parameter", "001");}
| Type IDENTIFIER Dims 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Identifier ( "<<$2<<" )\"]"<<endl; func("Parameter", "010");}
| VariableModifiers Type IDENTIFIER Dims		{ fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; func("Parameter", "0010");}
| Type TRIPLE_DOT IDENTIFIER		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; func("Parameter", "011");}
| VariableModifiers Type TRIPLE_DOT IDENTIFIER		{ fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Identifier ( "<<$4<<" )\"]"<<endl; func("Parameter", "0011");}
;

VariableModifiers:
VariableModifiers FINAL		{ fout<<"n"<<node_number<<"b"<<"[label=\"Keyword ( "<<$2<<" )\"]"<<endl; func("VariableModifiers", "01");}
| FINAL		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; func("VariableModifiers", "1");}
;

Throws:
THROWS ClassTypes		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; func("Throws", "10");}
;

MethodBody:
Block		{ func("MethodBody", "0");}
| SEMI_COLON		{ fout<<"n"<<node_number<<"a"<<"[label=\"Seperator ( "<<$1<<" )\"]"<<endl; func("MethodBody", "1");}
;

StaticInitializer:
STATIC Block		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; func("StaticInitializer", "10");}
;

ConstructorDeclaration:
TypeParameterList Declarator ConstructorBody 		{ func("ConstructorDeclaration", "000");}
| TypeParameterList Declarator Throws ConstructorBody		{ func("ConstructorDeclaration", "0000");}
| ClassModifiers TypeParameterList Declarator ConstructorBody 		{ func("ConstructorDeclaration", "0000");}
| ClassModifiers TypeParameterList Declarator Throws ConstructorBody		{ func("ConstructorDeclaration", "00000");}
| Declarator ConstructorBody 		{ func("ConstructorDeclaration", "00");}
| Declarator Throws ConstructorBody		{ func("ConstructorDeclaration", "000");}
| ClassModifiers Declarator ConstructorBody 		{ func("ConstructorDeclaration", "000");}
| ClassModifiers Declarator Throws ConstructorBody		{ func("ConstructorDeclaration", "0000");}
;

Declarator:
IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Identifier ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; func("Declarator", "111");}
| IDENTIFIER LEFT_PARANTHESIS FormalParameterList RIGHT_PARANTHESIS 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Identifier ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; func("Declarator", "1101");}
| IDENTIFIER LEFT_PARANTHESIS ReceiverParameter COMMA RIGHT_PARANTHESIS 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Identifier ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; func("Declarator", "11011");}
| IDENTIFIER LEFT_PARANTHESIS ReceiverParameter COMMA FormalParameterList RIGHT_PARANTHESIS 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Identifier ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; func("Declarator", "110101");}
;

ConstructorBody:
LEFT_CURLY_BRACE RIGHT_CURLY_BRACE 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Seperator ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; func("ConstructorBody", "11");}
| LEFT_CURLY_BRACE BlockStatements RIGHT_CURLY_BRACE 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Seperator ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; func("ConstructorBody", "101");}
| LEFT_CURLY_BRACE ExplicitConstructorInvocation RIGHT_CURLY_BRACE 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Seperator ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; func("ConstructorBody", "101");}
| LEFT_CURLY_BRACE ExplicitConstructorInvocation BlockStatements RIGHT_CURLY_BRACE		{ fout<<"n"<<node_number<<"a"<<"[label=\"Seperator ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; func("ConstructorBody", "1001");}
;

ExplicitConstructorInvocation:
THIS LEFT_PARANTHESIS RIGHT_PARANTHESIS SEMI_COLON 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; func("ExplicitConstructorInvocation", "1111");}
| THIS LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS SEMI_COLON 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; func("ExplicitConstructorInvocation", "11011");}
| TypeArguments THIS LEFT_PARANTHESIS RIGHT_PARANTHESIS SEMI_COLON 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Keyword ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; func("ExplicitConstructorInvocation", "01111");}
| TypeArguments THIS LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS SEMI_COLON 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Keyword ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; func("ExplicitConstructorInvocation", "011011");}
| SUPER LEFT_PARANTHESIS RIGHT_PARANTHESIS SEMI_COLON 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; func("ExplicitConstructorInvocation", "1111");}
| SUPER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS SEMI_COLON 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; func("ExplicitConstructorInvocation", "11011");}
| TypeArguments SUPER LEFT_PARANTHESIS RIGHT_PARANTHESIS SEMI_COLON 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Keyword ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; func("ExplicitConstructorInvocation", "01111");}
| TypeArguments SUPER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS SEMI_COLON 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Keyword ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; func("ExplicitConstructorInvocation", "011011");}
| DotIdentifiers DOT SUPER LEFT_PARANTHESIS RIGHT_PARANTHESIS SEMI_COLON 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Keyword ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; func("ExplicitConstructorInvocation", "011111");}
| DotIdentifiers DOT SUPER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS SEMI_COLON 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Keyword ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; fout<<"n"<<node_number<<"g"<<"[label=\"Seperator ( "<<$7<<" )\"]"<<endl; func("ExplicitConstructorInvocation", "0111011");}
| DotIdentifiers DOT TypeArguments SUPER LEFT_PARANTHESIS RIGHT_PARANTHESIS SEMI_COLON 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Keyword ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; fout<<"n"<<node_number<<"g"<<"[label=\"Seperator ( "<<$7<<" )\"]"<<endl; func("ExplicitConstructorInvocation", "0101111");}
| DotIdentifiers DOT TypeArguments SUPER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS SEMI_COLON		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Keyword ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; fout<<"n"<<node_number<<"g"<<"[label=\"Seperator ( "<<$7<<" )\"]"<<endl; fout<<"n"<<node_number<<"h"<<"[label=\"Seperator ( "<<$8<<" )\"]"<<endl; func("ExplicitConstructorInvocation", "01011011");}
;

Expressions:
Expressions COMMA Expression		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; func("Expressions", "010");}
| Expression		{ func("Expressions", "0");}
;

InterfaceDeclaration:
INTERFACE IDENTIFIER ClassBody 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Identifier ( "<<$2<<" )\"]"<<endl; func("InterfaceDeclaration", "110");}
| INTERFACE IDENTIFIER ClassExtends ClassBody 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Identifier ( "<<$2<<" )\"]"<<endl; func("InterfaceDeclaration", "1100");}
| INTERFACE IDENTIFIER TypeParameterList ClassBody 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Identifier ( "<<$2<<" )\"]"<<endl; func("InterfaceDeclaration", "1100");}
| INTERFACE IDENTIFIER TypeParameterList ClassExtends ClassBody 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Identifier ( "<<$2<<" )\"]"<<endl; func("InterfaceDeclaration", "11000");}
| ClassModifiers INTERFACE IDENTIFIER ClassBody 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Keyword ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; func("InterfaceDeclaration", "0110");}
| ClassModifiers INTERFACE IDENTIFIER ClassExtends ClassBody 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Keyword ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; func("InterfaceDeclaration", "01100");}
| ClassModifiers INTERFACE IDENTIFIER TypeParameterList ClassBody 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Keyword ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; func("InterfaceDeclaration", "01100");}
| ClassModifiers INTERFACE IDENTIFIER TypeParameterList ClassExtends ClassBody 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Keyword ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; func("InterfaceDeclaration", "011000");}
;

ArrayInitializer:
LEFT_CURLY_BRACE RIGHT_CURLY_BRACE 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Seperator ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; func("ArrayInitializer", "11");}
| LEFT_CURLY_BRACE COMMA RIGHT_CURLY_BRACE 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Seperator ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; func("ArrayInitializer", "111");}
| LEFT_CURLY_BRACE VariableInitializerList RIGHT_CURLY_BRACE 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Seperator ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; func("ArrayInitializer", "101");}
| LEFT_CURLY_BRACE VariableInitializerList COMMA RIGHT_CURLY_BRACE 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Seperator ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; func("ArrayInitializer", "1011");}
;

VariableInitializerList:
VariableInitializerList COMMA VariableInitializer		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; func("VariableInitializerList", "010");}
| VariableInitializer		{ func("VariableInitializerList", "0");}
;

Block:
LEFT_CURLY_BRACE RIGHT_CURLY_BRACE		{ fout<<"n"<<node_number<<"a"<<"[label=\"Seperator ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; func("Block", "11");}
| LEFT_CURLY_BRACE BlockStatements RIGHT_CURLY_BRACE		{ fout<<"n"<<node_number<<"a"<<"[label=\"Seperator ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; func("Block", "101");}
;

BlockStatements:
BlockStatements BlockStatement		{ func("BlockStatements", "00");}
| BlockStatement		{ func("BlockStatements", "0");}
;

BlockStatement:
Type VariableDeclaratorList SEMI_COLON		{ fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; func("BlockStatement", "001");}
| VAR VariableDeclaratorList SEMI_COLON		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; func("BlockStatement", "101");}
| VariableModifiers Type VariableDeclaratorList SEMI_COLON		{ fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; func("BlockStatement", "0001");}
| VariableModifiers VAR VariableDeclaratorList SEMI_COLON		{ fout<<"n"<<node_number<<"b"<<"[label=\"Keyword ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; func("BlockStatement", "0101");}
| Statement		{ func("BlockStatement", "0");}
;

Statement:
StatementWithoutTrailingSubstatement		{ func("Statement", "0");}
| LabeledStatement		{ func("Statement", "0");}
| IfThenStatement		{ func("Statement", "0");}
| IfThenElseStatement		{ func("Statement", "0");}
| WhileStatement		{ func("Statement", "0");}
| ForStatement		{ func("Statement", "0");}
;

StatementNoShortIf:
StatementWithoutTrailingSubstatement		{ func("StatementNoShortIf", "0");}
| LabeledStatementNoShortIf		{ func("StatementNoShortIf", "0");}
| IfThenElseStatementNoShortIf		{ func("StatementNoShortIf", "0");}
| WhileStatementNoShortIf		{ func("StatementNoShortIf", "0");}
| ForStatementNoShortIf		{ func("StatementNoShortIf", "0");}
;

StatementWithoutTrailingSubstatement:
Block		{ func("StatementWithoutTrailingSubstatement", "0");}
| EmptyStatement		{ func("StatementWithoutTrailingSubstatement", "0");}
| ExpressionStatement		{ func("StatementWithoutTrailingSubstatement", "0");}
| AssertStatement		{ func("StatementWithoutTrailingSubstatement", "0");}
| BreakStatement		{ func("StatementWithoutTrailingSubstatement", "0");}
| ContinueStatement		{ func("StatementWithoutTrailingSubstatement", "0");}
| ReturnStatement		{ func("StatementWithoutTrailingSubstatement", "0");}
| SynchronizedStatement		{ func("StatementWithoutTrailingSubstatement", "0");}
| ThrowStatement		{ func("StatementWithoutTrailingSubstatement", "0");}
| TryStatement		{ func("StatementWithoutTrailingSubstatement", "0");}
| YieldStatement		{ func("StatementWithoutTrailingSubstatement", "0");}
;

EmptyStatement:
SEMI_COLON		{ fout<<"n"<<node_number<<"a"<<"[label=\"Seperator ( "<<$1<<" )\"]"<<endl; func("EmptyStatement", "1");}
;

LabeledStatement:
IDENTIFIER COLON Statement		{ fout<<"n"<<node_number<<"a"<<"[label=\"Identifier ( "<<$1<<" )\"]"<<endl; func(":", "120");}
;

LabeledStatementNoShortIf:
IDENTIFIER COLON StatementNoShortIf		{ fout<<"n"<<node_number<<"a"<<"[label=\"Identifier ( "<<$1<<" )\"]"<<endl; func(":", "120");}
;

ExpressionStatement:
StatementExpression SEMI_COLON		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; func("ExpressionStatement", "01");}
;

StatementExpression:
Assignment		{ func("StatementExpression", "0");}
| PreIncrementExpression		{ func("StatementExpression", "0");}
| PreDecrementExpression		{ func("StatementExpression", "0");}
| PostIncrementExpression		{ func("StatementExpression", "0");}
| PostDecrementExpression		{ func("StatementExpression", "0");}
| MethodInvocation		{ func("StatementExpression", "0");}
| ClassInstanceCreationExpression		{ func("StatementExpression", "0");}
		{ func("StatementExpression", "");}
IfThenStatement:
IF LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS Statement		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; func("IfThenStatement", "11010");}
;

IfThenElseStatement:
IF LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS StatementNoShortIf ELSE Statement		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Keyword ( "<<$6<<" )\"]"<<endl; func("IfThenElseStatement", "1101010");}
;

IfThenElseStatementNoShortIf:
IF LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS StatementNoShortIf ELSE StatementNoShortIf		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Keyword ( "<<$6<<" )\"]"<<endl; func("IfThenElseStatementNoShortIf", "1101010");}
;

AssertStatement:
ASSERT Expression SEMI_COLON		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; func("AssertStatement", "101");}
| ASSERT Expression COLON Expression SEMI_COLON		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; func(":", "10201");}
;

WhileStatement:
WHILE LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS Statement		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; func("WhileStatement", "11010");}
;

WhileStatementNoShortIf:
WHILE LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS StatementNoShortIf		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; func("WhileStatementNoShortIf", "11010");}
;

ForStatement:
BasicForStatement		{ func("ForStatement", "0");}
| EnhancedForStatement		{ func("ForStatement", "0");}
;

ForStatementNoShortIf:
BasicForStatementNoShortIf		{ func("ForStatementNoShortIf", "0");}
| EnhancedForStatementNoShortIf		{ func("ForStatementNoShortIf", "0");}
;

BasicForStatement:
FOR LEFT_PARANTHESIS SEMI_COLON SEMI_COLON RIGHT_PARANTHESIS Statement 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; func("BasicForStatement", "111110");}
| FOR LEFT_PARANTHESIS SEMI_COLON SEMI_COLON ForUpdate RIGHT_PARANTHESIS Statement 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; func("BasicForStatement", "1111010");}
| FOR LEFT_PARANTHESIS SEMI_COLON Expression SEMI_COLON RIGHT_PARANTHESIS Statement 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; func("BasicForStatement", "1110110");}
| FOR LEFT_PARANTHESIS SEMI_COLON Expression SEMI_COLON ForUpdate RIGHT_PARANTHESIS Statement 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; fout<<"n"<<node_number<<"g"<<"[label=\"Seperator ( "<<$7<<" )\"]"<<endl; func("BasicForStatement", "11101010");}
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON SEMI_COLON RIGHT_PARANTHESIS Statement 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; func("BasicForStatement", "1101110");}
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON SEMI_COLON ForUpdate RIGHT_PARANTHESIS Statement 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; fout<<"n"<<node_number<<"g"<<"[label=\"Seperator ( "<<$7<<" )\"]"<<endl; func("BasicForStatement", "11011010");}
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON Expression SEMI_COLON RIGHT_PARANTHESIS Statement 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; fout<<"n"<<node_number<<"g"<<"[label=\"Seperator ( "<<$7<<" )\"]"<<endl; func("BasicForStatement", "11010110");}
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON Expression SEMI_COLON ForUpdate RIGHT_PARANTHESIS Statement		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; fout<<"n"<<node_number<<"h"<<"[label=\"Seperator ( "<<$8<<" )\"]"<<endl; func("BasicForStatement", "110101010");}
;

BasicForStatementNoShortIf:
FOR LEFT_PARANTHESIS SEMI_COLON SEMI_COLON RIGHT_PARANTHESIS StatementNoShortIf 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; func("BasicForStatementNoShortIf", "111110");}
| FOR LEFT_PARANTHESIS SEMI_COLON SEMI_COLON ForUpdate RIGHT_PARANTHESIS StatementNoShortIf 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; func("BasicForStatementNoShortIf", "1111010");}
| FOR LEFT_PARANTHESIS SEMI_COLON Expression SEMI_COLON RIGHT_PARANTHESIS StatementNoShortIf 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; func("BasicForStatementNoShortIf", "1110110");}
| FOR LEFT_PARANTHESIS SEMI_COLON Expression SEMI_COLON ForUpdate RIGHT_PARANTHESIS StatementNoShortIf 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; fout<<"n"<<node_number<<"g"<<"[label=\"Seperator ( "<<$7<<" )\"]"<<endl; func("BasicForStatementNoShortIf", "11101010");}
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON SEMI_COLON RIGHT_PARANTHESIS StatementNoShortIf 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; func("BasicForStatementNoShortIf", "1101110");}
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON SEMI_COLON ForUpdate RIGHT_PARANTHESIS StatementNoShortIf 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; fout<<"n"<<node_number<<"g"<<"[label=\"Seperator ( "<<$7<<" )\"]"<<endl; func("BasicForStatementNoShortIf", "11011010");}
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON Expression SEMI_COLON RIGHT_PARANTHESIS StatementNoShortIf 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; fout<<"n"<<node_number<<"g"<<"[label=\"Seperator ( "<<$7<<" )\"]"<<endl; func("BasicForStatementNoShortIf", "11010110");}
| FOR LEFT_PARANTHESIS ForInit SEMI_COLON Expression SEMI_COLON ForUpdate RIGHT_PARANTHESIS StatementNoShortIf 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; fout<<"n"<<node_number<<"h"<<"[label=\"Seperator ( "<<$8<<" )\"]"<<endl; func("BasicForStatementNoShortIf", "110101010");}
;

ForInit:
StatementExpressionList		{ func("ForInit", "0");}
| LocalVariableDeclaration		{ func("ForInit", "0");}
;

LocalVariableDeclaration:
Type VariableDeclaratorList		{ func("LocalVariableDeclaration", "00");}
| VariableModifiers Type VariableDeclaratorList		{ func("LocalVariableDeclaration", "000");}
| VAR VariableDeclaratorList		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; func("LocalVariableDeclaration", "10");}
| VariableModifiers VAR VariableDeclaratorList		{ fout<<"n"<<node_number<<"b"<<"[label=\"Keyword ( "<<$2<<" )\"]"<<endl; func("LocalVariableDeclaration", "010");}
;

ForUpdate:
StatementExpressionList		{ func("ForUpdate", "0");}
;

StatementExpressionList:
StatementExpressionList COMMA StatementExpression		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; func("StatementExpressionList", "010");}
| StatementExpression		{ func("StatementExpressionList", "0");}
;

EnhancedForStatement:
FOR LEFT_PARANTHESIS LocalVariableDeclaration COLON Expression RIGHT_PARANTHESIS Statement		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; func(":", "1102010");}
;

EnhancedForStatementNoShortIf:
FOR LEFT_PARANTHESIS LocalVariableDeclaration COLON Expression RIGHT_PARANTHESIS StatementNoShortIf		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; func(":", "1102010");}
;

BreakStatement:
BREAK SEMI_COLON		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; func("BreakStatement", "11");}
| BREAK IDENTIFIER SEMI_COLON		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Identifier ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; func("BreakStatement", "111");}
;

YieldStatement:
YIELD Expression SEMI_COLON		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; func("YieldStatement", "101");}
;

ContinueStatement:
CONTINUE SEMI_COLON		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; func("ContinueStatement", "11");}
| CONTINUE IDENTIFIER SEMI_COLON		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Identifier ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; func("ContinueStatement", "111");}
;

ReturnStatement:
RETURN SEMI_COLON		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; func("ReturnStatement", "11");}
|  RETURN Expression SEMI_COLON		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; func("ReturnStatement", "101");}
;

ThrowStatement:
THROW Expression SEMI_COLON		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; func("ThrowStatement", "101");}
;

SynchronizedStatement:
SYNCHRONIZED LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS Block		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; func("SynchronizedStatement", "11010");}
;

TryStatement:
TRY Block Catches		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; func("TryStatement", "100");}
| TRY Block FINALLY Block		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Keyword ( "<<$3<<" )\"]"<<endl; func("TryStatement", "1010");}
| TRY Block Catches FINALLY Block		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Keyword ( "<<$4<<" )\"]"<<endl; func("TryStatement", "10010");}
;

Catches:
Catches CatchClause		{ func("Catches", "00");}
| CatchClause		{ func("Catches", "0");}
;

CatchClause:
CATCH LEFT_PARANTHESIS FormalParameter RIGHT_PARANTHESIS Block		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; func("CatchClause", "11010");}
;

Primary:
PrimaryNoNewArray		{ func("Primary", "0");}
| ArrayCreationExpression		{ func("Primary", "0");}
;

PrimaryNoNewArray:
Literal		{ func("PrimaryNoNewArray", "0");}
| ClassLiteral		{ func("PrimaryNoNewArray", "0");}
| THIS		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; func("PrimaryNoNewArray", "1");}
| DotIdentifiers DOT THIS		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Keyword ( "<<$3<<" )\"]"<<endl; func("PrimaryNoNewArray", "011");}
| LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS		{ fout<<"n"<<node_number<<"a"<<"[label=\"Seperator ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; func("PrimaryNoNewArray", "101");}
| ClassInstanceCreationExpression		{ func("PrimaryNoNewArray", "0");}
| FieldAccess		{ func("PrimaryNoNewArray", "0");}
| ArrayAccess		{ func("PrimaryNoNewArray", "0");}
| MethodInvocation		{ func("PrimaryNoNewArray", "0");}
| MethodReference		{ func("PrimaryNoNewArray", "0");}
;

Literal:
INTEGER_LITERAL		{ fout<<"n"<<node_number<<"a"<<"[label=\"INTEGER_LITERAL ( "<<$1<<" )\"]"<<endl; func("Literal", "1");}
| FLOATINGPOINT_LITERAL		{ fout<<"n"<<node_number<<"a"<<"[label=\"FLOATINGPOINT_LITERAL ( "<<$1<<" )\"]"<<endl; func("Literal", "1");}
| BOOLEAN_LITERAL		{ fout<<"n"<<node_number<<"a"<<"[label=\"BOOLEAN_LITERAL ( "<<$1<<" )\"]"<<endl; func("Literal", "1");}
| CHARACTER_LITERAL		{ fout<<"n"<<node_number<<"a"<<"[label=\"CHARACTER_LITERAL ( "<<$1<<" )\"]"<<endl; func("Literal", "1");}
| STRING_LITERAL		{ fout<<"n"<<node_number<<"a"<<"[label=\"STRING_LITERAL ( "<<$1<<" )\"]"<<endl; func("Literal", "1");}
| TEXTBLOCK		{ fout<<"n"<<node_number<<"a"<<"[label=\"TEXTBLOCK ( "<<$1<<" )\"]"<<endl; func("Literal", "1");}
| NULL_LITERAL		{ fout<<"n"<<node_number<<"a"<<"[label=\"NULL_LITERAL ( "<<$1<<" )\"]"<<endl; func("Literal", "1");}
;

ClassLiteral:
DotIdentifiers DOT CLASS 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Keyword ( "<<$3<<" )\"]"<<endl; func("ClassLiteral", "011");}
| DotIdentifiers Dims DOT CLASS 		{ fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Keyword ( "<<$4<<" )\"]"<<endl; func("ClassLiteral", "0011");}
| PrimitiveType DOT CLASS 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Keyword ( "<<$3<<" )\"]"<<endl; func("ClassLiteral", "011");}
| PrimitiveType Dims DOT CLASS 		{ fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Keyword ( "<<$4<<" )\"]"<<endl; func("ClassLiteral", "0011");}
| VOID DOT CLASS		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Keyword ( "<<$3<<" )\"]"<<endl; func("ClassLiteral", "111");}
;

ClassInstanceCreationExpression:
UnqualifiedClassInstanceCreationExpression		{ func("ClassInstanceCreationExpression", "0");}
| DotIdentifiers DOT UnqualifiedClassInstanceCreationExpression		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; func("ClassInstanceCreationExpression", "010");}
| Primary DOT UnqualifiedClassInstanceCreationExpression		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; func("ClassInstanceCreationExpression", "010");}
;

UnqualifiedClassInstanceCreationExpression:
NEW DotIdentifiers LEFT_PARANTHESIS RIGHT_PARANTHESIS 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; func("UnqualifiedClassInstanceCreationExpression", "1011");}
| NEW DotIdentifiers LEFT_PARANTHESIS RIGHT_PARANTHESIS ClassBody 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; func("UnqualifiedClassInstanceCreationExpression", "10110");}
| NEW DotIdentifiers LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; func("UnqualifiedClassInstanceCreationExpression", "10101");}
| NEW DotIdentifiers LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS ClassBody 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; func("UnqualifiedClassInstanceCreationExpression", "101010");}
| NEW DotIdentifiers LESS_THAN GREATER_THAN LEFT_PARANTHESIS RIGHT_PARANTHESIS 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; func("< >", "102211");}
| NEW DotIdentifiers LESS_THAN GREATER_THAN LEFT_PARANTHESIS RIGHT_PARANTHESIS ClassBody 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; func("< >", "1022110");}
| NEW DotIdentifiers LESS_THAN GREATER_THAN LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; fout<<"n"<<node_number<<"g"<<"[label=\"Seperator ( "<<$7<<" )\"]"<<endl; func("< >", "1022101");}
| NEW DotIdentifiers LESS_THAN GREATER_THAN LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS ClassBody 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; fout<<"n"<<node_number<<"g"<<"[label=\"Seperator ( "<<$7<<" )\"]"<<endl; func("< >", "10221010");}
| NEW TypeArguments DotIdentifiers LEFT_PARANTHESIS RIGHT_PARANTHESIS 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; func("UnqualifiedClassInstanceCreationExpression", "10011");}
| NEW TypeArguments DotIdentifiers LEFT_PARANTHESIS RIGHT_PARANTHESIS ClassBody 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; func("UnqualifiedClassInstanceCreationExpression", "100110");}
| NEW TypeArguments DotIdentifiers LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; func("UnqualifiedClassInstanceCreationExpression", "100101");}
| NEW TypeArguments DotIdentifiers LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS ClassBody 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; func("UnqualifiedClassInstanceCreationExpression", "1001010");}
| NEW TypeArguments DotIdentifiers LESS_THAN GREATER_THAN LEFT_PARANTHESIS RIGHT_PARANTHESIS 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; fout<<"n"<<node_number<<"g"<<"[label=\"Seperator ( "<<$7<<" )\"]"<<endl; func("< >", "1002211");}
| NEW TypeArguments DotIdentifiers LESS_THAN GREATER_THAN LEFT_PARANTHESIS RIGHT_PARANTHESIS ClassBody 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; fout<<"n"<<node_number<<"g"<<"[label=\"Seperator ( "<<$7<<" )\"]"<<endl; func("< >", "10022110");}
| NEW TypeArguments DotIdentifiers LESS_THAN GREATER_THAN LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; fout<<"n"<<node_number<<"h"<<"[label=\"Seperator ( "<<$8<<" )\"]"<<endl; func("< >", "10022101");}
| NEW TypeArguments DotIdentifiers LESS_THAN GREATER_THAN LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS ClassBody 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; fout<<"n"<<node_number<<"h"<<"[label=\"Seperator ( "<<$8<<" )\"]"<<endl; func("< >", "100221010");}
;

FieldAccess:
Primary DOT IDENTIFIER		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; func("FieldAccess", "011");}
| SUPER DOT IDENTIFIER		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; func("FieldAccess", "111");}
| DotIdentifiers DOT SUPER DOT IDENTIFIER		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Keyword ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Identifier ( "<<$5<<" )\"]"<<endl; func("FieldAccess", "01111");}
;

ArrayAccess:
DotIdentifiers LEFT_SQUARE_BRACE Expression RIGHT_SQUARE_BRACE  		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; func("ArrayAccess", "0101");}
| PrimaryNoNewArray LEFT_SQUARE_BRACE Expression RIGHT_SQUARE_BRACE		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; func("ArrayAccess", "0101");}
;

MethodInvocation:
IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Identifier ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; func("MethodInvocation", "111");}
| IDENTIFIER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Identifier ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; func("MethodInvocation", "1101");}
| DotIdentifiers DOT IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; func("MethodInvocation", "01111");}
| DotIdentifiers DOT IDENTIFIER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; func("MethodInvocation", "011101");}
| DotIdentifiers DOT TypeArguments IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Identifier ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; func("MethodInvocation", "010111");}
| DotIdentifiers DOT TypeArguments IDENTIFIER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Identifier ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; fout<<"n"<<node_number<<"g"<<"[label=\"Seperator ( "<<$7<<" )\"]"<<endl; func("MethodInvocation", "0101101");}
| Primary DOT IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; func("MethodInvocation", "01111");}
| Primary DOT IDENTIFIER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; func("MethodInvocation", "011101");}
| Primary DOT TypeArguments IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Identifier ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; func("MethodInvocation", "010111");}
| Primary DOT TypeArguments IDENTIFIER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Identifier ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; fout<<"n"<<node_number<<"g"<<"[label=\"Seperator ( "<<$7<<" )\"]"<<endl; func("MethodInvocation", "0101101");}
| SUPER DOT IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; func("MethodInvocation", "11111");}
| SUPER DOT IDENTIFIER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; func("MethodInvocation", "111101");}
| SUPER DOT TypeArguments IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Identifier ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; func("MethodInvocation", "110111");}
| SUPER DOT TypeArguments IDENTIFIER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Identifier ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Seperator ( "<<$5<<" )\"]"<<endl; fout<<"n"<<node_number<<"g"<<"[label=\"Seperator ( "<<$7<<" )\"]"<<endl; func("MethodInvocation", "1101101");}
| DotIdentifiers DOT SUPER DOT IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Keyword ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Identifier ( "<<$5<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; fout<<"n"<<node_number<<"g"<<"[label=\"Seperator ( "<<$7<<" )\"]"<<endl; func("MethodInvocation", "0111111");}
| DotIdentifiers DOT SUPER DOT IDENTIFIER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Keyword ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Identifier ( "<<$5<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Seperator ( "<<$6<<" )\"]"<<endl; fout<<"n"<<node_number<<"h"<<"[label=\"Seperator ( "<<$8<<" )\"]"<<endl; func("MethodInvocation", "01111101");}
| DotIdentifiers DOT SUPER DOT TypeArguments IDENTIFIER LEFT_PARANTHESIS RIGHT_PARANTHESIS 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Keyword ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Identifier ( "<<$6<<" )\"]"<<endl; fout<<"n"<<node_number<<"g"<<"[label=\"Seperator ( "<<$7<<" )\"]"<<endl; fout<<"n"<<node_number<<"h"<<"[label=\"Seperator ( "<<$8<<" )\"]"<<endl; func("MethodInvocation", "01110111");}
| DotIdentifiers DOT SUPER DOT TypeArguments IDENTIFIER LEFT_PARANTHESIS Expressions RIGHT_PARANTHESIS		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Keyword ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Identifier ( "<<$6<<" )\"]"<<endl; fout<<"n"<<node_number<<"g"<<"[label=\"Seperator ( "<<$7<<" )\"]"<<endl; fout<<"n"<<node_number<<"i"<<"[label=\"Seperator ( "<<$9<<" )\"]"<<endl; func("MethodInvocation", "011101101");}
;

MethodReference:
Primary DOUBLE_COLON IDENTIFIER 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; func("MethodReference", "011");}
| Primary DOUBLE_COLON TypeArguments IDENTIFIER 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Identifier ( "<<$4<<" )\"]"<<endl; func("MethodReference", "0101");}
| ReferenceType DOUBLE_COLON IDENTIFIER 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; func("MethodReference", "011");}
| ReferenceType DOUBLE_COLON TypeArguments IDENTIFIER 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Identifier ( "<<$4<<" )\"]"<<endl; func("MethodReference", "0101");}
| ReferenceType DOUBLE_COLON NEW 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Keyword ( "<<$3<<" )\"]"<<endl; func("MethodReference", "011");}
| ReferenceType DOUBLE_COLON TypeArguments NEW 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Keyword ( "<<$4<<" )\"]"<<endl; func("MethodReference", "0101");}
| SUPER DOUBLE_COLON IDENTIFIER 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Identifier ( "<<$3<<" )\"]"<<endl; func("MethodReference", "111");}
| SUPER DOUBLE_COLON TypeArguments IDENTIFIER 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Identifier ( "<<$4<<" )\"]"<<endl; func("MethodReference", "1101");}
| DotIdentifiers DOT SUPER DOUBLE_COLON IDENTIFIER 		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Keyword ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"e"<<"[label=\"Identifier ( "<<$5<<" )\"]"<<endl; func("MethodReference", "01111");}
| DotIdentifiers DOT SUPER DOUBLE_COLON TypeArguments IDENTIFIER		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Keyword ( "<<$3<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; fout<<"n"<<node_number<<"f"<<"[label=\"Identifier ( "<<$6<<" )\"]"<<endl; func("MethodReference", "011101");}
;

ArrayCreationExpression:
NEW PrimitiveType DimExprs 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; func("ArrayCreationExpression", "100");}
| NEW PrimitiveType DimExprs Dims 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; func("ArrayCreationExpression", "1000");}
| NEW ClassType DimExprs 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; func("ArrayCreationExpression", "100");}
| NEW ClassType DimExprs Dims 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; func("ArrayCreationExpression", "1000");}
| NEW PrimitiveType Dims ArrayInitializer 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; func("ArrayCreationExpression", "1000");}
| NEW ClassType Dims ArrayInitializer 		{ fout<<"n"<<node_number<<"a"<<"[label=\"Keyword ( "<<$1<<" )\"]"<<endl; func("ArrayCreationExpression", "1000");}
;

DimExprs:
DimExprs LEFT_SQUARE_BRACE Expression RIGHT_SQUARE_BRACE		{ fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; func("DimExprs", "0101");}
| LEFT_SQUARE_BRACE Expression RIGHT_SQUARE_BRACE		{ fout<<"n"<<node_number<<"a"<<"[label=\"Seperator ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; func("DimExprs", "101");}
;

Expression:
LambdaExpression		{ func("Expression", "0");}
| AssignmentExpression		{ func("Expression", "0");}
;

LambdaExpression:
LEFT_PARANTHESIS FormalParameterList RIGHT_PARANTHESIS ARROW_RIGHT Block		{ fout<<"n"<<node_number<<"a"<<"[label=\"Seperator ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; func("->", "10120");}
| LEFT_PARANTHESIS RIGHT_PARANTHESIS ARROW_RIGHT Block		{ fout<<"n"<<node_number<<"a"<<"[label=\"Seperator ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; func("->", "1120");}
| IDENTIFIER ARROW_RIGHT Block		{ fout<<"n"<<node_number<<"a"<<"[label=\"Identifier ( "<<$1<<" )\"]"<<endl; func("->", "120");}
| LEFT_PARANTHESIS FormalParameterList RIGHT_PARANTHESIS ARROW_RIGHT Expression		{ fout<<"n"<<node_number<<"a"<<"[label=\"Seperator ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; func("->", "10120");}
| LEFT_PARANTHESIS RIGHT_PARANTHESIS ARROW_RIGHT Expression		{ fout<<"n"<<node_number<<"a"<<"[label=\"Seperator ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"b"<<"[label=\"Seperator ( "<<$2<<" )\"]"<<endl; func("->", "1120");}
| IDENTIFIER ARROW_RIGHT Expression		{ fout<<"n"<<node_number<<"a"<<"[label=\"Identifier ( "<<$1<<" )\"]"<<endl; func("->", "120");}
;

AssignmentExpression:
ConditionalExpression		{ func("AssignmentExpression", "0");}
| Assignment		{ func("AssignmentExpression", "0");}
;

Assignment:
DotIdentifiers EQUALS Expression	{ func("=", "020");}
| DotIdentifiers STAR_EQUALS Expression		{ func("*=", "020");}
| DotIdentifiers SLASH_EQUALS Expression		{ func("/=", "020");}
| DotIdentifiers PERCENT_EQUALS Expression		{ func("%=", "020");}
| DotIdentifiers PLUS_EQUALS Expression		{ func("+=", "020");}
| DotIdentifiers MINUS_EQUALS Expression		{ func("-=", "020");}
| DotIdentifiers LESS_THAN_LESS_THAN_EQUALS Expression		{ func("<<=", "020");}
| DotIdentifiers GREATER_THAN_GREATER_THAN_EQUALS Expression		{ func(">>=", "020");}
| DotIdentifiers GREATER_THAN_GREATER_THAN_GREATER_THAN_EQUALS Expression		{ func(">>>=", "020");}
| DotIdentifiers AMPERSAND_EQUALS Expression		{ func("&=", "020");}
| DotIdentifiers POWER_EQUALS Expression		{ func("^=", "020");}
| DotIdentifiers BAR_EQUALS Expression		{ func("|=", "020");}
| FieldAccess EQUALS Expression	{ func("=", "020");}
| FieldAccess STAR_EQUALS Expression		{ func("*=", "020");}
| FieldAccess SLASH_EQUALS Expression		{ func("/=", "020");}
| FieldAccess PERCENT_EQUALS Expression		{ func("%=", "020");}
| FieldAccess PLUS_EQUALS Expression		{ func("+=", "020");}
| FieldAccess MINUS_EQUALS Expression		{ func("-=", "020");}
| FieldAccess LESS_THAN_LESS_THAN_EQUALS Expression		{ func("<<=", "020");}
| FieldAccess GREATER_THAN_GREATER_THAN_EQUALS Expression		{ func(">>=", "020");}
| FieldAccess GREATER_THAN_GREATER_THAN_GREATER_THAN_EQUALS Expression		{ func(">>>=", "020");}
| FieldAccess AMPERSAND_EQUALS Expression		{ func("&=", "020");}
| FieldAccess POWER_EQUALS Expression		{ func("^=", "020");}
| FieldAccess BAR_EQUALS Expression		{ func("|=", "020");}
| ArrayAccess EQUALS Expression	{ func("=", "020");}
| ArrayAccess STAR_EQUALS Expression		{ func("*=", "020");}
| ArrayAccess SLASH_EQUALS Expression		{ func("/=", "020");}
| ArrayAccess PERCENT_EQUALS Expression		{ func("%=", "020");}
| ArrayAccess PLUS_EQUALS Expression		{ func("+=", "020");}
| ArrayAccess MINUS_EQUALS Expression		{ func("-=", "020");}
| ArrayAccess LESS_THAN_LESS_THAN_EQUALS Expression		{ func("<<=", "020");}
| ArrayAccess GREATER_THAN_GREATER_THAN_EQUALS Expression		{ func(">>=", "020");}
| ArrayAccess GREATER_THAN_GREATER_THAN_GREATER_THAN_EQUALS Expression		{ func(">>>=", "020");}
| ArrayAccess AMPERSAND_EQUALS Expression		{ func("&=", "020");}
| ArrayAccess POWER_EQUALS Expression		{ func("^=", "020");}
| ArrayAccess BAR_EQUALS Expression		{ func("|=", "020");}
;

ConditionalExpression:
ConditionalOrExpression		{ func("ConditionalExpression", "0");}
| ConditionalOrExpression QUESTION Expression COLON ConditionalExpression		{ func("? | :", "02020");}
| ConditionalOrExpression QUESTION Expression COLON LambdaExpression		{ func("? | :", "02020");}
;

ConditionalOrExpression:
ConditionalAndExpression		{ func("ConditionalOrExpression", "0");}
| ConditionalOrExpression BAR_BAR ConditionalAndExpression		{ func("||", "020");}
;

ConditionalAndExpression:
InclusiveOrExpression		{ func("ConditionalAndExpression", "0");}
| ConditionalAndExpression AMPERSAND_AMPERSAND InclusiveOrExpression		{ func("&&", "020");}
;

InclusiveOrExpression:
ExclusiveOrExpression		{ func("InclusiveOrExpression", "0");}
| InclusiveOrExpression BAR ExclusiveOrExpression		{ func("|", "020");}
;

ExclusiveOrExpression:
AndExpression		{ func("ExclusiveOrExpression", "0");}
| ExclusiveOrExpression POWER AndExpression		{ func("^", "020");}
;

AndExpression:
EqualityExpression		{ func("AndExpression", "0");}
| AndExpression AMPERSAND EqualityExpression		{ func("&", "020");}
;

EqualityExpression:
RelationalExpression		{ func("EqualityExpression", "0");}
| EqualityExpression EQUALS_EQUALS RelationalExpression		{ func("==", "020");}
| EqualityExpression EXCLAIM_EQUALS RelationalExpression		{ func("!=", "020");}
;

RelationalExpression:
ShiftExpression		{ func("RelationalExpression", "0");}
| RelationalExpression LESS_THAN ShiftExpression		{ func("<", "020");}
| RelationalExpression GREATER_THAN ShiftExpression		{ func(">", "020");}
| RelationalExpression LESS_THAN_EQUALS ShiftExpression		{ func("<=", "020");}
| RelationalExpression GREATER_THAN_EQUALS ShiftExpression		{ func(">=", "020");}
;

ShiftExpression:
AdditiveExpression		{ func("ShiftExpression", "0");}
| ShiftExpression LESS_THAN_LESS_THAN AdditiveExpression		{ func("<<", "020");}
| ShiftExpression GREATER_THAN_GREATER_THAN AdditiveExpression		{ func(">>", "020");}
| ShiftExpression GREATER_THAN_GREATER_THAN_GREATER_THAN AdditiveExpression		{ func(">>>", "020");}
;

AdditiveExpression:
MultiplicativeExpression		{ func("AdditiveExpression", "0");}
| AdditiveExpression PLUS MultiplicativeExpression		{ func("+", "020");}
| AdditiveExpression MINUS MultiplicativeExpression		{ func("-", "020");}
;

MultiplicativeExpression:
UnaryExpression		{ func("MultiplicativeExpression", "0");}
| MultiplicativeExpression STAR UnaryExpression		{ func("*", "020");}
| MultiplicativeExpression SLASH UnaryExpression		{ func("/", "020");}
| MultiplicativeExpression PERCENT UnaryExpression		{ func("%", "020");}
;

UnaryExpression:
PreIncrementExpression		{ func("UnaryExpression", "0");}
| PreDecrementExpression		{ func("UnaryExpression", "0");}
| PLUS UnaryExpression		{ func("+", "20");}
| MINUS UnaryExpression		{ func("-", "20");}
| UnaryExpressionNotPlusMinus		{ func("UnaryExpression", "0");}
;

PreIncrementExpression:
PLUS_PLUS UnaryExpression		{ func("Pre ++", "20");}
;

PreDecrementExpression:
MINUS_MINUS UnaryExpression		{ func("Pre --", "20");}
;

UnaryExpressionNotPlusMinus:
PostfixExpression		{ func("UnaryExpressionNotPlusMinus", "0");}
| TILDA UnaryExpression		{ func("~", "20");}
| EXCLAIM UnaryExpression		{ func("!", "20");}
| CastExpression        {func("UnaryExpressionNotPlusMinus","0");}
;

CastExpression:
LEFT_PARANTHESIS PrimitiveType RIGHT_PARANTHESIS UnaryExpression        {fout<<"n"<<node_number<<"a"<<"[label=\"Seperator ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; func("CastExpression","1010");}
| LEFT_PARANTHESIS PrimitiveType Dims RIGHT_PARANTHESIS UnaryExpression     {fout<<"n"<<node_number<<"a"<<"[label=\"Seperator ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; func("CastExpression","10010");}
| LEFT_PARANTHESIS Expression RIGHT_PARANTHESIS UnaryExpressionNotPlusMinus     {fout<<"n"<<node_number<<"a"<<"[label=\"Seperator ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"c"<<"[label=\"Seperator ( "<<$3<<" )\"]"<<endl; func("CastExpression","1010");}
| LEFT_PARANTHESIS DotIdentifiers Dims RIGHT_PARANTHESIS UnaryExpressionNotPlusMinus        {fout<<"n"<<node_number<<"a"<<"[label=\"Seperator ( "<<$1<<" )\"]"<<endl; fout<<"n"<<node_number<<"d"<<"[label=\"Seperator ( "<<$4<<" )\"]"<<endl; func("CastExpression","10010");}
;

PostfixExpression:
Primary		{ func("PostfixExpression", "0");}
| DotIdentifiers		{ func("PostfixExpression", "0");}
| PostIncrementExpression		{ func("PostfixExpression", "0");}
| PostDecrementExpression		{ func("PostfixExpression", "0");}
;

PostIncrementExpression:
PostfixExpression PLUS_PLUS		{ func("Post ++", "02");}
;

PostDecrementExpression:
PostfixExpression MINUS_MINUS		{ func("Post --", "02");}
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
    yyparse();
    fout<<"}"<<endl;
    exit(0);
}