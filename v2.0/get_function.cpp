#include <bits/stdc++.h> 
typedef long long int ll;
#define ld long double

using namespace std;

vector<string> k,k2;
set<string> seperator;
set<string> literal;
set<string> keyword;
const int MOD = 1e9+7;
const ld PI = acos(-1);
const ld EPS = 1e-9;
const ll INF = 1e18;

void adding_separators(){
    seperator.insert("COMMA");
    seperator.insert("DOT");
    seperator.insert("TRIPLE_DOT");
    seperator.insert("LEFT_PARANTHESIS");
    seperator.insert("RIGHT_PARANTHESIS");
    seperator.insert("LEFT_CURLY_BRACE");
    seperator.insert("RIGHT_CURLY_BRACE");
    seperator.insert("LEFT_SQUARE_BRACE");
    seperator.insert("RIGHT_SQUARE_BRACE");
    seperator.insert("SEMI_COLON");
    seperator.insert("DOUBLE_COLON");
}

void adding_literals(){
    literal.insert("CHARACTER_LITERAL");
    literal.insert("BOOLEAN_LITERAL");
    literal.insert("FLOATINGPOINT_LITERAL");
    literal.insert("INTEGER_LITERAL");
    literal.insert("NULL_LITERAL");
    literal.insert("STRING_LITERAL");
    literal.insert("TEXTBLOCK");
}

void adding_keywords(){
    keyword.insert("ASSERT");
    keyword.insert("BOOLEAN_TYPE");
    keyword.insert("BREAK");
    keyword.insert("CATCH");
    keyword.insert("CLASS");
    keyword.insert("CONTINUE");
    keyword.insert("ELSE");
    keyword.insert("EXTENDS");
    keyword.insert("FINAL");
    keyword.insert("FINALLY");
    keyword.insert("FLOAT_POINT_TYPE");
    keyword.insert("FOR");
    keyword.insert("IF");
    keyword.insert("IMPLEMENTS");
    keyword.insert("IMPORT");
    keyword.insert("INTEGRAL_TYPE");
    keyword.insert("INTERFACE");
    keyword.insert("NEW");
    keyword.insert("PERMITS");
    keyword.insert("PRIVATE");
    keyword.insert("PUBLIC");
    keyword.insert("RETURN");
    keyword.insert("STATIC");
    keyword.insert("SUPER");
    keyword.insert("SYNCHRONIZED");
    keyword.insert("THIS");
    keyword.insert("THROW");
    keyword.insert("THROWS");
    keyword.insert("TRY");
    keyword.insert("VAR");
    keyword.insert("VOID");
    keyword.insert("WHILE");
    keyword.insert("YIELD");
}
void initiate(map<string,string> &m){
    m.insert(make_pair("DotIdentifiers","Name"));
    m.insert(make_pair("ClassModifiers","Modifiers"));
    m.insert(make_pair("ClassModifier","Modifier"));
    m.insert(make_pair("FormalParameter","Parameter"));
    m.insert(make_pair("FormalParameterList","ParameterList"));
}

int main(){
    map<string,string> m;
    fstream fin,fout;
    fin.open("input.txt", ios::in);
    fout.open("lexer_with_func.txt",ios::out);
    adding_keywords();
    adding_literals();
    adding_separators();
    initiate(m);
    string s,temp;
    int flag=0;
    while(getline(fin,s)){
        for(int i=0;i<s.size();i++){
            if(s[i]==':'){
                temp = s.substr(0,i);
                if(m.find(temp)!=m.end()) temp = m[temp];
                flag=2;
            }else if(s[i]==';') flag=0;
        }
        if(flag==1){
            string p;
            vector<string> v;
            int count=0,f=1,k=-1;
            for(int i=0;i<s.size();i++){
                if(s[i]=='|' || s[i]==' '){
                    k=i;
                    continue;
                }
                if(s[i]>='a' && s[i]<='z') f=0;
                if(((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) && (i==s.size()-1 || s[i+1]==' ')){
                    if(f==0) p.push_back('0');
                    else{
                        p.push_back('1');
                        string j = s.substr(k+1,i-k);
                        string please = "a";
                        please[0]+=p.size()-1;
                        if(seperator.find(j)!=seperator.end()) v.push_back("fout<<\"n\"<<node_number<<\""+please+"\"<<\"[label=\\\"Seperator_\"<<$"+to_string(p.size())+"<<\"\\\"]\"<<endl; ");
                        else if(j=="IDENTIFIER") v.push_back("fout<<\"n\"<<node_number<<\""+please+"\"<<\"[label=\\\"Identifier_\"<<$"+to_string(p.size())+"<<\"\\\"]\"<<endl; ");
                        else if(literal.find(j)!=literal.end()) v.push_back("fout<<\"n\"<<node_number<<\""+please+"\"<<\"[label=\\\""+j+"_\"<<$"+to_string(p.size())+"<<\"\\\"]\"<<endl; ");
                        else if(keyword.find(j)!=keyword.end()) v.push_back("fout<<\"n\"<<node_number<<\""+please+"\"<<\"[label=\\\"Keyword_\"<<$"+to_string(p.size())+"<<\"\\\"]\"<<endl; ");
                        else p[p.size()-1]='2';
                    }
                    f=1;
                }
            }
            s+="\t\t{ ";
            for(int i=0;i<v.size();i++) s+=v[i];
            s+="func(\""+temp+"\", \""+p+"\");";
            s+="}";
        }
        fout<<s<<endl;   
        if(flag==2) flag=1;     
    }
}