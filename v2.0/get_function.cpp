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
                        if(seperator.find(j)!=seperator.end()) v.push_back("fout<<\"n\"<<node_number<<\",\"<<"+to_string(p.size())+"<<\"[label=Seperator_\"<<$"+to_string(p.size())+"\"]\"; ");
                        else if(j=="IDENTIFIER") v.push_back("fout<<\"n\"<<node_number<<\",\"<<"+to_string(p.size())+"<<\"[label=Identifier_\"<<$"+to_string(p.size())+"\"]\"; ");
                        else if(literal.find(j)!=literal.end()) v.push_back("fout<<\"n\"<<node_number<<\",\"<<"+to_string(p.size())+"<<\"[label=\"<<"+j+"_<<$"+to_string(p.size())+"\"]\"; ");
                        else if(keyword.find(j)!=keyword.end()) v.push_back("fout<<\"n\"<<node_number<<\",\"<<"+to_string(p.size())+"<<\"[label=Keyword_\"<<$"+to_string(p.size())+"\"]\"; ");
                        else p[p.size()-1]='2';
                    }
                }
            }
            s+="\t\t{func(\""+temp+"\", "+p+"); ";
            for(int i=0;i<v.size();i++) s+=v[i];
            s+="}";
        }
        fout<<s<<endl;   
        if(flag==2) flag=1;     
    }
}