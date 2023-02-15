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
    k.clear();k2.clear();
    string s,temp;
    int p=0,flag=0;
    getline(cin,s);
    vector<pair<string,int> > v;
    for(int i=0;i<s.size()+1;i++){
        if(i<s.size()){
            if(s[i]=='{' || s[i]=='[') flag=1;
            else if(s[i]=='}' || s[i]==']') flag=0;
        }
        if(i==s.size() || (flag==0 && s[i]==' ')){
            if(temp.size()){
                if(temp[0]=='['){
                    v.push_back(make_pair(temp.substr(1,temp.size()-2),p));
                    p++;
                }
                else if(temp[0]=='{'){
                    if(temp.substr(1,temp.size()-2) == v[v.size()-1].first){
                        k2.push_back(v[v.size()-1].first);
                        v[v.size()-1].first+='S';
                    }
                    else v.push_back(make_pair(to_string(check(temp)),-1));
                }
                else v.push_back(make_pair(temp,-1));
                temp.clear();
            }
        }
        else temp.push_back(s[i]);
    }
    for(int i=0;i<pow(2,p);i++){
        string x = bin(i,p);
        string t;
        for(int j=0;j<v.size();j++){
            if(v[j].second < 0 || x[v[j].second]=='1'){
                t+=v[j].first;
                t.push_back(' ');
            }
        }
        cout<<t<<endl;
    }
    cout<<endl<<"ONE OR MORE"<<endl<<endl;
    for(int i=0;i<k2.size();i++) cout<<k2[i]+"S"<<endl<<k2[i]+'S'<<" "<<k2[i]<<endl<<k2[i]<<endl<<endl;
    cout<<endl<<"ZERO OR MORE"<<endl<<endl;
    for(int i=0;i<k.size();i++) cout<<i<<endl<<i<<" "<<k[i]<<endl<<k[i]<<endl<<"epsilon"<<endl<<endl;
}