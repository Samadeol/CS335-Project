%{
#include <bits/stdc++.h>
using namespace std;
int yylex();
void yyerror(const char* error){
    cout<<"Error encountered\n";
}
%}

%union{

char[100] s;

}

%token <s> AND AND_AND ASSERT ASSIGNMENT_OPERATORS ASTERISK ATR BAR BOOLEAN BOOLEAN_TYPE BREAK CATCH CLASS COLON COLONTWICE COMMA CONTINUE CURLY_LEFT CURLY_RIGHT DOT ELSE ENUM EQUALS EQUAL_EQUAL EXCLAIM EXCLAIM_EQUAL EXTENDS FINAL FINALLY FLOAT_POINT_TYPE FOR GREATER GREATER_EQUAL GREATER_GREATER GREATER_GREATER_GREATER IDENTIFIER IF IMPLEMENTS INSTANCEOF INTEGRAL_TYPE LARROW LEFTARROW LESS LESS_EQUAL LESS_LESS LITERAL MINUS MINUS_MINUS NEW OR OR_OR PARA_LEFT PARA_RIGHT PERCENT PERMITS PLUS PLUS_PLUS POWER PRIVATE PUBLIC QUESTION RARROW RECORD RETURN SEMI_COLON SLASH SQUARE_LEFT SQUARE_RIGHT STATIC SUPER SYNCHRONIZED THIS THROW THROWS TILDE TRY VAR VOID WHILE YIELD
%type <s> AdditionalBound AdditionalBounds AdditiveExpression AmbiguousName AndExpression Annotation Annotations ArgumentList ArrayAccess ArrayCreationExpression ArrayInitializer ArrayType AssertStatement Assignment AssignmentExpression BarClassType BasicForStatement BasicForStatementNoShortIf Block BlockStatement BlockStatementS BlockStatements BreakStatement CastExpression CatchClause CatchClauses CatchFormalParameter CatchType Catches ClassBody ClassBodyDeclaration ClassBodyDeclarations ClassDeclaration ClassExtends ClassImplements ClassInstanceCreationExpression ClassLiteral ClassMemberDeclaration ClassModifier ClassModifiers ClassOrInterfaceTypeToInstantiate ClassPermits ClassType ClassTypeList CommaClassType CommaEnumConstant CommaExceptionType CommaFormalParameter CommaIdentifiers CommaLambdaParameters CommaRecordComponent CommaStatementExpression CommaTypeArgument CommaTypeName CommaTypeParameter CommaVariableDeclarator CommaVariableInitializer CompactConstructorDeclaration ConditionalAndExpression ConditionalExpression ConditionalOrExpression ConstantExpression ConstructorBody ConstructorDeclaration ConstructorDeclarator ConstructorModifier ConstructorModifiers ContinueStatement Dim DimExpr DimExprs Dims DotIdentifiers EmptyStatement EnhancedForStatement EnhancedForStatementNoShortIf EnumBody EnumBodyDeclarations EnumConstant EnumConstantList EnumConstantModifier EnumConstantModifiers EnumDeclaration EqualityExpression ExceptionType ExceptionTypeList ExclusiveOrExpression ExplicitConstructorInvocation Expression ExpressionName ExpressionStatement Expressions FieldAccess FieldDeclaration FieldModifier FieldModifiers Finally ForInit ForStatement ForStatementNoShortIf ForUpdate FormalParameter FormalParameterList IfThenElseStatement IfThenElseStatementNoShortIf IfThenStatement InclusiveOrExpression InstanceInitializer InstanceofExpression LabeledStatement LabeledStatementNoShortIf LambdaBody LambdaExpression LambdaParameter LambdaParameterList LambdaParameterType LambdaParameters LeftHandSide LocalVariableDeclaration LocalVariableDeclarationStatement LocalVariableType MethodBody MethodDeclaration MethodDeclarator MethodHeader MethodInvocation MethodModifier MethodModifiers MethodReference MultiplicativeExpression NormalClassDeclaration NumericType Pattern PostDecrementExpression PostIncrementExpression PostfixExpression PreDecrementExpression PreIncrementExpression Primary PrimaryNoNewArray PrimitiveType ReceiverParameter RecordBody RecordBodyDeclaration RecordBodyDeclarations RecordComponent RecordComponentList RecordDeclaration RecordHeader ReferenceType RelationalExpression Resource ResourceList ResourceSpecification Result ReturnStatement SemiColonResource ShiftExpression Square Statement StatementExpression StatementExpressionList StatementNoShortIf StatementWithoutTrailingSubstatement StaticInitializer SynchronizedStatement ThrowStatement Throws TryStatement TryWithResourcesStatement Type TypeArgument TypeArgumentList TypeArguments TypeBound TypeName TypeNames TypeParameter TypeParameterModifier TypeParameterModifiers TypeParameters TypePattern TypeVariable TyperParameterList UnannArrayType UnannClassType UnannPrimitiveType UnannReferenceType UnannType UnaryExpression UnaryExpressionNotPlusMinus UnqualifiedClassInstanceCreationExpression VariableAccess VariableArityParameter VariableArityRecordComponent VariableDeclarator VariableDeclaratorId VariableDeclaratorList VariableInitializer VariableInitializerList VariableModifier VariableModifiers WhileStatement WhileStatementNoShortIf Wildcard WildcardBounds YieldStatement

%start input

%%

input: ClassDeclaration

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
IDENTIFIER 
| IDENTIFIER TypeArguments 
| Annotations IDENTIFIER 
| Annotations IDENTIFIER TypeArguments 
| TypeName DOT IDENTIFIER 
| TypeName DOT IDENTIFIER TypeArguments 
| TypeName DOT Annotations IDENTIFIER 
| TypeName DOT Annotations IDENTIFIER TypeArguments 
| ClassType DOT IDENTIFIER 
| ClassType DOT IDENTIFIER TypeArguments 
| ClassType DOT Annotations IDENTIFIER 
| ClassType DOT Annotations IDENTIFIER TypeArguments

TypeVariable:
IDENTIFIER 
| Annotations IDENTIFIER

TypeParameter:
IDENTIFIER 
| IDENTIFIER TypeBound 
| TypeParameterModifiers IDENTIFIER 
| TypeParameterModifiers IDENTIFIER TypeBound
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

ClassDeclaration:
NormalClassDeclaration
| EnumDeclaration
| RecordDeclaration
;

NormalClassDeclaration:
CLASS IDENTIFIER ClassBody 
| CLASS IDENTIFIER ClassPermits ClassBody 
| CLASS IDENTIFIER ClassImplements ClassBody 
| CLASS IDENTIFIER ClassImplements ClassPermits ClassBody 
| CLASS IDENTIFIER ClassExtends ClassBody 
| CLASS IDENTIFIER ClassExtends ClassPermits ClassBody 
| CLASS IDENTIFIER ClassExtends ClassImplements ClassBody 
| CLASS IDENTIFIER ClassExtends ClassImplements ClassPermits ClassBody 
| CLASS IDENTIFIER TypeParameters ClassBody 
| CLASS IDENTIFIER TypeParameters ClassPermits ClassBody 
| CLASS IDENTIFIER TypeParameters ClassImplements ClassBody 
| CLASS IDENTIFIER TypeParameters ClassImplements ClassPermits ClassBody 
| CLASS IDENTIFIER TypeParameters ClassExtends ClassBody 
| CLASS IDENTIFIER TypeParameters ClassExtends ClassPermits ClassBody 
| CLASS IDENTIFIER TypeParameters ClassExtends ClassImplements ClassBody 
| CLASS IDENTIFIER TypeParameters ClassExtends ClassImplements ClassPermits ClassBody 
| ClassModifiers CLASS IDENTIFIER ClassBody 
| ClassModifiers CLASS IDENTIFIER ClassPermits ClassBody 
| ClassModifiers CLASS IDENTIFIER ClassImplements ClassBody 
| ClassModifiers CLASS IDENTIFIER ClassImplements ClassPermits ClassBody 
| ClassModifiers CLASS IDENTIFIER ClassExtends ClassBody 
| ClassModifiers CLASS IDENTIFIER ClassExtends ClassPermits ClassBody 
| ClassModifiers CLASS IDENTIFIER ClassExtends ClassImplements ClassBody 
| ClassModifiers CLASS IDENTIFIER ClassExtends ClassImplements ClassPermits ClassBody 
| ClassModifiers CLASS IDENTIFIER TypeParameters ClassBody 
| ClassModifiers CLASS IDENTIFIER TypeParameters ClassPermits ClassBody 
| ClassModifiers CLASS IDENTIFIER TypeParameters ClassImplements ClassBody 
| ClassModifiers CLASS IDENTIFIER TypeParameters ClassImplements ClassPermits ClassBody 
| ClassModifiers CLASS IDENTIFIER TypeParameters ClassExtends ClassBody 
| ClassModifiers CLASS IDENTIFIER TypeParameters ClassExtends ClassPermits ClassBody 
| ClassModifiers CLASS IDENTIFIER TypeParameters ClassExtends ClassImplements ClassBody 
| ClassModifiers CLASS IDENTIFIER TypeParameters ClassExtends ClassImplements ClassPermits ClassBody
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
| TypeParameter CommaTypeParameter 
;

CommaTypeParameter:
CommaTypeParameter COMMA TypeParameter
| COMMA TypeParameter
;

ClassExtends:
EXTENDS ClassType
;

ClassImplements:
IMPLEMENTS ClassTypeList

ClassTypeList:
ClassType 
| ClassType CommaClassType 
;

CommaClassType:
CommaClassType COMMA ClassType
| COMMA ClassType
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
;

ClassBodyDeclaration:
ClassMemberDeclaration
| InstanceInitializer
| StaticInitializer
| ConstructorDeclaration
;

ClassMemberDeclaration:
FieldDeclaration
| MethodDeclaration
| ClassDeclaration
| SEMI_COLON
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
UnannClassType
| IDENTIFIER
| UnannArrayType
;


UnannClassType:
IDENTIFIER
| IDENTIFIER TypeArguments
| TypeName DOT IDENTIFIER 
| TypeName DOT IDENTIFIER TypeArguments 
| TypeName DOT Annotations IDENTIFIER 
| TypeName DOT Annotations IDENTIFIER TypeArguments
| UnannClassType DOT IDENTIFIER 
| UnannClassType DOT IDENTIFIER TypeArguments 
| UnannClassType DOT Annotations IDENTIFIER 
| UnannClassType DOT Annotations IDENTIFIER TypeArguments  
;

UnannArrayType:
UnannPrimitiveType Dims
| UnannClassType Dims
| IDENTIFIER Dims 
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
IDENTIFIER PARA_LEFT PARA_RIGHT 
| IDENTIFIER PARA_LEFT PARA_RIGHT Dims 
| IDENTIFIER PARA_LEFT FormalParameterList PARA_RIGHT 
| IDENTIFIER PARA_LEFT FormalParameterList PARA_RIGHT Dims 
| IDENTIFIER PARA_LEFT ReceiverParameter COMMA PARA_RIGHT 
| IDENTIFIER PARA_LEFT ReceiverParameter COMMA PARA_RIGHT Dims 
| IDENTIFIER PARA_LEFT ReceiverParameter COMMA FormalParameterList PARA_RIGHT 
| IDENTIFIER PARA_LEFT ReceiverParameter COMMA FormalParameterList PARA_RIGHT Dims
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
IDENTIFIER PARA_LEFT PARA_RIGHT 
| IDENTIFIER PARA_LEFT FormalParameterList PARA_RIGHT 
| IDENTIFIER PARA_LEFT ReceiverParameter COMMA PARA_RIGHT 
| IDENTIFIER PARA_LEFT ReceiverParameter COMMA FormalParameterList PARA_RIGHT 
| TypeParameters IDENTIFIER PARA_LEFT PARA_RIGHT 
| TypeParameters IDENTIFIER PARA_LEFT FormalParameterList PARA_RIGHT 
| TypeParameters IDENTIFIER PARA_LEFT ReceiverParameter COMMA PARA_RIGHT 
| TypeParameters IDENTIFIER PARA_LEFT ReceiverParameter COMMA FormalParameterList PARA_RIGHT
;

ConstructorBody:
CURLY_LEFT CURLY_RIGHT 
| CURLY_LEFT BlockStatements CURLY_RIGHT 
| CURLY_LEFT ExplicitConstructorInvocation CURLY_RIGHT 
| CURLY_LEFT ExplicitConstructorInvocation BlockStatements CURLY_RIGHT 
;

ExplicitConstructorInvocation:
THIS PARA_LEFT PARA_RIGHT SEMI_COLON 
| THIS PARA_LEFT ArgumentList PARA_RIGHT SEMI_COLON 
| TypeArguments THIS PARA_LEFT PARA_RIGHT SEMI_COLON 
| TypeArguments THIS PARA_LEFT ArgumentList PARA_RIGHT SEMI_COLON
| SUPER PARA_LEFT PARA_RIGHT SEMI_COLON 
| SUPER PARA_LEFT ArgumentList PARA_RIGHT SEMI_COLON 
| TypeArguments SUPER PARA_LEFT PARA_RIGHT SEMI_COLON 
| TypeArguments SUPER PARA_LEFT ArgumentList PARA_RIGHT SEMI_COLON 
| ExpressionName DOT SUPER PARA_LEFT PARA_RIGHT SEMI_COLON 
| ExpressionName DOT SUPER PARA_LEFT ArgumentList PARA_RIGHT SEMI_COLON 
| ExpressionName DOT TypeArguments SUPER PARA_LEFT PARA_RIGHT SEMI_COLON 
| ExpressionName DOT TypeArguments SUPER PARA_LEFT ArgumentList PARA_RIGHT SEMI_COLON
| Primary DOT SUPER PARA_LEFT PARA_RIGHT SEMI_COLON 
| Primary DOT SUPER PARA_LEFT ArgumentList PARA_RIGHT SEMI_COLON 
| Primary DOT TypeArguments SUPER PARA_LEFT PARA_RIGHT SEMI_COLON 
| Primary DOT TypeArguments SUPER PARA_LEFT ArgumentList PARA_RIGHT SEMI_COLON
;

EnumDeclaration:
ENUM IDENTIFIER EnumBody 
| ENUM IDENTIFIER ClassImplements EnumBody 
| ClassModifiers ENUM IDENTIFIER EnumBody 
| ClassModifiers ENUM IDENTIFIER ClassImplements EnumBody 
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
| IDENTIFIER PARA_LEFT PARA_RIGHT
| IDENTIFIER PARA_LEFT ArgumentList PARA_RIGHT
| IDENTIFIER PARA_LEFT PARA_RIGHT ClassBody
| IDENTIFIER PARA_LEFT ArgumentList PARA_RIGHT ClassBody
| EnumConstantModifiers IDENTIFIER ClassBody
| EnumConstantModifiers IDENTIFIER PARA_LEFT PARA_RIGHT
| EnumConstantModifiers IDENTIFIER PARA_LEFT ArgumentList PARA_RIGHT
| EnumConstantModifiers IDENTIFIER PARA_LEFT PARA_RIGHT ClassBody
| EnumConstantModifiers IDENTIFIER PARA_LEFT ArgumentList PARA_RIGHT ClassBody
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
RECORD IDENTIFIER RecordHeader RecordBody 
| RECORD IDENTIFIER RecordHeader ClassImplements RecordBody 
| RECORD IDENTIFIER TypeParameters RecordHeader RecordBody 
| RECORD IDENTIFIER TypeParameters RecordHeader ClassImplements RecordBody 
| ClassModifiers RECORD IDENTIFIER RecordHeader RecordBody 
| ClassModifiers RECORD IDENTIFIER RecordHeader ClassImplements RecordBody 
| ClassModifiers RECORD IDENTIFIER TypeParameters RecordHeader RecordBody 
| ClassModifiers RECORD IDENTIFIER TypeParameters RecordHeader ClassImplements RecordBody 
;

RecordHeader:
PARA_LEFT PARA_RIGHT 
| PARA_LEFT RecordComponentList PARA_RIGHT 
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
UnannType IDENTIFIER 
| Annotations UnannType IDENTIFIER
| VariableArityRecordComponent
;

VariableArityRecordComponent:
UnannType DOT DOT DOT IDENTIFIER 
| UnannType Annotations DOT DOT DOT IDENTIFIER 
| Annotations UnannType DOT DOT DOT IDENTIFIER 
| Annotations UnannType Annotations DOT DOT DOT IDENTIFIER
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
IDENTIFIER ConstructorBody
| ConstructorModifiers IDENTIFIER ConstructorBody

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
ClassDeclaration
| LocalVariableDeclarationStatement
| Statement 
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
IF PARA_LEFT Expression PARA_RIGHT Statement
;

IfThenElseStatement:
IF PARA_LEFT Expression PARA_RIGHT StatementNoShortIf ELSE Statement
;

IfThenElseStatementNoShortIf:
IF PARA_LEFT Expression PARA_RIGHT StatementNoShortIf ELSE StatementNoShortIf
;

AssertStatement:
ASSERT Expression SEMI_COLON
ASSERT Expression COLON Expression SEMI_COLON
;

WhileStatement:
WHILE PARA_LEFT Expression PARA_RIGHT Statement
;

WhileStatementNoShortIf:
WHILE PARA_LEFT Expression PARA_RIGHT StatementNoShortIf
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
FOR PARA_LEFT SEMI_COLON SEMI_COLON PARA_RIGHT Statement 
| FOR PARA_LEFT SEMI_COLON SEMI_COLON ForUpdate PARA_RIGHT Statement 
| FOR PARA_LEFT SEMI_COLON Expression SEMI_COLON PARA_RIGHT Statement 
| FOR PARA_LEFT SEMI_COLON Expression SEMI_COLON ForUpdate PARA_RIGHT Statement 
| FOR PARA_LEFT ForInit SEMI_COLON SEMI_COLON PARA_RIGHT Statement 
| FOR PARA_LEFT ForInit SEMI_COLON SEMI_COLON ForUpdate PARA_RIGHT Statement 
| FOR PARA_LEFT ForInit SEMI_COLON Expression SEMI_COLON PARA_RIGHT Statement 
| FOR PARA_LEFT ForInit SEMI_COLON Expression SEMI_COLON ForUpdate PARA_RIGHT Statement
;

BasicForStatementNoShortIf:
FOR PARA_LEFT SEMI_COLON SEMI_COLON PARA_RIGHT StatementNoShortIf 
| FOR PARA_LEFT SEMI_COLON SEMI_COLON ForUpdate PARA_RIGHT StatementNoShortIf 
| FOR PARA_LEFT SEMI_COLON Expression SEMI_COLON PARA_RIGHT StatementNoShortIf 
| FOR PARA_LEFT SEMI_COLON Expression SEMI_COLON ForUpdate PARA_RIGHT StatementNoShortIf 
| FOR PARA_LEFT ForInit SEMI_COLON SEMI_COLON PARA_RIGHT StatementNoShortIf 
| FOR PARA_LEFT ForInit SEMI_COLON SEMI_COLON ForUpdate PARA_RIGHT StatementNoShortIf 
| FOR PARA_LEFT ForInit SEMI_COLON Expression SEMI_COLON PARA_RIGHT StatementNoShortIf 
| FOR PARA_LEFT ForInit SEMI_COLON Expression SEMI_COLON ForUpdate PARA_RIGHT StatementNoShortIf
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
FOR PARA_LEFT LocalVariableDeclaration COLON Expression PARA_RIGHT Statement
;

EnhancedForStatementNoShortIf:
FOR PARA_LEFT LocalVariableDeclaration COLON Expression PARA_RIGHT StatementNoShortIf
;

BreakStatement:
BREAK SQUARE_LEFT IDENTIFIER SQUARE_RIGHT SEMI_COLON
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
SYNCHRONIZED PARA_LEFT Expression PARA_RIGHT Block
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
CATCH PARA_LEFT CatchFormalParameter PARA_RIGHT Block
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
PARA_LEFT ResourceList PARA_RIGHT
| PARA_LEFT ResourceList SEMI_COLON PARA_RIGHT
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

Primary:
PrimaryNoNewArray
| ArrayCreationExpression
;

PrimaryNoNewArray:
| LITERAL
| ClassLiteral
| THIS
| TypeName DOT THIS
| PARA_LEFT Expression PARA_RIGHT
| ClassInstanceCreationExpression
| FieldAccess
| ArrayAccess
| MethodInvocation
| MethodReference
;

ClassLiteral:
TypeName DOT CLASS 
| TypeName Square DOT CLASS 
| NumericType DOT CLASS 
| NumericType Square DOT CLASS 
| BOOLEAN DOT CLASS 
| BOOLEAN Square DOT CLASS 
| VOID DOT CLASS
;

Square:
Square SQUARE_LEFT SQUARE_RIGHT
| SQUARE_LEFT SQUARE_RIGHT
;

ClassInstanceCreationExpression:
| UnqualifiedClassInstanceCreationExpression
| ExpressionName DOT UnqualifiedClassInstanceCreationExpression
| Primary DOT UnqualifiedClassInstanceCreationExpression
;

UnqualifiedClassInstanceCreationExpression:
NEW ClassOrInterfaceTypeToInstantiate PARA_LEFT PARA_RIGHT 
| NEW ClassOrInterfaceTypeToInstantiate PARA_LEFT PARA_RIGHT ClassBody 
| NEW ClassOrInterfaceTypeToInstantiate PARA_LEFT ArgumentList PARA_RIGHT 
| NEW ClassOrInterfaceTypeToInstantiate PARA_LEFT ArgumentList PARA_RIGHT ClassBody 
| NEW TypeArguments ClassOrInterfaceTypeToInstantiate PARA_LEFT PARA_RIGHT 
| NEW TypeArguments ClassOrInterfaceTypeToInstantiate PARA_LEFT PARA_RIGHT ClassBody 
| NEW TypeArguments ClassOrInterfaceTypeToInstantiate PARA_LEFT ArgumentList PARA_RIGHT 
| NEW TypeArguments ClassOrInterfaceTypeToInstantiate PARA_LEFT ArgumentList PARA_RIGHT ClassBody 
;

ClassOrInterfaceTypeToInstantiate:
IDENTIFIER
| IDENTIFIER TypeArguments
| IDENTIFIER DotIdentifiers 
| IDENTIFIER DotIdentifiers TypeArguments
;

DotIdentifiers:
DotIdentifiers DOT IDENTIFIER
| DOT IDENTIFIER
;


FieldAccess:
| Primary DOT IDENTIFIER
| SUPER DOT IDENTIFIER
| TypeName DOT SUPER DOT IDENTIFIER
;

ArrayAccess:
ExpressionName 
| ExpressionName  Expression  
| PrimaryNoNewArray 
| PrimaryNoNewArray  Expression
;

MethodInvocation:
IDENTIFIER PARA_LEFT PARA_RIGHT 
| IDENTIFIER PARA_LEFT ArgumentList PARA_RIGHT 
| TypeName DOT IDENTIFIER PARA_LEFT PARA_RIGHT 
| TypeName DOT IDENTIFIER PARA_LEFT ArgumentList PARA_RIGHT 
| TypeName DOT TypeArguments IDENTIFIER PARA_LEFT PARA_RIGHT 
| TypeName DOT TypeArguments IDENTIFIER PARA_LEFT ArgumentList PARA_RIGHT 
| ExpressionName DOT IDENTIFIER PARA_LEFT PARA_RIGHT 
| ExpressionName DOT IDENTIFIER PARA_LEFT ArgumentList PARA_RIGHT 
| ExpressionName DOT TypeArguments IDENTIFIER PARA_LEFT PARA_RIGHT 
| ExpressionName DOT TypeArguments IDENTIFIER PARA_LEFT ArgumentList PARA_RIGHT 
| Primary DOT IDENTIFIER PARA_LEFT PARA_RIGHT 
| Primary DOT IDENTIFIER PARA_LEFT ArgumentList PARA_RIGHT 
| Primary DOT TypeArguments IDENTIFIER PARA_LEFT PARA_RIGHT 
| Primary DOT TypeArguments IDENTIFIER PARA_LEFT ArgumentList PARA_RIGHT
| SUPER DOT IDENTIFIER PARA_LEFT PARA_RIGHT 
| SUPER DOT IDENTIFIER PARA_LEFT ArgumentList PARA_RIGHT 
| SUPER DOT TypeArguments IDENTIFIER PARA_LEFT PARA_RIGHT 
| SUPER DOT TypeArguments IDENTIFIER PARA_LEFT ArgumentList PARA_RIGHT 
| TypeName DOT SUPER DOT IDENTIFIER PARA_LEFT PARA_RIGHT 
| TypeName DOT SUPER DOT IDENTIFIER PARA_LEFT ArgumentList PARA_RIGHT 
| TypeName DOT SUPER DOT TypeArguments IDENTIFIER PARA_LEFT PARA_RIGHT 
| TypeName DOT SUPER DOT TypeArguments IDENTIFIER PARA_LEFT ArgumentList PARA_RIGHT
;

ArgumentList:
Expression 
| Expression Expressions 
;

Expressions:
Expressions COMMA Expression
| COMMA Expression
;

MethodReference:
ExpressionName COLONTWICE IDENTIFIER 
| ExpressionName COLONTWICE TypeArguments IDENTIFIER 
| Primary COLONTWICE IDENTIFIER 
| Primary COLONTWICE TypeArguments IDENTIFIER 
| ReferenceType COLONTWICE IDENTIFIER 
| ReferenceType COLONTWICE TypeArguments IDENTIFIER 
| SUPER COLONTWICE IDENTIFIER 
| SUPER COLONTWICE TypeArguments IDENTIFIER 
| TypeName DOT SUPER COLONTWICE IDENTIFIER 
| TypeName DOT SUPER COLONTWICE TypeArguments IDENTIFIER 
| ClassType COLONTWICE NEW 
| ClassType COLONTWICE TypeArguments NEW 
| ArrayType COLONTWICE NEW
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
DimExprs DimExpr
| DimExpr
;

DimExpr:
SQUARE_LEFT Expression SQUARE_RIGHT 
| Annotations SQUARE_LEFT Expression SQUARE_RIGHT
;

Expression:
LambdaExpression 
| AssignmentExpression
;

LambdaExpression:
LambdaParameters LEFTARROW LambdaBody

LambdaParameters:
PARA_LEFT PARA_RIGHT 
| PARA_LEFT LambdaParameterList PARA_RIGHT 
| IDENTIFIER
;

LambdaParameterList:
LambdaParameter 
| LambdaParameter CommaLambdaParameters 
| IDENTIFIER 
| IDENTIFIER CommaIdentifiers
;

CommaLambdaParameters:
CommaLambdaParameters COMMA LambdaParameter
| COMMA LambdaParameter
;

CommaIdentifiers:
CommaIdentifiers COMMA IDENTIFIER
| COMMA IDENTIFIER
;

LambdaParameter:
LambdaParameterType VariableDeclaratorId 
| VariableModifiers LambdaParameterType VariableDeclaratorId 
| VariableArityParameter 
;

VariableModifiers:
VariableModifiers VariableModifier
| VariableModifier
;

LambdaParameterType:
UnannType
| VAR
;

LambdaBody:
Expression
| Block
;

AssignmentExpression:
ConditionalExpression
| Assignment
;

Assignment:
LeftHandSide ASSIGNMENT_OPERATORS Expression
;

LeftHandSide:
ExpressionName
| FieldAccess
| ArrayAccess
;

ConditionalExpression:
ConditionalOrExpression
| ConditionalOrExpression QUESTION Expression COLON ConditionalExpression
| ConditionalOrExpression QUESTION Expression COLON LambdaExpression
;

ConditionalOrExpression:
ConditionalAndExpression
| ConditionalOrExpression OR_OR ConditionalAndExpression
;

ConditionalAndExpression:
InclusiveOrExpression
| ConditionalAndExpression AND_AND InclusiveOrExpression
;

InclusiveOrExpression:
ExclusiveOrExpression
| InclusiveOrExpression OR ExclusiveOrExpression
;

ExclusiveOrExpression:
AndExpression
| ExclusiveOrExpression POWER AndExpression
;

AndExpression:
EqualityExpression
| AndExpression AND EqualityExpression
;

EqualityExpression:
RelationalExpression
| EqualityExpression EQUAL_EQUAL RelationalExpression
| EqualityExpression EXCLAIM_EQUAL RelationalExpression
;

RelationalExpression:
ShiftExpression
| RelationalExpression LESS ShiftExpression
| RelationalExpression GREATER ShiftExpression
| RelationalExpression LESS_EQUAL ShiftExpression
| RelationalExpression GREATER_EQUAL ShiftExpression
| InstanceofExpression
;

InstanceofExpression:
RelationalExpression INSTANCEOF ReferenceType
| RelationalExpression INSTANCEOF Pattern
;

ShiftExpression:
AdditiveExpression
| ShiftExpression LESS_LESS AdditiveExpression
| ShiftExpression GREATER_GREATER AdditiveExpression
| ShiftExpression GREATER_GREATER_GREATER AdditiveExpression
;

AdditiveExpression:
MultiplicativeExpression
| AdditiveExpression PLUS MultiplicativeExpression
| AdditiveExpression MINUS MultiplicativeExpression
;

MultiplicativeExpression:
UnaryExpression
| MultiplicativeExpression ASTERISK UnaryExpression
| MultiplicativeExpression SLASH UnaryExpression
| MultiplicativeExpression PERCENT UnaryExpression
;

UnaryExpression:
PreIncrementExpression
| PreDecrementExpression
| PLUS UnaryExpression
| MINUS UnaryExpression
| UnaryExpressionNotPlusMinus
;

PreIncrementExpression:
PLUS_PLUS UnaryExpression
;

PreDecrementExpression:
MINUS_MINUS UnaryExpression
;

UnaryExpressionNotPlusMinus:
PostfixExpression
| TILDE UnaryExpression
| EXCLAIM UnaryExpression
| CastExpression
;

PostfixExpression:
Primary
| ExpressionName
| PostIncrementExpression
| PostDecrementExpression
;

PostIncrementExpression:
PostfixExpression PLUS_PLUS
;

PostDecrementExpression:
PostfixExpression MINUS_MINUS
;

CastExpression:
PARA_LEFT PrimitiveType PARA_RIGHT UnaryExpression 
| PARA_LEFT ReferenceType PARA_RIGHT UnaryExpressionNotPlusMinus 
| PARA_LEFT ReferenceType AdditionalBounds PARA_RIGHT UnaryExpressionNotPlusMinus 
| PARA_LEFT ReferenceType PARA_RIGHT LambdaExpression 
| PARA_LEFT ReferenceType AdditionalBounds PARA_RIGHT LambdaExpression
;

AdditionalBounds:
AdditionalBounds AdditionalBound
| AdditionalBound
;

ConstantExpression:
Expression
;

ExpressionName:
IDENTIFIER
| AmbiguousName DOT IDENTIFIER
;


AmbiguousName:
IDENTIFIER
| AmbiguousName DOT IDENTIFIER
;

TypeName:
IDENTIFIER
| TypeName DOT IDENTIFIER
;

ArrayInitializer:
CURLY_LEFT CURLY_RIGHT 
| CURLY_LEFT COMMA CURLY_RIGHT 
| CURLY_LEFT VariableInitializerList CURLY_RIGHT 
| CURLY_LEFT VariableInitializerList COMMA CURLY_RIGHT 
;

VariableInitializerList:
VariableInitializer 
| VariableInitializer CommaVariableInitializer
;

CommaVariableInitializer:
CommaVariableInitializer COMMA VariableInitializer
| COMMA VariableInitializer
;

Annotation:
ATR
;

%%

int main(){
    yyparse();
}