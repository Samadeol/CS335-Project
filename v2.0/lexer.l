%{
#include<bits/stdc++.h>
using namespace std;
#include "parser.tab.h"

%}

%option yylineno
%x comment

LINE_TERMINATOR             [\n\r]|"\r\n"
WHITESPACE                  [ \t\f]
COMMENT                     \/\/[^\f\n\r]*{LINE_TERMINATOR}?
KEYWORD                     abstract|continue|for|new|switch|assert|default|if|package|synchronized|boolean|do|goto|private|this|break|double|implements|protected|throw|byte|else|import|public|throws|case|enum|instanceof|return|transient|catch|extends|int|short|try|char|final|interface|static|void|class|finally|long|strictfp|volatile|const|float|native|super|while|"_"
IDENTIFIER                  [a-zA-Z_$][a-zA-Z0-9_$]*
INTEGER_TYPE_SUFFIX         "1"|"L"
DIGIT                       [0-9]
DIGITORUNDERSCORE           {DIGIT}|"_"
DIGITANDUNDERSCORE          {DIGITORUNDERSCORE}+
DIGITS                      {DIGIT}|{DIGIT}{DIGITANDUNDERSCORE}?{DIGIT}
DECIMAL_NUMERAL             0|[1-9]{DIGITS}?|[1-9]"_"+{DIGITS}
DECIMAL_LITERAL             {DECIMAL_NUMERAL}{INTEGER_TYPE_SUFFIX}?
HEX_DIGIT                   [0-9A-F]
HEX_DIGIT_OR_UNDERSCORE     {HEX_DIGIT}|"_"
HEX_DIGIT_AND_UNDERSCORE    {HEX_DIGIT_OR_UNDERSCORE}+
HEX_DIGITS                  {HEX_DIGIT}|{HEX_DIGIT}{HEX_DIGIT_AND_UNDERSCORE}?{HEX_DIGIT} 
HEX_NUMERAL                 0x{HEX_DIGITS}|0X{HEX_DIGITS}
OCT_DIGIT                   [0-7]
OCT_DIGIT_OR_UNDERSCORE     {OCT_DIGIT}|"_"
OCT_DIGIT_AND_UNDERSCORE    {OCT_DIGIT_OR_UNDERSCORE}+
OCT_DIGITS                  {OCT_DIGIT}|{OCT_DIGIT}{OCT_DIGIT_AND_UNDERSCORE}?{OCT_DIGIT}
OCT_NUMERAL                 0{OCT_DIGITS}|0"_"+{OCT_DIGITS}
BIN_DIGIT                   0|1
BIN_DIGIT_OR_UNDERSCORE     {BIN_DIGIT}|"_"
BIN_DIGIT_AND_UNDERSCORE    {BIN_DIGIT_OR_UNDERSCORE}+
BIN_DIGITS                  {BIN_DIGIT}|{BIN_DIGIT}{BIN_DIGIT_AND_UNDERSCORE}?{BIN_DIGIT}
BIN_NUMERAL                 0B{BIN_DIGITS}|0b{BIN_DIGITS}
HEX_LITERAL                 {HEX_NUMERAL}{INTEGER_TYPE_SUFFIX}?    
OCT_LITERAL                 {OCT_NUMERAL}{INTEGER_TYPE_SUFFIX}?
BINARY_LITERAL              {BIN_NUMERAL}{INTEGER_TYPE_SUFFIX}?
INTEGER_LITERAL             {DECIMAL_LITERAL}|{HEX_LITERAL}|{OCT_LITERAL}|{BINARY_LITERAL}
SIGN                        "+"|"-"
FLOAT_TYPE_SUFFIX           f|F|d|D
SIGNED_INT                  {SIGN}?{DIGITS}
EXPONENT_INDICATOR          e|E 
EXPONENT_PART               {EXPONENT_INDICATOR}{SIGNED_INT}
DECIMAL_FLOAT_LITERAL       {DIGITS}"."{DIGITS}?{EXPONENT_PART}?{FLOAT_TYPE_SUFFIX}?|"."{DIGITS}{EXPONENT_PART}?{FLOAT_TYPE_SUFFIX}?|{DIGITS}{EXPONENT_PART}{FLOAT_TYPE_SUFFIX}?|{DIGITS}{EXPONENT_PART}?{FLOAT_TYPE_SUFFIX}
BIN_EXPONENT_INDICATOR      p|P
BIN_EXPONENT                {BIN_EXPONENT_INDICATOR}{SIGNED_INT}
HEX_SIGNIFICAND             {HEX_NUMERAL}"."?|0X{HEX_DIGITS}?"."{HEX_DIGITS}|0x{HEX_DIGITS}?"."{HEX_DIGITS}    
HEX_FLOAT_LITERAL           {HEX_SIGNIFICAND}{BIN_EXPONENT}{FLOAT_TYPE_SUFFIX}?
FLOAT_LITERAL               {DECIMAL_FLOAT_LITERAL}|{HEX_FLOAT_LITERAL}
BOOLEAN_LITERAL             true|false
SINGLE_CHARACTER            [^\'\\] 
STRING_CHARACTER_BASIC      [^\"\\]|{ESCAPE_SEQUENCE}
OCTAL_ESCAPE                \\{OCT_DIGIT}|\\{OCT_DIGIT}{OCT_DIGIT}|\\[0-3]{OCT_DIGIT}{OCT_DIGIT}
ESCAPE_SEQUENCE             "\b"|"\s"|"\t"|"\n"|"\f"|"\r"|"\\"|"\'"|\\\"|{OCTAL_ESCAPE}|\\{LINE_TERMINATOR}
STRING_CHARACTER            {STRING_CHARACTER_BASIC}|{ESCAPE_SEQUENCE}
CHARACTER_LITERAL           "'"{SINGLE_CHARACTER}"'"|"'"{ESCAPE_SEQUENCE}"'" 
STRING_LITERAL              \"{STRING_CHARACTER_BASIC}*\"
NULL_LITERAL                null 
TEXT_BLOCK_WHITE_SPACE      [ \t\f]
TEXT_BLOCK                  \"\"\"{TEXT_BLOCK_WHITE_SPACE}*{LINE_TERMINATOR}([^\\\"]|\"([^\\\"])|\"\"([^\\\"]))*\"\"\"
LITERAL                     {INTEGER_LITERAL}|{BOOLEAN_LITERAL}|{NULL_LITERAL}|{CHARACTER_LITERAL}|{STRING_LITERAL}|{FLOAT_LITERAL}|{TEXT_BLOCK}

INTEGRAL_TYPE               byte|short|int|long|char
FLOAT_POINT_TYPE            float|double
BOOLEAN_TYPE                boolean
CLASS                       class
PUBLIC                      public
PRIVATE                     private


%%

\/\*    {BEGIN comment;}
<comment>\*\/    {BEGIN 0;}
<comment>.|{LINE_TERMINATOR} //

{IDENTIFIER}    {strcpy(yylval.str,yytext); return IDENTIFIER;}
{LITERAL}       {strcpy(yylval.str,yytext); return LITERAL};


%%

int yywrap() {
    return 1;
}