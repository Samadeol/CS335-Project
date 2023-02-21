%{
    #include <bits/stdc++.h>

    using namespace std;

    string op = "Operator";
    string sep = "Separator";
    string id = "Identifier";
    string str = "String";
    string lt = "Literal";
    string key = "Keyword";

    unordered_map<string, pair<string,int> > result;
    vector<string> order;

    void func(string a, string b){
        if(result.find(a)==result.end()) order.push_back(a);
        result[a].first = b;
        result[a].second++;
    }
%}

%option yylineno
%x comment
%x textblock

LT          [\n\r]
WS          [ \t\f]
COMMENT     \/\/[^\f\n\r]*{LT}?
RKEY        abstract|continue|for|new|switch|assert|default|if|package|synchronized|boolean|do|goto|private|this|break|double|implements|protected|throw|byte|else|import|public|throws|case|enum|instanceof|return|transient|catch|extends|int|short|try|char|final|interface|static|void|class|finally|long|strictfp|volatile|const|float|native|super|while|"_"
CKEY        exports|opens|requires|uses|module|permits|sealed|var|non-sealed|provides|to|with|open|record|transitive|yield
ID          [a-zA-Z][a-zA-Z0-9]*
DIGIT       [0-9]
NONZERO     [1-9]
PFDEC       [0-9\_]*{DIGIT}
DIGITS      {DIGIT}{PFDEC}?
DECIMAL     0|{NONZERO}{PFDEC}?[1L]?
HEXDIGIT    [0-9a-fA-F]
PFHEX       [0-9a-fA-F\_]*{HEXDIGIT}
HEXDIGITS   {HEXDIGIT}{PFHEX}?
HEX         0[xX]{HEXDIGITS}[1L]?
OCTDIGIT    [0-7]
OCT         0[0-7\_]*{OCTDIGIT}[1L]?
PFBIN       [0-1\_]*[0-1]
BINARY      0[bB][0-1]{PFBIN}?[1L]?
EXPONENT    [eE][+-]?{DIGITS}
FLOATDEC    {DIGITS}\.{DIGITS}?{EXPONENT}?[fFdD]?|\.{DIGITS}{EXPONENT}?[fFdD]?|{DIGITS}{EXPONENT}[fDdD]?|{DIGIT}[fFdD]
BINEXPONENT [pP][+-]?{DIGITS}
HEXSIG      {HEX}\.?|0[xX]{HEXDIGITS}?\.{HEXDIGITS}
HEXDEC      {HEXSIG}{BINEXPONENT}[fFdD]?
BOOL        true|false
CHAR        \'[^\'\\\n\r]\'  
STRING_CHAR   [^\"\\\n\r]

STRING      \"{STRING_CHAR}*\"
TEXTBLOCK   \"\"\"{WS}*{LT}
NULL        null
SEPARATOR   "("|")"|"{"|"}"|"["|"]"|";"|","|"."|"..."|"@"|"::"
OPERATOR    "="|">"|"<"|"!"|"~"|"?"|":"|"->"|"=="|">="|"<="|"!="|"&&"|"||"|"++"|"--"|"+"|"-"|"*"|"/"|"&"|"|"|"^"|"%"|"<<"|">>"|">>>"|"+="|"-="|"*="|"/="|"&="|"|="|"^="|"%="|"<<="|">>="|">>>="

%option reentrant noyywrap

%%

{RKEY}|{CKEY} {func(yytext,key);}
{OPERATOR}  {func(yytext,op);}
{SEPARATOR} {func(yytext,sep);}
{NULL}|{CHAR}|{STRING}|{HEXDEC}|{FLOATDEC}|{OCT}|{HEX}|{BINARY}|{DECIMAL}|{BOOL}   {func(yytext,lt);}
{TEXTBLOCK} {yymore(); BEGIN textblock;}
<textblock>\"\"\" {func(yytext,lt); BEGIN 0;}
<textblock>\\   {cerr<<"Error "<<yytext<<" in line "<<yylineno; exit(1);}
<textblock>[^\\]  {yymore();}
{WS}|{LT}|{COMMENT} //
\/\*    {BEGIN comment;}
<comment>\*\/    {BEGIN 0;}
<comment>.|{LT} //
{ID}    {func(yytext,id);}
.   {cerr<<"Error "<<yytext<<" in line "<<yylineno; exit(1);}

%%

int main(int argc, char* argv[]){

    yyscan_t scanner;
    yylex_init(&scanner);
    yylex(scanner);
    yylex_destroy(scanner);
    
    fstream fout;
    //hi
    string s;
    s.append(argv[argc-1]);
    fout.open("lexer-results/"+s+".csv", ios::out);
    fout<<"Lexemes,Token,Count"<<endl;
    for(int i= 0;i<order.size();i++){
        auto it = result.find(order[i]);
        fout<<it->first<<","<<(it->second).first<<","<<(it->second).second<<endl;
    }
    exit(0);
}