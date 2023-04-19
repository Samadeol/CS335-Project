#include<bits/stdc++.h>
using namespace std;

fstream fin,fout;
vector<vector<string> > text;

int main(int argc, char**argv){
    string input,output;
    if(argc<2){
        cout<<"No Actions Provided"<<endl;
        exit(1);
    }
    for(int i=1;i<argc;i++){
        string k = argv[i];
        if(k.size()<6){
            cout<<k<<" is not a valid option."<<endl;
            exit(1);
        }
        if(k=="--help"){
            cout<<"Available Options:"<<endl<<endl;
            cout<<"--help     :  Opens this menu"<<endl;
            cout<<"--input    :  To enter input file destination from the build folder"<<endl;
            cout<<"--output   :  To enter output file destination from the build folder"<<endl;
            exit(1);
        }
        else if(k.size()<8){
            cout<<k<<" is not a valid option."<<endl;
            exit(1);
        }
        else if(k.substr(0,8)=="--input=") input = k.substr(8,k.size()-8);
        else if(k.size()<9){
            cout<<k<<" is not a valid option."<<endl;
            exit(1);
        }
        else if(k.size()<9){
            cout<<k<<" is not a valid option."<<endl;
            exit(1);
        }
        else if(k.substr(0,9)=="--output=") output = k.substr(9,k.size()-9);
        else{
            cout<<k<<" is not a valid option."<<endl;
            exit(1);
        }
    }
    if(input.size()==0){
        cout<<"No input file provided"<<endl;
        exit(1);
    }
    if(output.size()==0){
        output = input.substr(0,input.size()-3)+"s";
    }
    fin.open(input,ios::in);
    fout.open(output,ios::out);
    string s;
    while(getline(fin,s)){
        vector<string> lol;
        string temp;
        int k=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') k++;
            else if(s[i]==')') k--;
            if(s[i]==' ' && k==0){
                if(temp.size()) lol.push_back(temp);
                temp.clear();
            }else temp.push_back(s[i]);
        }
        if(temp.size()) lol.push_back(temp);
        if(lol.size()) text.push_back(lol);
    }
    for(int i=0;i<text.size();i++){
        for(int j=0;j<text[i].size();j++) cout<<text[i][j]<<",";
        cout<<endl;
    }
}