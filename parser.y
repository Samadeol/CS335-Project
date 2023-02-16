%{
#include <bits/stdc++.h>
using namespace std;
int yylex();
void yyerror(const char* error){
    cout<<"Error encountered\n";
}
%}

%union{



}

%token<s> INTEGRAL_TYPE FLOAT_POINT_TYPE BOOLEAN_TYPE SQUARE_LEFT SQUARE_RIGHT TYPEIDENTIFIER AND LARROW RARROW QUESTION SUPER CLASS PUBLIC PRIVATE IMPLEMENTS PERMITS CURLY_LEFT CURLY_RIGHT SEMI_COLON COMMA EQUALS IDENTIFIER DOT VOID


%type<s> Primitive_Type NumericType Annotations Annotation ClassOrInterfaceType TypeVariable Dims  Dim


%%

//---------------------------Types--------------------//

Type:
PrimitiveType
| ReferenceType
;

PrimitiveType:
NumericType
| Annotations NumericType 
| BOOLEAN_TYPE
| Annotations BOOLEAN_TYPE 
;

Annotations:
Annotations Annotation
| Annotation
;

NumericType:
INTEGRAL_TYPE
| FLOAT_POINT_TYPE
;

ArrayType:
PrimitiveType Dims
| ClassType Dims
| TypeVariable Dims
;

Dims:
Dims Dim
| Dim
;

Dim:
Annotations SQUARE_LEFT SQUARE_RIGHT
| SQUARE_LEFT SQUARE_RIGHT
; 

ReferenceType:
ClassType
| TypeVariable
| ArrayType
;

ClassType:
TYPEIDENTIFIER 
| TYPEIDENTIFIER TypeArguments 
| Annotations TYPEIDENTIFIER 
| Annotations TYPEIDENTIFIER TypeArguments 
| PackageName DOT TYPEIDENTIFIER 
| PackageName DOT TYPEIDENTIFIER TypeArguments 
| PackageName DOT Annotations TYPEIDENTIFIER 
| PackageName DOT Annotations TYPEIDENTIFIER TypeArguments 
| ClassType DOT TYPEIDENTIFIER 
| ClassType DOT TYPEIDENTIFIER TypeArguments 
| ClassType DOT Annotations TYPEIDENTIFIER 
| ClassType DOT Annotations TYPEIDENTIFIER TypeArguments

TypeVariable:
TYPEIDENTIFIER 
| Annotations TYPEIDENTIFIER

TypeParameter:
TypeIdentifier 
| TypeIdentifier TypeBound 
| TypeParameterModifiers TypeIdentifier 
| TypeParameterModifiers TypeIdentifier TypeBound
;

TypeParameterModifiers:
TypeParameterModifiers TypeParameterModifier
| TypeParameterModifier
;

TypeParameterModifier:
Annotation
;

TypeBound:
EXTENDS TypeVariable
| EXTENDS ClassType 
| EXTENDS ClassType AdditionalBounds 
;

AdditionalBounds:
AdditionalBounds AdditionalBound
| AdditionalBound
;

AdditionalBound:
AND ClassType
;

TypeArguments:
LARROW TypeArgumentList RARROW
;

TypeArgumentList:
TypeArgument 
| TypeArgument CommaTypeArgument 
;

CommaTypeArgument:
CommaTypeArgument COMMA TypeArgument
| COMMA TypeArgument
;

TypeArgument:
ReferenceType
| Wildcard
;

Wildcard:
QUESTION 
| QUESTION WildcardBounds 
| Annotations QUESTION 
| Annotations QUESTION WildcardBounds 
;

WildcardBounds:
EXTENDS ReferenceType
| SUPER ReferenceType

//--------------------------- Classes--------------------//

ClassDeclaration:
NormalClassDeclaration
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
| ClassModifiers class TypeIdentifier ClassBody 
| ClassModifiers class TypeIdentifier ClassPermits ClassBody 
| ClassModifiers class TypeIdentifier ClassImplements ClassBody 
| ClassModifiers class TypeIdentifier ClassImplements ClassPermits ClassBody 
| ClassModifiers class TypeIdentifier ClassExtends ClassBody 
| ClassModifiers class TypeIdentifier ClassExtends ClassPermits ClassBody 
| ClassModifiers class TypeIdentifier ClassExtends ClassImplements ClassBody 
| ClassModifiers class TypeIdentifier ClassExtends ClassImplements ClassPermits ClassBody 
| ClassModifiers class TypeIdentifier TypeParameters ClassBody 
| ClassModifiers class TypeIdentifier TypeParameters ClassPermits ClassBody 
| ClassModifiers class TypeIdentifier TypeParameters ClassImplements ClassBody 
| ClassModifiers class TypeIdentifier TypeParameters ClassImplements ClassPermits ClassBody 
| ClassModifiers class TypeIdentifier TypeParameters ClassExtends ClassBody 
| ClassModifiers class TypeIdentifier TypeParameters ClassExtends ClassPermits ClassBody 
| ClassModifiers class TypeIdentifier TypeParameters ClassExtends ClassImplements ClassBody 
| ClassModifiers class TypeIdentifier TypeParameters ClassExtends ClassImplements ClassPermits ClassBody
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
LARROW TyperParameterList RARROW
;

TyperParameterList:
TypeParameter 
| TypeParameter CommaInterfaceType 
;

CommaTypeParameter:
CommaTypeParameter COMMA TypeParameter
| COMMA TypeParameter
;

ClassExtends:
EXTENDS ClassType
;

ClassImplements:
IMPLEMENTS InterfaceTypeList

InterfaceTypeList:
InterfaceType 
| InterfaceType CommaInterfaceType 
;

CommaInterfaceType:
CommaInterfaceType COMMA InterfaceType
| COMMA InterfaceType
;

ClassPermits:
PERMITS TypeNames
;

TypeNames:
TypeName 
| TypeName CommaTypeName 
;

CommaTypeName:
CommaTypeName COMMA TypeName
| COMMA TypeName
;

ClassBody:
CURLY_LEFT ClassBodyDeclarations CURLY_RIGHT
;

ClassBodyDeclarations:
ClassBodyDeclarations ClassBodyDeclaration
| ClassBodyDeclaration
|
;

ClassBodyDeclaration:
ClassMemberDeclaration
| InstanceInitializer
| StaticInitializer
| ConstructorDeclaration
;

ClassMemberDeclaration:
FieldDeclaration
MethodDeclaration
ClassDeclaration
InterfaceDeclaration
SEMI_COLON
;

FieldDeclaration:
UnannType VariableDeclaratorList SEMI_COLON 
| FieldModifiers UnannType VariableDeclaratorList SEMI_COLON 
;

FieldModifiers:
FieldModifiers FieldModifier
| FieldModifier
;

FieldModifier:
PUBLIC
| PRIVATE
| Annotation
;

VariableDeclaratorList:
VariableDeclarator 
| VariableDeclarator CommaVariableDeclarator 
;

CommaVariableDeclarator:
CommaVariableDeclarator COMMA VariableDeclarator
| COMMA VariableDeclarator
;

VariableDeclarator:
VariableDeclaratorId 
| VariableDeclaratorId EQUALS VariableInitializer
;

VariableDeclaratorId:
IDENTIFIER 
| IDENTIFIER Dims
;

VariableInitializer:
Expression
| ArrayInitializer
;

UnannType:
UnannPrimitiveType
| UnannReferenceType
;

UnannPrimitiveType:
NumericType
| BOOLEAN_TYPE
;

UnannReferenceType:
UnannClassOrInterfaceType
| UnannTypeVariable
| UnannArrayType
;

UnannClassOrInterfaceType:
UnannClassType 
| UnannInterfaceType 
;

UnannClassType:
TYPEIDENTIFIER
| TYPEIDENTIFIER TypeArguments
| PackageName DOT TypeIdentifier 
| PackageName DOT TypeIdentifier TypeArguments 
| PackageName DOT Annotations TypeIdentifier 
| PackageName DOT Annotations TypeIdentifier TypeArguments
| UnannClassOrInterfaceType DOT TypeIdentifier 
| UnannClassOrInterfaceType DOT TypeIdentifier TypeArguments 
| UnannClassOrInterfaceType DOT Annotations TypeIdentifier 
| UnannClassOrInterfaceType DOT Annotations TypeIdentifier TypeArguments  
;

UnannInterfaceType:
UnannClassType
;

UnannTypeVariable:
TYPEIDENTIFIER
;

UnannArrayType:
UnannPrimitiveType Dims
| UnannClassOrInterfaceType Dims
| UnannTypeVariable Dims 
;

MethodDeclaration:
MethodHeader MethodBody 
| MethodModifiers MethodHeader MethodBody 
;

MethodModifiers:
MethodModifiers MethodModifier
| MethodModifier
;

MethodModifier:
Annotation
| PUBLIC
| PRIVATE
;

MethodHeader:
Result MethodDeclarator 
| Result MethodDeclarator Throws
| TypeParameters Result MethodDeclarator 
| TypeParameters Result MethodDeclarator Throws 
| TypeParameters Annotations Result MethodDeclarator 
| TypeParameters Annotations Result MethodDeclarator Throws
;

Result:
UnannType
| VOID
;

MethodDeclarator:































%%

int main(){
    yyparse();
}


