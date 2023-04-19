#include <bits/stdc++.h>
#include "3ac.h"

vector <quadruple> code;
vector <quadruple> current;

extern string out_file_name;
long long int variable_number=0;
long long int label_number=0;
int inst_num;

using namespace std;


void emitt(string op,string arg1, string arg2, string result, int idx){
    quadruple entry;
    entry.op=op;
    entry.arg1=arg1;
    entry.arg2=arg2;
    entry.result=result;
    entry.index=idx;
    code.push_back(entry);
    inst_num++;
}

string array_access(string name, vector<int> a, vector<int> b){
    string t = new_temporary();
    for(int i=0;i<a.size();i++){
        if(i==0) emitt("*","#t_"+to_string(a[i]),"#t_"+to_string(b[i]),t,-1);
        else{
            string s = new_temporary();
            emitt("*","#t_"+to_string(a[i]),"#t_"+to_string(b[i]),s,-1);
            emitt("+",t,s,t,-1);
        }
    }
    return "*("+name+" + "+t+")";
}

string new_temporary(){
    string temp_var="#t_"+to_string(variable_number);
    variable_number++;
    return temp_var;
}

int reduce(string name){
    return stoi(name.substr(3,name.size()-1));
}

string get_index(int k, vector<int> &x){
    for(int i=0;i<x.size();i++){
        if(k==x[i]) return ".L"+to_string(i+1);
    }
    return "wtf";
}

void print3AC_code(){
    ofstream tac_file;
    string file_name = out_file_name+"3ac.txt";
    tac_file.open(file_name);
    set<int> y;
    vector<int> x;
    auto it = code.begin();
    for(int i=0;i<code.size();i++){
        if(code[i].arg1.size()>3 && code[i].arg1.substr(code[i].arg1.size()-4,4)=="main") tac_file<<"     .globl _"<<code[i].arg1<<endl;
        if(code[i].result=="goto") y.insert(code[i].index);
        if(code[i].op=="begin") it = code.begin()+i+1;
        if(code[i].op=="end"){
            quadruple entry;
            entry.op="string";
            entry.arg1="rsp - "+code[i].arg1;
            entry.arg2="";
            entry.result="";
            entry.index=-1;
            code.emplace(it,entry);
            i++;
        }
    }
    for(auto it:y) x.push_back(it);
    int k=0;
    bool s = false;
    for(int i=0;i<code.size();i++){
        if(code[i].op=="begin") s=true;
        else if(code[i].op=="false") s=false;
        if(s){
            if(k<x.size() && x[k]==i){
                tac_file<<".L"<<(k+1)<<":"<<endl;
                k++;
            }
            if(code[i].op == "string"){
                tac_file<<"    "<<code[i].arg1<<endl;
            }
            else if(code[i].op == "begin"){
                tac_file<<"_"<<code[i].arg1<<":"<<endl;
            }
            else if(code[i].op == "end"){
                tac_file<<"    return"<<endl;
            }
            else if(code[i].op == "if"){
                tac_file<<"    if "<<code[i].arg1<<" "<<code[i].result<<" "<<get_index(code[i].index,x)<<"\n";
            }
            else if(code[i].result=="goto"){
                tac_file<<"    goto "<<get_index(code[i].index,x)<<endl;
            }
            else if(code[i].op==""){
                tac_file<<"    "<<code[i].result<<" = "<<code[i].arg1<<endl;
            }
            else {
                tac_file<<"    "<<code[i].result<<" = "<<code[i].arg1<<" "<<code[i].op<<" "<<code[i].arg2<<"\n";
            }
        }
    }
}

void backpatch(vector <int>&instructions, int target){
    for (int i=0;i<instructions.size();i++){
        code[instructions[i]].index=target;
        //cout<<instructions[i]<<" ";
    }
    //cout<<endl;

}

vector<int> merge(vector <int>& list1, vector <int>& list2){
    for(int i=0;i<list2.size();i++){
        list1.push_back(list2[i]);
    }
    return list1;
}

string array_func(string name, vector<int>&dim, string type){
    string size;
    if(type.substr(0,3)=="int" || type.substr(0,5)=="float") size="8";
    else if(type.substr(0,4)=="char" || type.substr(0,4)=="short") size="8";
    else if(type.substr(0,4)=="byte") size = "8";
    else if(type.substr(0,4)=="long" || type.substr(0,6)=="double") size = "8";
    else {
        cout<<"Unexpected Error Occurred. Pls give diff input"<<endl;
        exit(1);
    }
    string t = new_temporary();
    emitt("",size,"",t,-1);
    for(int i=dim.size()-1;i>=0;i--){
        emitt("string", "store "+t, "","",-1);
        string k = new_temporary();
        emitt("*","#t_"+to_string(dim[i]),t,k,-1);
        dim[i]=reduce(t);
        t=k;
    }
    emitt("string","mem("+t+")","","",-1);
    return "rax";
}