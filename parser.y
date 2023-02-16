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

%token<s> INTEGRAL_TYPE FLOAT_POINT_TYPE BOOLEAN_TYPE SQUARE_LEFT SQUARE_RIGHT TYPEIDENTIFIER AND LARROW RARROW QUESTION SUPER CLASS PUBLIC PRIVATE IMPLEMENTS PERMITS CURLY_LEFT CURLY_RIGHT SEMI_COLON COMMA EQUALS IDENTIFIER DOT VOID THIS FINAL THROWS STATIC LEFT_BRACKET RIGHT_BRACKET ENUM RECORD


%type<s> PrimitiveType NumericType Annotations Annotation ClassOrInterfaceType TypeVariable Dims  Dim


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
TYPEIDENTIFIER 
| TYPEIDENTIFIER TypeBound 
| TypeParameterModifiers TYPEIDENTIFIER 
| TypeParameterModifiers TYPEIDENTIFIER TypeBound
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
CLASS TYPEIDENTIFIER ClassBody 
| CLASS TYPEIDENTIFIER ClassPermits ClassBody 
| CLASS TYPEIDENTIFIER ClassImplements ClassBody 
| CLASS TYPEIDENTIFIER ClassImplements ClassPermits ClassBody 
| CLASS TYPEIDENTIFIER ClassExtends ClassBody 
| CLASS TYPEIDENTIFIER ClassExtends ClassPermits ClassBody 
| CLASS TYPEIDENTIFIER ClassExtends ClassImplements ClassBody 
| CLASS TYPEIDENTIFIER ClassExtends ClassImplements ClassPermits ClassBody 
| CLASS TYPEIDENTIFIER TypeParameters ClassBody 
| CLASS TYPEIDENTIFIER TypeParameters ClassPermits ClassBody 
| CLASS TYPEIDENTIFIER TypeParameters ClassImplements ClassBody 
| CLASS TYPEIDENTIFIER TypeParameters ClassImplements ClassPermits ClassBody 
| CLASS TYPEIDENTIFIER TypeParameters ClassExtends ClassBody 
| CLASS TYPEIDENTIFIER TypeParameters ClassExtends ClassPermits ClassBody 
| CLASS TYPEIDENTIFIER TypeParameters ClassExtends ClassImplements ClassBody 
| CLASS TYPEIDENTIFIER TypeParameters ClassExtends ClassImplements ClassPermits ClassBody 
| ClassModifiers CLASS TYPEIDENTIFIER ClassBody 
| ClassModifiers CLASS TYPEIDENTIFIER ClassPermits ClassBody 
| ClassModifiers CLASS TYPEIDENTIFIER ClassImplements ClassBody 
| ClassModifiers CLASS TYPEIDENTIFIER ClassImplements ClassPermits ClassBody 
| ClassModifiers CLASS TYPEIDENTIFIER ClassExtends ClassBody 
| ClassModifiers CLASS TYPEIDENTIFIER ClassExtends ClassPermits ClassBody 
| ClassModifiers CLASS TYPEIDENTIFIER ClassExtends ClassImplements ClassBody 
| ClassModifiers CLASS TYPEIDENTIFIER ClassExtends ClassImplements ClassPermits ClassBody 
| ClassModifiers CLASS TYPEIDENTIFIER TypeParameters ClassBody 
| ClassModifiers CLASS TYPEIDENTIFIER TypeParameters ClassPermits ClassBody 
| ClassModifiers CLASS TYPEIDENTIFIER TypeParameters ClassImplements ClassBody 
| ClassModifiers CLASS TYPEIDENTIFIER TypeParameters ClassImplements ClassPermits ClassBody 
| ClassModifiers CLASS TYPEIDENTIFIER TypeParameters ClassExtends ClassBody 
| ClassModifiers CLASS TYPEIDENTIFIER TypeParameters ClassExtends ClassPermits ClassBody 
| ClassModifiers CLASS TYPEIDENTIFIER TypeParameters ClassExtends ClassImplements ClassBody 
| ClassModifiers CLASS TYPEIDENTIFIER TypeParameters ClassExtends ClassImplements ClassPermits ClassBody
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
| PackageName DOT TYPEIDENTIFIER 
| PackageName DOT TYPEIDENTIFIER TypeArguments 
| PackageName DOT Annotations TYPEIDENTIFIER 
| PackageName DOT Annotations TYPEIDENTIFIER TypeArguments
| UnannClassOrInterfaceType DOT TYPEIDENTIFIER 
| UnannClassOrInterfaceType DOT TYPEIDENTIFIER TypeArguments 
| UnannClassOrInterfaceType DOT Annotations TYPEIDENTIFIER 
| UnannClassOrInterfaceType DOT Annotations TYPEIDENTIFIER TypeArguments  
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
IDENTIFIER LEFT_BRACKET RIGHT_BRACKET 
| IDENTIFIER LEFT_BRACKET RIGHT_BRACKET Dims 
| IDENTIFIER LEFT_BRACKET FormalParameterList RIGHT_BRACKET 
| IDENTIFIER LEFT_BRACKET FormalParameterList RIGHT_BRACKET Dims 
| IDENTIFIER LEFT_BRACKET ReceiverParameter COMMA RIGHT_BRACKET 
| IDENTIFIER LEFT_BRACKET ReceiverParameter COMMA RIGHT_BRACKET Dims 
| IDENTIFIER LEFT_BRACKET ReceiverParameter COMMA FormalParameterList RIGHT_BRACKET 
| IDENTIFIER LEFT_BRACKET ReceiverParameter COMMA FormalParameterList RIGHT_BRACKET Dims
;

ReceiverParameter:
UnannType THIS 
| UnannType IDENTIFIER DOT THIS 
| Annotations UnannType THIS 
| Annotations UnannType IDENTIFIER DOT THIS
;

FormalParameterList:
FormalParameter 
| FormalParameter CommaFormalParameter 
;

CommaFormalParameter:
CommaFormalParameter COMMA FormalParameter
| COMMA FormalParameter
;

FormalParameter:
UnannType VariableDeclaratorId 
| VariableModifiers UnannType VariableDeclaratorId 
| VariableArityParameter
;

VariableModifiers:
VariableModifiers VariableModifier
| VariableModifier
;

VariableArityParameter:
UnannType DOT DOT DOT IDENTIFIER 
| UnannType Annotations DOT DOT DOT IDENTIFIER 
| VariableModifiers UnannType DOT DOT DOT IDENTIFIER 
| VariableModifiers UnannType Annotations DOT DOT DOT IDENTIFIER
;

VariableModifier:
Annotation
| FINAL
;

Throws:
THROWS ExceptionTypeList
;

ExceptionTypeList:
ExceptionType
| ExceptionType CommaExceptionType
;

CommaExceptionType:
CommaExceptionType COMMA ExceptionType
| COMMA ExceptionType
;

ExceptionType:
ClassType
| TypeVariable
;

MethodBody:
Block
| SEMI_COLON
;

InstanceInitializer:
Block
;

StaticInitializer:
STATIC Block
;

ConstructorDeclaration:
ConstructorDeclarator ConstructorBody 
| ConstructorDeclarator Throws ConstructorBody 
| ConstructorModifiers ConstructorDeclarator ConstructorBody 
| ConstructorModifiers ConstructorDeclarator Throws ConstructorBody 
;

ConstructorModifiers:
ConstructorModifiers ConstructorModifier
;

ConstructorModifier:
Annotation
| PUBLIC
| PRIVATE
;

ConstructorDeclarator:
SimpleTypeName LEFT_BRACKET RIGHT_BRACKET 
| SimpleTypeName LEFT_BRACKET FormalParameterList RIGHT_BRACKET 
| SimpleTypeName LEFT_BRACKET ReceiverParameter COMMA RIGHT_BRACKET 
| SimpleTypeName LEFT_BRACKET ReceiverParameter COMMA FormalParameterList RIGHT_BRACKET 
| TypeParameters SimpleTypeName LEFT_BRACKET RIGHT_BRACKET 
| TypeParameters SimpleTypeName LEFT_BRACKET FormalParameterList RIGHT_BRACKET 
| TypeParameters SimpleTypeName LEFT_BRACKET ReceiverParameter COMMA RIGHT_BRACKET 
| TypeParameters SimpleTypeName LEFT_BRACKET ReceiverParameter COMMA FormalParameterList RIGHT_BRACKET
;

SimpleTypeName:
TYPEIDENTIFIER
;

ConstructorBody:
CURLY_LEFT CURLY_RIGHT 
| CURLY_LEFT BlockStatements CURLY_RIGHT 
| CURLY_LEFT ExplicitConstructorInvocation CURLY_RIGHT 
| CURLY_LEFT ExplicitConstructorInvocation BlockStatements CURLY_RIGHT 
;

ExplicitConstructorInvocation:
THIS LEFT_BRACKET RIGHT_BRACKET SEMI_COLON 
| THIS LEFT_BRACKET ArgumentList RIGHT_BRACKET SEMI_COLON 
| TypeArguments THIS LEFT_BRACKET RIGHT_BRACKET SEMI_COLON 
| TypeArguments THIS LEFT_BRACKET ArgumentList RIGHT_BRACKET SEMI_COLON
| SUPER LEFT_BRACKET RIGHT_BRACKET SEMI_COLON 
| SUPER LEFT_BRACKET ArgumentList RIGHT_BRACKET SEMI_COLON 
| TypeArguments SUPER LEFT_BRACKET RIGHT_BRACKET SEMI_COLON 
| TypeArguments SUPER LEFT_BRACKET ArgumentList RIGHT_BRACKET SEMI_COLON 
| ExpressionName DOT SUPER LEFT_BRACKET RIGHT_BRACKET SEMI_COLON 
| ExpressionName DOT SUPER LEFT_BRACKET ArgumentList RIGHT_BRACKET SEMI_COLON 
| ExpressionName DOT TypeArguments SUPER LEFT_BRACKET RIGHT_BRACKET SEMI_COLON 
| ExpressionName DOT TypeArguments SUPER LEFT_BRACKET ArgumentList RIGHT_BRACKET SEMI_COLON
| Primary DOT SUPER LEFT_BRACKET RIGHT_BRACKET SEMI_COLON 
| Primary DOT SUPER LEFT_BRACKET ArgumentList RIGHT_BRACKET SEMI_COLON 
| Primary DOT TypeArguments SUPER LEFT_BRACKET RIGHT_BRACKET SEMI_COLON 
| Primary DOT TypeArguments SUPER LEFT_BRACKET ArgumentList RIGHT_BRACKET SEMI_COLON
;

EnumDeclaration:
ENUM TYPEIDENTIFIER EnumBody 
| ENUM TYPEIDENTIFIER ClassImplements EnumBody 
| ClassModifiers ENUM TYPEIDENTIFIER EnumBody 
| ClassModifiers ENUM TYPEIDENTIFIER ClassImplements EnumBody 
;

EnumBody:
CURLY_LEFT CURLY_RIGHT 
| CURLY_LEFT EnumBodyDeclarations CURLY_RIGHT 
| CURLY_LEFT COMMA CURLY_RIGHT 
| CURLY_LEFT COMMA EnumBodyDeclarations CURLY_RIGHT 
| CURLY_LEFT EnumConstantList CURLY_RIGHT 
| CURLY_LEFT EnumConstantList EnumBodyDeclarations CURLY_RIGHT 
| CURLY_LEFT EnumConstantList COMMA CURLY_RIGHT 
| CURLY_LEFT EnumConstantList COMMA EnumBodyDeclarations CURLY_RIGHT
;

EnumConstantList:
EnumConstant 
| EnumConstant CommaEnumConstant 
;

CommaEnumConstant:
CommaEnumConstant COMMA EnumConstant
| COMMA EnumConstant
;

EnumConstant:
IDENTIFIER 
| IDENTIFIER ClassBody
| IDENTIFIER LEFT_BRACKET RIGHT_BRACKET
| IDENTIFIER LEFT_BRACKET ArgumentList RIGHT_BRACKET
| IDENTIFIER LEFT_BRACKET RIGHT_BRACKET ClassBody
| IDENTIFIER LEFT_BRACKET ArgumentList RIGHT_BRACKET ClassBody
| EnumConstantModifiers IDENTIFIER ClassBody
| EnumConstantModifiers IDENTIFIER LEFT_BRACKET RIGHT_BRACKET
| EnumConstantModifiers IDENTIFIER LEFT_BRACKET ArgumentList RIGHT_BRACKET
| EnumConstantModifiers IDENTIFIER LEFT_BRACKET RIGHT_BRACKET ClassBody
| EnumConstantModifiers IDENTIFIER LEFT_BRACKET ArgumentList RIGHT_BRACKET ClassBody
;

EnumConstantModifiers:
EnumConstantModifiers EnumConstantModifier
| EnumConstantModifier
;

EnumConstantModifier:
Annotation
;

EnumBodyDeclarations:
SEMI_COLON
| SEMI_COLON ClassBodyDeclarations
;

RecordDeclaration:
RECORD TYPEIDENTIFIER RecordHeader RecordBody 
| RECORD TYPEIDENTIFIER RecordHeader ClassImplements RecordBody 
| RECORD TYPEIDENTIFIER TypeParameters RecordHeader RecordBody 
| RECORD TYPEIDENTIFIER TypeParameters RecordHeader ClassImplements RecordBody 
| ClassModifiers RECORD TYPEIDENTIFIER RecordHeader RecordBody 
| ClassModifiers RECORD TYPEIDENTIFIER RecordHeader ClassImplements RecordBody 
| ClassModifiers RECORD TYPEIDENTIFIER TypeParameters RecordHeader RecordBody 
| ClassModifiers RECORD TYPEIDENTIFIER TypeParameters RecordHeader ClassImplements RecordBody 
;

RecordHeader:
LEFT_BRACKET RIGHT_BRACKET 
| LEFT_BRACKET RecordComponentList RIGHT_BRACKET 
;

RecordComponentList:
RecordComponent
| RecordComponent CommaRecordComponent
;

CommaRecordComponent:
CommaRecordComponent COMMA RecordComponent
| COMMA RecordComponent
;

RecordComponent:
UnannType Identifier 
| RecordComponentModifiers UnannType Identifier
| VariableArityRecordComponent
;

VariableArityRecordComponent:
UnannType DOT DOT DOT IDENTIFIER 
| UnannType Annotations DOT DOT DOT IDENTIFIER 
| RecordComponentModifiers UnannType DOT DOT DOT IDENTIFIER 
| RecordComponentModifiers UnannType Annotations DOT DOT DOT IDENTIFIER
;

RecordComponentModifier:
Annotation
;

RecordBody:
CURLY_LEFT CURLY_RIGHT
| CURLY_LEFT RecordBodyDeclarations CURLY_RIGHT
;

RecordBodyDeclarations:
RecordBodyDeclarations RecordBodyDeclaration
| RecordBodyDeclaration
;

RecordBodyDeclaration:
ClassBodyDeclaration
| CompactConstructorDeclaration

CompactConstructorDeclaration:
SimpleTypeName ConstructorBody
| ConstructorModifiers SimpleTypeName ConstructorBody



































%%

int main(){
    yyparse();
}


