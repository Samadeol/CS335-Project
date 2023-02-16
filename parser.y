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

%token<s> INTEGRAL_TYPE FLOAT_POINT_TYPE BOOLEAN_TYPE


%type<s> Primitive_Type NumericType Annotations 


%%

Primitive_Type:

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
PrimitiveType Dims;

Dims:
Dims Dim
|Dim;

Dim:
Annotations SQUARE_LEFT SQUARE_RIGHT;
SQUARE_LEFT SQUARE_RIGHT; 



























%%

int main(){
    yyparse();
}


