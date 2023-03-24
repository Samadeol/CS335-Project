%{
#include<bits/stdc++.h>
using namespace std;
#include "parser.tab.h"
#include "symbol_table.h"


%}

%option yylineno
%x comment

TRIPLE_DOT                  "..."
LINE_TERMINATOR             [\n\r]|"\r\n"
WHITESPACE                  [ \t\f]
COMMENT                     \/\/[^\f\n\r]*{LINE_TERMINATOR}?
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
SINGLE_CHARACTER            [^\'\\] 
STRING_CHARACTER_BASIC      [^\"\\]|{ESCAPE_SEQUENCE}
OCTAL_ESCAPE                \\{OCT_DIGIT}|\\{OCT_DIGIT}{OCT_DIGIT}|\\[0-3]{OCT_DIGIT}{OCT_DIGIT}
ESCAPE_SEQUENCE             "\b"|"\s"|"\t"|"\n"|"\f"|"\r"|"\\"|"\'"|\\\"|{OCTAL_ESCAPE}|\\{LINE_TERMINATOR}
TEXT_BLOCK_WHITE_SPACE      [ \t\f]
AMPERSAND                  "&"
AMPERSAND_AMPERSAND        "&&" 
AMPERSAND_EQUALS           "&=" 
ARROW_RIGHT                "->" 
ASSERT                     assert 
BAR                         "|"
BAR_BAR                     "||" 
BAR_EQUALS                  "|=" 
BOOLEAN_LITERAL             true|false
BOOLEAN_TYPE                boolean
STRING_TYPE                 String
PACKAGE                     package
BREAK                       break
CATCH                       catch
CHARACTER_LITERAL           "'"{SINGLE_CHARACTER}"'"|"'"{ESCAPE_SEQUENCE}"'" 
CLASS                       class
COLON                       ":"
COMMA                       ","
CONTINUE                    continue
DOT                         "." 
DOUBLE_COLON                "::"
ELSE                        else
EQUALS                      "=" 
EQUALS_EQUALS               "=="
EXCLAIM                     "!"
EXCLAIM_EQUALS              "!="
EXTENDS                     extends
FINAL                       final 
FINALLY                     finally 
FLOATINGPOINT_LITERAL       {DECIMAL_FLOAT_LITERAL}|{HEX_FLOAT_LITERAL}             
FLOAT_POINT_TYPE            float|double
FOR                         for
GREATER_THAN                ">" 
GREATER_THAN_EQUALS         ">=" 
GREATER_THAN_GREATER_THAN   ">>"
GREATER_THAN_GREATER_THAN_EQUALS               ">>="
GREATER_THAN_GREATER_THAN_GREATER_THAN         ">>>"
GREATER_THAN_GREATER_THAN_GREATER_THAN_EQUALS  ">>>="
IDENTIFIER                  [a-zA-Z_$][a-zA-Z0-9_$]*    
IF                          if
IMPLEMENTS                  implements
IMPORT                      import
INTEGER_LITERAL             {DECIMAL_LITERAL}|{HEX_LITERAL}|{OCT_LITERAL}|{BINARY_LITERAL}
INTEGRAL_TYPE               byte|short|int|long|char  
INTERFACE                   interface
LEFT_CURLY_BRACE            "{" 
LEFT_PARANTHESIS            "(" 
LEFT_SQUARE_BRACE           "["
LESS_THAN                    "<"
LESS_THAN_EQUALS             "<="
LESS_THAN_LESS_THAN          "<<"
LESS_THAN_LESS_THAN_EQUALS    "<<="
MINUS                        "-"
MINUS_EQUALS                 "-="
MINUS_MINUS                  "--" 
NEW                          new 
NULL_LITERAL                 null      
PERCENT                      "%"
PERCENT_EQUALS               "%="
PERMITS                      permits 
PLUS                         "+"
PLUS_EQUALS                  "+="
PLUS_PLUS                    "++"
POWER                        "^"
POWER_EQUALS                 "^=" 
PRIVATE                      private 
PUBLIC                       public
QUESTION                     "?"
RETURN                       return  
RIGHT_CURLY_BRACE            "}"
RIGHT_PARANTHESIS            ")"
RIGHT_SQUARE_BRACE           "]"
SEMI_COLON                   ";"
SLASH                        "/"
SLASH_EQUALS                 "/="
STAR                         "*"
STAR_EQUALS                  "*="
STATIC                       static
STRING_LITERAL               \"{STRING_CHARACTER_BASIC}*\"
SUPER                        super
SYNCHRONIZED                 synchronized
TEXTBLOCK                    \"\"\"{TEXT_BLOCK_WHITE_SPACE}*{LINE_TERMINATOR}([^\\\"]|\"([^\\\"])|\"\"([^\\\"]))*\"\"\"
THROW                        throw 
THROWS                       throws 
TILDA                        "~"
TRY                          try
VAR                          var 
VOID                         void
WHILE                        while 
YIELD                        yield


%%

\/\*    {BEGIN comment;}
<comment>\*\/    {BEGIN 0;}
<comment>.|{LINE_TERMINATOR} //

{WHITESPACE}                                    {}        
{LINE_TERMINATOR}                               {}
{TRIPLE_DOT}                                    {strcpy(yylval.item.label,yytext); return TRIPLE_DOT;}
{AMPERSAND}                                     {strcpy(yylval.item.label,yytext); return AMPERSAND;} 
{AMPERSAND_AMPERSAND}                           {strcpy(yylval.item.label,yytext); return AMPERSAND_AMPERSAND;}
{AMPERSAND_EQUALS}                              {strcpy(yylval.item.label,yytext); return AMPERSAND_EQUALS;} 
{ARROW_RIGHT}                                   {strcpy(yylval.item.label,yytext); return ARROW_RIGHT;}  
{BAR}                                           {strcpy(yylval.item.label,yytext); return BAR;}  
{BAR_BAR}                                       {strcpy(yylval.item.label,yytext); return BAR_BAR;}
{BAR_EQUALS}                                    {strcpy(yylval.item.label,yytext); return BAR_EQUALS;}
{CHARACTER_LITERAL}                             {strcpy(yylval.item.label,yytext); return CHARACTER_LITERAL;}
{COLON}                                         {strcpy(yylval.item.label,yytext); return COLON;}
{COMMA}                                         {strcpy(yylval.item.label,yytext); return COMMA;}   
{DOT}                                           {strcpy(yylval.item.label,yytext); return DOT;}   
{DOUBLE_COLON}                                  {strcpy(yylval.item.label,yytext); return DOUBLE_COLON;} 
{EQUALS}                                        {strcpy(yylval.item.label,yytext); return EQUALS;} 
{EQUALS_EQUALS}                                 {strcpy(yylval.item.label,yytext); return EQUALS_EQUALS;}
{EXCLAIM}                                       {strcpy(yylval.item.label,yytext); return EXCLAIM;}
{EXCLAIM_EQUALS}                                {strcpy(yylval.item.label,yytext); return EXCLAIM_EQUALS;}
{FLOATINGPOINT_LITERAL}                         {strcpy(yylval.item.label,yytext); return FLOATINGPOINT_LITERAL;}
{GREATER_THAN}                                  {strcpy(yylval.item.label,yytext); return GREATER_THAN;} 
{GREATER_THAN_EQUALS}                           {strcpy(yylval.item.label,yytext); return GREATER_THAN_EQUALS;}
{GREATER_THAN_GREATER_THAN}                     {strcpy(yylval.item.label,yytext); return GREATER_THAN_GREATER_THAN;}
{GREATER_THAN_GREATER_THAN_EQUALS}              {strcpy(yylval.item.label,yytext); return GREATER_THAN_GREATER_THAN_EQUALS;} 
{GREATER_THAN_GREATER_THAN_GREATER_THAN}        {strcpy(yylval.item.label,yytext); return GREATER_THAN_GREATER_THAN_GREATER_THAN;} 
{GREATER_THAN_GREATER_THAN_GREATER_THAN_EQUALS} {strcpy(yylval.item.label,yytext); return GREATER_THAN_GREATER_THAN_GREATER_THAN_EQUALS;}
{LEFT_CURLY_BRACE}                              {strcpy(yylval.item.label,yytext); new_scope(); return LEFT_CURLY_BRACE;}
{LEFT_PARANTHESIS}                              {strcpy(yylval.item.label,yytext); old_scope(); return LEFT_PARANTHESIS;}
{LEFT_SQUARE_BRACE}                             {strcpy(yylval.item.label,yytext); return LEFT_SQUARE_BRACE;}
{LESS_THAN}                                     {strcpy(yylval.item.label,yytext); return LESS_THAN;}
{LESS_THAN_EQUALS}                              {strcpy(yylval.item.label,yytext); return LESS_THAN_EQUALS;}
{LESS_THAN_LESS_THAN}                           {strcpy(yylval.item.label,yytext); return LESS_THAN_LESS_THAN;}
{LESS_THAN_LESS_THAN_EQUALS}                    {strcpy(yylval.item.label,yytext); return LESS_THAN_LESS_THAN_EQUALS;}
{MINUS}                                         {strcpy(yylval.item.label,yytext); return MINUS;}
{MINUS_EQUALS}                                  {strcpy(yylval.item.label,yytext); return MINUS_EQUALS;}  
{MINUS_MINUS}                                   {strcpy(yylval.item.label,yytext); return MINUS_MINUS;}
{PACKAGE}                                       {strcpy(yylval.item.label,yytext); return PACKAGE;}   
{PERCENT}                                       {strcpy(yylval.item.label,yytext); return PERCENT;} 
{PERCENT_EQUALS}                                {strcpy(yylval.item.label,yytext); return PERCENT_EQUALS;}
{PLUS}                                          {strcpy(yylval.item.label,yytext); return PLUS;}           
{PLUS_EQUALS}                                   {strcpy(yylval.item.label,yytext); return PLUS_EQUALS;}  
{PLUS_PLUS}                                     {strcpy(yylval.item.label,yytext); return PLUS_PLUS;}   
{POWER}                                         {strcpy(yylval.item.label,yytext); return POWER;}   
{POWER_EQUALS}                                  {strcpy(yylval.item.label,yytext); return POWER_EQUALS;}   
{QUESTION}                                      {strcpy(yylval.item.label,yytext); return QUESTION;}   
{RIGHT_CURLY_BRACE}                             {strcpy(yylval.item.label,yytext); return RIGHT_CURLY_BRACE;}   
{RIGHT_PARANTHESIS}                             {strcpy(yylval.item.label,yytext); return RIGHT_PARANTHESIS;}   
{RIGHT_SQUARE_BRACE}                            {strcpy(yylval.item.label,yytext); return RIGHT_SQUARE_BRACE;}
{SEMI_COLON}                                    {strcpy(yylval.item.label,yytext); return SEMI_COLON;}
{SLASH}                                         {strcpy(yylval.item.label,yytext); return SLASH;}
{SLASH_EQUALS}                                  {strcpy(yylval.item.label,yytext); return SLASH_EQUALS;}
{STAR}                                          {strcpy(yylval.item.label,yytext); return STAR;}    
{STAR_EQUALS}                                   {strcpy(yylval.item.label,yytext); return STAR_EQUALS;}
{YIELD}                                         {strcpy(yylval.item.label,yytext); return YIELD;}    
{WHILE}                                         {strcpy(yylval.item.label,yytext); return WHILE;}    
{VOID}                                          {strcpy(yylval.item.label,yytext); return VOID;}
{VAR}                                           {strcpy(yylval.item.label,yytext); return VAR;}
{TRY}                                           {strcpy(yylval.item.label,yytext); return TRY;}
{TILDA}                                         {strcpy(yylval.item.label,yytext); return TILDA;}
{INTEGER_LITERAL}                               {strcpy(yylval.item.label,yytext); return INTEGER_LITERAL;}
{TEXTBLOCK}                                     {strcpy(yylval.item.label,yytext); return TEXTBLOCK;}    
{THROWS}                                        {strcpy(yylval.item.label,yytext); return THROWS;}
{THROW}                                         {strcpy(yylval.item.label,yytext); return THROW;}
{SYNCHRONIZED}                                  {strcpy(yylval.item.label,yytext); return SYNCHRONIZED;}    
{SUPER}                                         {strcpy(yylval.item.label,yytext); return SUPER;}
{STATIC}                                        {strcpy(yylval.item.label,yytext); return STATIC;}
{RETURN}                                        {strcpy(yylval.item.label,yytext); return RETURN;}
{PUBLIC}                                        {strcpy(yylval.item.label,yytext); return PUBLIC;}
{PRIVATE}                                       {strcpy(yylval.item.label,yytext); return PRIVATE;}
{PERMITS}                                       {strcpy(yylval.item.label,yytext); return PERMITS;}
{NULL_LITERAL}                                  {strcpy(yylval.item.label,yytext); return NULL_LITERAL;}    
{NEW}                                           {strcpy(yylval.item.label,yytext); return NEW;}
{INTERFACE}                                     {strcpy(yylval.item.label,yytext); return INTERFACE;}
{INTEGRAL_TYPE}                                 {strcpy(yylval.item.label,yytext); return INTEGRAL_TYPE;}
{IMPORT}                                        {strcpy(yylval.item.label,yytext); return IMPORT;}
{IMPLEMENTS}                                    {strcpy(yylval.item.label,yytext); return IMPLEMENTS;}    
{IF}                                            {strcpy(yylval.item.label,yytext); return IF;}    
{FOR}                                           {strcpy(yylval.item.label,yytext); return FOR;}
{FLOAT_POINT_TYPE}                              {strcpy(yylval.item.label,yytext); return FLOAT_POINT_TYPE;}
{FINALLY}                                       {strcpy(yylval.item.label,yytext); return FINALLY;}
{FINAL}                                         {strcpy(yylval.item.label,yytext); return FINAL;}
{EXTENDS}                                       {strcpy(yylval.item.label,yytext); return EXTENDS;}
{ELSE}                                          {strcpy(yylval.item.label,yytext); return ELSE;}
{CONTINUE}                                      {strcpy(yylval.item.label,yytext); return CONTINUE;}
{CLASS}                                         {strcpy(yylval.item.label,yytext); return CLASS;}
{CATCH}                                         {strcpy(yylval.item.label,yytext); return CATCH;}
{BREAK}                                         {strcpy(yylval.item.label,yytext); return BREAK;}
{BOOLEAN_TYPE}                                  {strcpy(yylval.item.label,yytext); return BOOLEAN_TYPE;}
{BOOLEAN_LITERAL}                               {strcpy(yylval.item.label,yytext); return BOOLEAN_LITERAL;}
{ASSERT}                                        {strcpy(yylval.item.label,yytext); return ASSERT;}
{STRING_TYPE}                                   {strcpy(yylval.item.label,yytext); return STRING_TYPE;}
{STRING_LITERAL}                                {strcpy(yylval.item.label,yytext); return STRING_LITERAL;}
{IDENTIFIER}                                    {strcpy(yylval.item.label,yytext); return IDENTIFIER;}
{COMMENT}                                       {}
<<EOF>> {yyterminate();}



%%

int yywrap() {
    return 1;
}