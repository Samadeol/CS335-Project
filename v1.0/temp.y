Primary:
PrimaryNoNewArray
|ArrayCreationExpression
;

PrimaryNoNewArray:
| Literal
| ClassLiteral
| THIS
| TypeName DOT THIS
| BRACKET_LEFT Expression BRACKET_RIGHT
| ClassInstanceCreationExpression
| FieldAccess
| ArrayAccess
| MethodInvocation
| MethodReference
;

ClassLiteral:
TypeName DOT class 
| TypeName Square DOT class 
| NumericType DOT class 
| NumericType Square DOT class 
| BOOLEAN DOT class 
| BOOLEAN Square DOT class 
| VOID DOT class
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
NEW ClassOrInterfaceTypeToInstantiate BRACKET_LEFT BRACKET_RIGHT 
| NEW ClassOrInterfaceTypeToInstantiate BRACKET_LEFT BRACKET_RIGHT ClassBody 
| NEW ClassOrInterfaceTypeToInstantiate BRACKET_LEFT ArgumentList BRACKET_RIGHT 
| NEW ClassOrInterfaceTypeToInstantiate BRACKET_LEFT ArgumentList BRACKET_RIGHT ClassBody 
| NEW TypeArguments ClassOrInterfaceTypeToInstantiate BRACKET_LEFT BRACKET_RIGHT 
| NEW TypeArguments ClassOrInterfaceTypeToInstantiate BRACKET_LEFT BRACKET_RIGHT ClassBody 
| NEW TypeArguments ClassOrInterfaceTypeToInstantiate BRACKET_LEFT ArgumentList BRACKET_RIGHT 
| NEW TypeArguments ClassOrInterfaceTypeToInstantiate BRACKET_LEFT ArgumentList BRACKET_RIGHT ClassBody 
;

ClassOrInterfaceTypeToInstantiate:
IDENTIFIER 
| IDENTIFIER TypeArgumentsOrDiamond 
| IDENTIFIER Identifiers 
| IDENTIFIER Identifiers TypeArgumentsOrDiamond
;

Identifiers:
Identifiers DOT IDENTIFIER
| DOT IDENTIFIER
;

TypeArgumentsOrDiamond:
TypeArguments
| LARROW RARROW
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
MethodName BRACKET_LEFT BRACKET_RIGHT 
| MethodName BRACKET_LEFT ArgumentList BRACKET_RIGHT 
| TypeName DOT IDENTIFIER BRACKET_LEFT BRACKET_RIGHT 
| TypeName DOT IDENTIFIER BRACKET_LEFT ArgumentList BRACKET_RIGHT 
| TypeName DOT TypeArguments IDENTIFIER BRACKET_LEFT BRACKET_RIGHT 
| TypeName DOT TypeArguments IDENTIFIER BRACKET_LEFT ArgumentList BRACKET_RIGHT 
| ExpressionName DOT IDENTIFIER BRACKET_LEFT BRACKET_RIGHT 
| ExpressionName DOT IDENTIFIER BRACKET_LEFT ArgumentList BRACKET_RIGHT 
| ExpressionName DOT TypeArguments IDENTIFIER BRACKET_LEFT BRACKET_RIGHT 
| ExpressionName DOT TypeArguments IDENTIFIER BRACKET_LEFT ArgumentList BRACKET_RIGHT 
| Primary DOT IDENTIFIER BRACKET_LEFT BRACKET_RIGHT 
| Primary DOT IDENTIFIER BRACKET_LEFT ArgumentList BRACKET_RIGHT 
| Primary DOT TypeArguments IDENTIFIER BRACKET_LEFT BRACKET_RIGHT 
| Primary DOT TypeArguments IDENTIFIER BRACKET_LEFT ArgumentList BRACKET_RIGHT
| super DOT IDENTIFIER BRACKET_LEFT BRACKET_RIGHT 
| super DOT IDENTIFIER BRACKET_LEFT ArgumentList BRACKET_RIGHT 
| super DOT TypeArguments IDENTIFIER BRACKET_LEFT BRACKET_RIGHT 
| super DOT TypeArguments IDENTIFIER BRACKET_LEFT ArgumentList BRACKET_RIGHT 
| TypeName DOT super DOT IDENTIFIER BRACKET_LEFT BRACKET_RIGHT 
| TypeName DOT super DOT IDENTIFIER BRACKET_LEFT ArgumentList BRACKET_RIGHT 
| TypeName DOT super DOT TypeArguments IDENTIFIER BRACKET_LEFT BRACKET_RIGHT 
| TypeName DOT super DOT TypeArguments IDENTIFIER BRACKET_LEFT ArgumentList BRACKET_RIGHT
;

ArgumentList:
Expression 
| Expression Expressions 
;

Expressions:
Expressions , Expression
| , Expression
;

MethodReference:
ExpressionName COLONTWICE IDENTIFIER 
| ExpressionName COLONTWICE TypeArguments IDENTIFIER 
| Primary COLONTWICE IDENTIFIER 
| Primary COLONTWICE TypeArguments IDENTIFIER 
| ReferenceType COLONTWICE IDENTIFIER 
| ReferenceType COLONTWICE TypeArguments IDENTIFIER 
| super COLONTWICE IDENTIFIER 
| super COLONTWICE TypeArguments IDENTIFIER 
| TypeName DOT super COLONTWICE IDENTIFIER 
| TypeName DOT super COLONTWICE TypeArguments IDENTIFIER 
| ClassType COLONTWICE NEW 
| ClassType COLONTWICE TypeArguments NEW 
| ArrayType COLONTWICE NEW
;

ArrayCreationExpression:
NEW PrimitiveType DimExprs 
| NEW PrimitiveType DimExprs Dims 
| NEW ClassOrInterfaceType DimExprs 
| NEW ClassOrInterfaceType DimExprs Dims 
| NEW PrimitiveType Dims ArrayInitializer 
| NEW ClassOrInterfaceType Dims ArrayInitializer
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
BRACKET_LEFT BRACKET_RIGHT 
| BRACKET_LEFT LambdaParameterList BRACKET_RIGHT 
| IDENTIFIER
;

LambdaParameterList:
LambdaParameter 
| LambdaParameter LambdaParameters 
| IDENTIFIER 
| IDENTIFIER Identifiers
;

LambdaParameters:
LambdaParameters , LambdaParameter
| , LambdaParameter
;

Identifiers:
Identifiers , IDENTIFIER
| , IDENTIFIER
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
| SwitchExpression
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
BRACKET_LEFT PrimitiveType BRACKET_RIGHT UnaryExpression 
| BRACKET_LEFT ReferenceType BRACKET_RIGHT UnaryExpressionNotPlusMinus 
| BRACKET_LEFT ReferenceType AdditionalBounds BRACKET_RIGHT UnaryExpressionNotPlusMinus 
| BRACKET_LEFT ReferenceType BRACKET_RIGHT LambdaExpression 
| BRACKET_LEFT ReferenceType AdditionalBounds BRACKET_RIGHT LambdaExpression
;

AdditionalBounds:
AdditionalBounds AdditionalBound
| AdditionalBound
;

SwitchExpression:
SWITCH BRACKET_LEFT Expression BRACKET_RIGHT SwitchBlock
;

ConstantExpression:
Expression
;