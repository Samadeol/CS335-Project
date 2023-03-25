#include <bits/stdc++.h>
#include "3ac.h"

vector<quadruple> code;
vector <quadruple> current;

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
    if(idx==-1){entry.index=code.size();}
    code.push_back(entry);
    inst_num++;
}

string new_temporary(){
    string temp_var="#t_"+to_string(variable_number);
    variable_number++;
    return temp_var;
}

void print3AC_code(){
    ofstream tac_file;
    tac_file.open("intermediate_3ac.csv");
    // for(int i=0;i<code.size(); i++){
    //     tac_file<<code[i].op<<","<<code[i].arg1<<","<<code[i].arg2<<","<<code[i].result<<","<<code[i].index<<","<<i<<endl;
    // }
    // cout<<endl;
    for(int i=0;i<code.size();i++){
        if(code[i].op=="normal"){
            tac_file<<i<<": "<<code[i].result<<" = "<<code[i].arg1<<"\n";

        }
        else if(code[i].op=="if"){
            tac_file<<i<<": "<<"if "<<code[i].arg1<<" "<<code[i].result<<" "<<code[i].index<<"\n";

        }
        else if(code[i].op=="goto"){
                tac_file<<i<<": goto "<<code[i].index<<"\n";


        }
        else if(code[i].op=="="){
            tac_file<<i<<": "<<code[i].result<<" = "<<code[i].arg1<<"\n";
        }
        else {
            tac_file <<i<<": "<<code[i].result<<" = "<<code[i].arg1<<" "<<code[i].op<<" "<<code[i].arg2<<"\n";
        }
    }
}

void backpatch(vector <int>&instructions, int target){
    cout<<"Start";
    for (int i=0;i<instructions.size();i++){
        cout<<instructions[i]<<" ";
    }
    cout<<"\n";
    cout<<target;
    for (int i=0;i<instructions.size();i++){
        code[instructions[i]].index=target;
    }

}

vector<int> merge(vector <int>& list1, vector <int>& list2){
    for(int i=0;i<list2.size();i++){
        list1.push_back(list2[i]);
    }
    return list1;
}

vector<int> makelist(int i){
    vector <int>make;
    make.push_back(i);
    return make;
}
