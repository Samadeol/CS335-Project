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

%token<s> INTEGRAL_TYPE FLOAT_POINT_TYPE BOOLEAN_TYPE SQUARE_LEFT SQUARE_RIGHT TYPEIDENTIFIER AND LARROW RARROW QUESTION SUPER CLASS PUBLIC PRIVATE IMPLEMENTS PERMITS CURLY_LEFT CURLY_RIGHT SEMI_COLON COMMA EQUALS IDENTIFIER DOT VOID THIS FINAL THROWS STATIC LEFT_BRACKET RIGHT_BRACKET ENUM RECORD VAR COLON IF ELSE ASSERT WHILE FOR BREAK YIELD CONTINUE RETURN THROW SYNCHRONIZED TRY CATCH BAR FINALLY


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
| Annotations BOOLEAN
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
;

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

//----------------------BLOCK-----------------------------------------

Block:
CURLY_LEFT CURLY_RIGHT
| CURLY_LEFT BlockStatements CURLY_RIGHT
;

BlockStatements:
BlockStatementS 
;

BlockStatementS:
BlockStatementS BlockStatement
| BlockStatement 
;

BlockStatement:
LocalClassOrInterfaceDeclaration
| LocalVariableDeclarationStatement
| Statement 
;

LocalClassOrInterfaceDeclaration:
ClassDeclaration
| NormalInterfaceDeclaration
;

LocalVariableDeclarationStatement:
LocalVariableDeclaration SEMI_COLON
;

LocalVariableDeclaration:
LocalVariableType VariableDeclaratorList 
| VariableModifiers LocalVariableType VariableDeclaratorList 
;

LocalVariableType:
UnannType
| VAR
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
| StatementWithoutTrailingSubstatement
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
;

IfThenStatement:
IF LEFT_BRACKET Expression RIGHT_BRACKET Statement
;

IfThenElseStatement:
IF LEFT_BRACKET Expression RIGHT_BRACKET StatementNoShortIf ELSE Statement
;

IfThenElseStatementNoShortIf:
IF LEFT_BRACKET Expression RIGHT_BRACKET StatementNoShortIf ELSE StatementNoShortIf
;

AssertStatement:
ASSERT Expression SEMI_COLON
ASSERT Expression COLON Expression SEMI_COLON
;

WhileStatement:
WHILE LEFT_BRACKET Expression RIGHT_BRACKET Statement
;

WhileStatementNoShortIf:
WHILE LEFT_BRACKET Expression RIGHT_BRACKET StatementNoShortIf
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
FOR LEFT_BRACKET SEMI_COLON SEMI_COLON RIGHT_BRACKET Statement 
| FOR LEFT_BRACKET SEMI_COLON SEMI_COLON ForUpdate RIGHT_BRACKET Statement 
| FOR LEFT_BRACKET SEMI_COLON Expression SEMI_COLON RIGHT_BRACKET Statement 
| FOR LEFT_BRACKET SEMI_COLON Expression SEMI_COLON ForUpdate RIGHT_BRACKET Statement 
| FOR LEFT_BRACKET ForInit SEMI_COLON SEMI_COLON RIGHT_BRACKET Statement 
| FOR LEFT_BRACKET ForInit SEMI_COLON SEMI_COLON ForUpdate RIGHT_BRACKET Statement 
| FOR LEFT_BRACKET ForInit SEMI_COLON Expression SEMI_COLON RIGHT_BRACKET Statement 
| FOR LEFT_BRACKET ForInit SEMI_COLON Expression SEMI_COLON ForUpdate RIGHT_BRACKET Statement
;

BasicForStatementNoShortIf:
FOR LEFT_BRACKET SEMI_COLON SEMI_COLON RIGHT_BRACKET StatementNoShortIf 
| FOR LEFT_BRACKET SEMI_COLON SEMI_COLON ForUpdate RIGHT_BRACKET StatementNoShortIf 
| FOR LEFT_BRACKET SEMI_COLON Expression SEMI_COLON RIGHT_BRACKET StatementNoShortIf 
| FOR LEFT_BRACKET SEMI_COLON Expression SEMI_COLON ForUpdate RIGHT_BRACKET StatementNoShortIf 
| FOR LEFT_BRACKET ForInit SEMI_COLON SEMI_COLON RIGHT_BRACKET StatementNoShortIf 
| FOR LEFT_BRACKET ForInit SEMI_COLON SEMI_COLON ForUpdate RIGHT_BRACKET StatementNoShortIf 
| FOR LEFT_BRACKET ForInit SEMI_COLON Expression SEMI_COLON RIGHT_BRACKET StatementNoShortIf 
| FOR LEFT_BRACKET ForInit SEMI_COLON Expression SEMI_COLON ForUpdate RIGHT_BRACKET StatementNoShortIf
;

ForInit:
StatementExpressionList
| LocalVariableDeclaration
;

ForUpdate:
StatementExpressionList
;

StatementExpressionList:
StatementExpression 
| StatementExpression CommaStatementExpression
;

CommaStatementExpression:
CommaStatementExpression COMMA StatementExpression
| COMMA StatementExpression
;

EnhancedForStatement:
FOR LEFT_BRACKET LocalVariableDeclaration COLON Expression RIGHT_BRACKET Statement
;

EnhancedForStatementNoShortIf:
FOR LEFT_BRACKET LocalVariableDeclaration COLON Expression RIGHT_BRACKET StatementNoShortIf
;

BreakStatement:
BREAK SQUARE_LEFT IDENTIFIER RIGHT_BRACKET SEMI_COLON
;

YieldStatement:
YIELD Expression SEMI_COLON
;

ContinueStatement:
CONTINUE SQUARE_LEFT IDENTIFIER SQUARE_RIGHT SEMI_COLON
;

ReturnStatement:
RETURN SQUARE_LEFT Expression SQUARE_RIGHT SEMI_COLON
;

ThrowStatement:
THROW Expression
;

SynchronizedStatement:
SYNCHRONIZED LEFT_BRACKET Expression RIGHT_BRACKET Block
;

TryStatement:
TRY Block Catches
| TRY Block Finally
| TRY Block Catches Finally
| TryWithResourcesStatement
;

Catches:
CatchClauses
;

CatchClauses:
CatchClauses CatchClause
| CatchClause
;

CatchClause:
CATCH LEFT_BRACKET CatchFormalParameter RIGHT_BRACKET Block
;

CatchFormalParameter:
CatchType VariableDeclaratorId 
| VariableModifiers CatchType VariableDeclaratorId 
;

CatchType:
UnannClassType
| UnannClassType BarClassType
;

BarClassType:
BarClassType BAR ClassType
| BAR ClassType
;

Finally:
FINALLY Block
;

TryWithResourcesStatement:
TRY ResourceSpecification Block 
| TRY ResourceSpecification Block Finally 
| TRY ResourceSpecification Block Catches 
| TRY ResourceSpecification Block Catches Finally 
;

ResourceSpecification:
LEFT_BRACKET ResourceList RIGHT_BRACKET
| LEFT_BRACKET ResourceList SEMI_COLON RIGHT_BRACKET
;

ResourceList:
Resource 
| Resource SemiColonResource
;

SemiColonResource:
SemiColonResource SEMI_COLON Resource
| SEMI_COLON Resource
;

Resource:
LocalVariableDeclaration
| VariableAccess
;

Pattern:
TypePattern
;

TypePattern:
LocalVariableDeclaration
;

VariableAccess:
ExpressionName
| FieldAccess
;
















































%%

int main(){
    yyparse();
}


