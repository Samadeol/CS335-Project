#include <bits/stdc++.h> 
typedef long long int ll;
#define ld long double

using namespace std;

vector<string> k,k2;
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
            int count=0;
            for(int i=0;i<s.size();i++){
                if(((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) && (i==s.size()-1 || s[i+1]==' ')) count++;
            }
            s+="\t\t{func(\""+temp+"\", "+to_string(count)+");}";
        }
        fout<<s<<endl;   
        if(flag==2) flag=1;     
    }
}