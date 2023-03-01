#include <bits/stdc++.h> 
typedef long long int ll;
#define ld long double

using namespace std;

vector<string> k,k2;
const int MOD = 1e9+7;
const ld PI = acos(-1);
const ld EPS = 1e-9;
const ll INF = 1e18;

int check(string temp){
    temp = temp.substr(1,temp.size()-2);
    for(int i=0;i<k.size();i++){
        if(temp == k[i]) return i;
    }
    k.push_back(temp);
    return k.size()-1;
}

string bin(int k,int p){
    string ans,q;
    while(k!=0){
        ans.push_back(k%2+'0');
        k/=2;
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<p-ans.size();i++) q.push_back('0');
    return q+ans;
}

int main(){
    fstream fin,fout;
    fin.open("input.txt", ios::in);
    fout.open("output.txt",ios::out);
    set<string> a,b,c;
    string s;
    while(fin>>s){
        int k=0;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<'z') k=max(k,2);
            else if(s[i]>='A' && s[i]<'Z') k=max(k,1);
        }
        if(k==1) a.insert(s);
        else if(k==2){
            if(s[s.size()-1]==':'){
                if(b.find(s.substr(0,s.size()-1))==b.end()) b.insert(s.substr(0,s.size()-1));
                else cout<<s<<" appears twice"<<endl;
            }else c.insert(s);
        }
    }
    cout<<endl;
    for(auto it:c){
        if(b.find(it)==b.end()) cout<<it<<": is not defined"<<endl;
    }
    fout<<"\%token <s>";
    for(auto it:a) fout<<" "<<it;
    fout<<endl<<"\%type <s>";
    for(auto it:b) fout<<" "<<it;
}