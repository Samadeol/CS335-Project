%{
#include<bits/stdc++.h>
#include <stdio.h>
#include<iostream>
using namespace std;
int num_lines=1;
int key_word=0;
std::vector < vector <std::string> >order;
std::map <std::string, int> identifier;
std::map <std::string, int> keywords;
std::map <std:: string, int> separator;
std::map <std:: string,int> operate;
std::map <std:: string, int> literal;
void update( string s , string attr );
%}
%option yylineno

INTEGER_TYPE_SUFFIX         "1"|"L"
DIGIT                       [0-9]
DIGITORUNDERSCORE           {DIGIT}|"_"
DIGITANDUNDERSCORE          {DIGITORUNDERSCORE}+
DIGITS                      {DIGIT}|{DIGIT}{DIGITANDUNDERSCORE}?{DIGIT}
DECIMAL_NUMERAL             0|[1-9]{DIGITS}?|[1-9]"_"+{DIGITS}
DECIMAL_LITERAL             {DECIMAL_NUMERAL}{INTEGER_TYPE_SUFFIX}?
HEX_DIGIT                   0|1|2|3|4|5|6|7|8|9|a|b|c|d|e|f|A|B|C|D|E|F
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
LINE_TERMINATOR             [\n\r]|"\r\n"
WHITESPACE                  [ \t\f]|{LINE_TERMINATOR}
SINGLE_CHARACTER            [^\'\\] 
STRING_CHARACTER_BASIC      [^\"\\]|{ESCAPE_SEQUENCE}
OCTAL_ESCAPE                \\{OCT_DIGIT}|\\{OCT_DIGIT}{OCT_DIGIT}|\\[0-3]{OCT_DIGIT}{OCT_DIGIT}
ESCAPE_SEQUENCE             "\b"|"\s"|"\t"|"\n"|"\f"|"\r"|"\\"|"\'"|\\\"|{OCTAL_ESCAPE}|\\{LINE_TERMINATOR}
STRING_CHARACTER            {STRING_CHARACTER_BASIC}|{ESCAPE_SEQUENCE}
CHARACTER_LITERAL           "'"{SINGLE_CHARACTER}"'"|"'"{ESCAPE_SEQUENCE}"'" 
STRING_LITERAL              \"{STRING_CHARACTER_BASIC}*\"
NULL_LITERAL                null 
KEYWORD                     abstract|continue|for|new|switch|assert|default|if|package|synchronized|boolean|do|goto|private|this|break|double|implements|protected|throw|byte|else|import|public|throws|case|enum|instanceof|return|transient|catch|extends|int|short|try|char|final|interface|static|void|class|finally|long|strictfp|volatile|const|float|native|super|while|_|exports|opens|requires|uses|module|permits|sealed|var|non-sealed|provides|to|with|open|record|transitive|yield
TEXT_BLOCK_WHITE_SPACE      [ \t\f]
TEXT_BLOCK                  \"\"\"{TEXT_BLOCK_WHITE_SPACE}*{LINE_TERMINATOR}([^\\\"]|\"([^\\\"])|\"\"([^\\\"]))*\"\"\"
LITERAL                     {INTEGER_LITERAL}|{BOOLEAN_LITERAL}|{NULL_LITERAL}|{CHARACTER_LITERAL}|{STRING_LITERAL}|{FLOAT_LITERAL}|{TEXT_BLOCK}
SEPARATOR                   "("|")"|"{"|"}"|"["|"]"|";"|","|"."|"..."|"@"|"::"
OPERATOR                    "="|">"|"<"|"!"|"~"|"?"|":"|"->"|"=="|">="|"<="|"!="|"&&"|"||"|"++"|"--"|"+"|"-"|"*"|"/"|"&"|"|"|"^"|"%"|"<<"|">>"|">>>"|"+="|"-="|"*="|"/="|"&="|"|="|"^="|"%="|"<<="|">>="|">>>="
END_OF_LINE_COMMENT         "//".*
NOT_STAR_NOT_SLASH          [^*//]|{LINE_TERMINATOR}
NOT_STAR                    [^*]|{LINE_TERMINATOR}
COMMENT_TAIL                "*"{COMMENT_TAIL_STAR}|{NOT_STAR}{COMMENT_TAIL}
COMMENT_TAIL_STAR           "/"|"*"{COMMENT_TAIL_STAR}|{NOT_STAR_NOT_SLASH}{COMMENT_TAIL}
TRADITIONAL_COMMENT         "/*"{COMMENT_TAIL}
COMMENT                     {TRADITIONAL_COMMENT}|{END_OF_LINE_COMMENT}
START                       "/*"
END                         "*/"
SIMPLE                      [^*]
COMPLEX                     "*"[^/]   
sp                          [ \t\n]  
IDENTIFIER                  [a-zA-Z_$][a-zA-Z0-9_$]*


INTEGRAL_TYPE               byte|short|int|long|char
FLOAT_POINT_TYPE            float|double
BOOLEAN_TYPE                boolean
SQUARE_LEFT                 \[
SQUARE_RIGHT                \]
EXTENDS                     "extends"
AND                         "&"
LARRROW                     "<"
RARROW                      ">"
SUPER                       "super"
CLASS                       "class"
IMPLEMENTS                  "implements"
PERMITS                      permits
CURLY_LEFT                   \{
CURLY_RIGHT                  \}
SEMI_COLON                   ";"
PUBLIC                       "public"
PRIVATE                      "private"
VOID                         "void"
FINAL                        "final"
THROWS                       "throws"
STATIC                       "static"
ENUM                         "enum"
RECORD                       "record"
QUESTION                     "?"
COMMA                        ","
EQUALS                       "="
DOT                          "."
LEFT_BRACKET                 \(
RIGHT_BRACKET                \)
THIS                         "this"
VAR                          "var"
COLON                        ":"
IF                           "if"
ELSE                         "else"
ASSERT                       "assert"
WHILE                        "while"
FOR                          "for"
BREAK                         "break"
YIELD                         "yield"
CONTINUE                      "continue"
RETURN                         "return"
THROW                          "throw"
SYNCHRONIZED                   "synchronized"
TRY                            "try"
CATCH                          "catch"
BAR                            "|"
FINALLY                        "finally"








%s newstate
%%
{END_OF_LINE_COMMENT}   {}
{LINE_TERMINATOR}       {num_lines++;}
"/"\*([^*]|(\*+([^*/])))*\*+"/"  {}
[ \t\f]+                {} 
{SEPARATOR}             {   string send=yytext;
                            update(send,"SEPARATOR");
                        }  
{LITERAL}               {   string send=yytext;
                            update(send,"LITERAL");
                        }
{OPERATOR}              {   string send=yytext;
                            update(send,"OPERATOR");
                        }
{KEYWORD}               {   string send=yytext;
                            update(send,"KEYWORD");
                        }
{IDENTIFIER}            {   string send=yytext;
                            update(send,"IDENTIFIER");
                        }
.                       {   cout<<"Illegal character: " << yytext <<" on line number "<<yylineno;
                            cout<<"\n";
                        }

%%

void update(string s, string attr){
    int find=0;
    int index=-1;
    for(int i=0;i<order.size();i++){
        if(order[i][0]==s){
            find=1;
            index=i;
            break;
        }
    }
    if(find){
        if(order[index][1]=="IDENTIFIER"){
            identifier[order[index][0]]++;
        }
        else if(order[index][1]=="LITERAL"){
            literal[order[index][0]]++;
        }
        else if(order[index][1]=="SEPARATOR"){
            separator[order[index][0]]++;
        }
        else if(order[index][1]=="KEYWORD"){
            keywords[order[index][0]]++;
        }
        else if(order[index][1]=="OPERATOR"){
            operate[order[index][0]]++;
        }
    }
    else{
        std::vector <string> make;
        make.push_back(s);
        make.push_back(attr);
        order.push_back(make);
        if(attr=="IDENTIFIER"){
            identifier[s]++;
        }
        else if(attr=="LITERAL"){
            literal[s]++;
        }
        else if(attr=="SEPARATOR"){
            separator[s]++;
        }
        else if(attr=="KEYWORD"){
            keywords[s]++;
        }
        else if(attr=="OPERATOR"){
            operate[s]++;
        }

    }
}
int main(){
    yylex();
        fstream fout;
        fout.open("answer2.csv",ios::out);
        fout<<"Lexeme"<<","<<"Token"<<","<<"Count";
        fout<<"\n";
    for(int i=0;i<order.size();i++){
        // cout<<order[i][0]<<order[i][1]<<"\n";
        if(order[i][1]=="LITERAL"){
            fout<<order[i][0]<<","<<order[i][1]<<","<<literal[order[i][0]];
            fout<<"\n";
        }
        else if(order[i][1]=="IDENTIFIER"){
            fout<<order[i][0]<<","<<order[i][1]<<","<<identifier[order[i][0]];
            fout<<"\n";
        }
        else if(order[i][1]=="KEYWORD"){
            // cout<<"HI"<<"\n";
            fout<<order[i][0]<<","<<order[i][1]<<","<<keywords[order[i][0]];
            fout<<"\n";
        }
        else if(order[i][1]=="SEPARATOR"){
            fout<<order[i][0]<<","<<order[i][1]<<","<<separator[order[i][0]];                
            fout<<"\n";
        }
        else if(order[i][1]=="OPERATOR"){
            fout<<order[i][0]<<","<<order[i][1]<<","<<operate[order[i][0]];
            fout<<"\n";
        }
    }
    // cout<<"Number of lines are:"<<num_lines;

}