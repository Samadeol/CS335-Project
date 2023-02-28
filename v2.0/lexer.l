%{
#include<bits/stdc++.h>
using namespace std;
#include "parser.tab.h"
extern int leaf_number;
extern fstream fout;
extern stack<int> st;
string s;

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
THIS                         this
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
{TRIPLE_DOT}                                    {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return TRIPLE_DOT;}
{AMPERSAND}                                     {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return AMPERSAND;} 
{AMPERSAND_AMPERSAND}                           {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return AMPERSAND_AMPERSAND;}
{AMPERSAND_EQUALS}                              {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return AMPERSAND_EQUALS;} 
{ARROW_RIGHT}                                   {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return ARROW_RIGHT;}  
{BAR}                                           {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return BAR;}  
{BAR_BAR}                                       {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return BAR_BAR;}
{BAR_EQUALS}                                    {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return BAR_EQUALS;}
{CHARACTER_LITERAL}                             {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return CHARACTER_LITERAL;}
{COLON}                                         {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return COLON;}
{COMMA}                                         {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return COMMA;}   
{DOT}                                           {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return DOT;}   
{DOUBLE_COLON}                                  {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return DOUBLE_COLON;} 
{EQUALS}                                        {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return EQUALS;} 
{EQUALS_EQUALS}                                 {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return EQUALS_EQUALS;}
{EXCLAIM}                                       {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return EXCLAIM;}
{EXCLAIM_EQUALS}                                {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return EXCLAIM_EQUALS;}
{FLOATINGPOINT_LITERAL}                         {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return FLOATINGPOINT_LITERAL;}
{GREATER_THAN}                                  {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return GREATER_THAN;} 
{GREATER_THAN_EQUALS}                           {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return GREATER_THAN_EQUALS;}
{GREATER_THAN_GREATER_THAN}                     {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return GREATER_THAN_GREATER_THAN;}
{GREATER_THAN_GREATER_THAN_EQUALS}              {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return GREATER_THAN_GREATER_THAN_EQUALS;} 
{GREATER_THAN_GREATER_THAN_GREATER_THAN}        {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return GREATER_THAN_GREATER_THAN_GREATER_THAN;} 
{GREATER_THAN_GREATER_THAN_GREATER_THAN_EQUALS} {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return GREATER_THAN_GREATER_THAN_GREATER_THAN_EQUALS;}
{LEFT_CURLY_BRACE}                              {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return LEFT_CURLY_BRACE;}
{LEFT_PARANTHESIS}                              {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return LEFT_PARANTHESIS;}
{LEFT_SQUARE_BRACE}                             {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return LEFT_SQUARE_BRACE;}
{LESS_THAN}                                     {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return LESS_THAN;}
{LESS_THAN_EQUALS}                              {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return LESS_THAN_EQUALS;}
{LESS_THAN_LESS_THAN}                           {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return LESS_THAN_LESS_THAN;}
{LESS_THAN_LESS_THAN_EQUALS}                    {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return LESS_THAN_LESS_THAN_EQUALS;}
{MINUS}                                         {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return MINUS;}
{MINUS_EQUALS}                                  {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return MINUS_EQUALS;}  
{MINUS_MINUS}                                   {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return MINUS_MINUS;}
{PERCENT}                                       {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return PERCENT;} 
{PERCENT_EQUALS}                                {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return PERCENT_EQUALS;}
{PLUS}                                          {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return PLUS;}           
{PLUS_EQUALS}                                   {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return PLUS_EQUALS;}  
{PLUS_PLUS}                                     {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return PLUS_PLUS;}   
{POWER}                                         {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return POWER;}   
{POWER_EQUALS}                                  {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return POWER_EQUALS;}   
{QUESTION}                                      {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return QUESTION;}   
{RIGHT_CURLY_BRACE}                             {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return RIGHT_CURLY_BRACE;}   
{RIGHT_PARANTHESIS}                             {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return RIGHT_PARANTHESIS;}   
{RIGHT_SQUARE_BRACE}                            {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return RIGHT_SQUARE_BRACE;}
{SEMI_COLON}                                    {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return SEMI_COLON;}
{SLASH}                                         {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return SLASH;}
{SLASH_EQUALS}                                  {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return SLASH_EQUALS;}
{STAR}                                          {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return STAR;}    
{STAR_EQUALS}                                   {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return STAR_EQUALS;}
{YIELD}                                         {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return YIELD;}    
{WHILE}                                         {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return WHILE;}    
{VOID}                                          {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return VOID;}
{VAR}                                           {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return VAR;}
{TRY}                                           {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return TRY;}
{TILDA}                                         {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return TILDA;}
{INTEGER_LITERAL}                               {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return INTEGER_LITERAL;}
{TEXTBLOCK}                                     {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return TEXTBLOCK;}    
{THROWS}                                        {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return THROWS;}
{THROW}                                         {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return THROW;}
{THIS}                                          {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return THIS;}
{SYNCHRONIZED}                                  {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return SYNCHRONIZED;}    
{SUPER}                                         {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return SUPER;}
{STATIC}                                        {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return STATIC;}
{RETURN}                                        {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return RETURN;}
{PUBLIC}                                        {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return PUBLIC;}
{PRIVATE}                                       {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return PRIVATE;}
{PERMITS}                                       {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return PERMITS;}
{NULL_LITERAL}                                  {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return NULL_LITERAL;}    
{NEW}                                           {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return NEW;}
{INTERFACE}                                     {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return INTERFACE;}
{INTEGRAL_TYPE}                                 {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return INTEGRAL_TYPE;}
{IMPORT}                                        {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return IMPORT;}
{IMPLEMENTS}                                    {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return IMPLEMENTS;}    
{IF}                                            {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return IF;}    
{FOR}                                           {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return FOR;}
{FLOAT_POINT_TYPE}                              {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return FLOAT_POINT_TYPE;}
{FINALLY}                                       {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return FINALLY;}
{FINAL}                                         {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return FINAL;}
{EXTENDS}                                       {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return EXTENDS;}
{ELSE}                                          {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return ELSE;}
{CONTINUE}                                      {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return CONTINUE;}
{CLASS}                                         {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return CLASS;}
{CATCH}                                         {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return CATCH;}
{BREAK}                                         {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return BREAK;}
{BOOLEAN_TYPE}                                  {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return BOOLEAN_TYPE;}
{BOOLEAN_LITERAL}                               {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return BOOLEAN_LITERAL;}
{ASSERT}                                        {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return ASSERT;}
{STRING_LITERAL}                                {fout<<"t"<<leaf_number<<"[label="<<yytext<<"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return STRING_LITERAL;}
{IDENTIFIER}                                    {fout<<"t"<<leaf_number<<"[label=\""<<yytext<<"\"]"<<endl; if(leaf_number) st.push(1-leaf_number);  leaf_number++; return IDENTIFIER;}
{COMMENT}                                       {}
<<EOF>> {st.push(1-leaf_number); yyterminate();}



%%

int yywrap() {
    return 1;
}