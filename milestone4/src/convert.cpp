#include<bits/stdc++.h>
using namespace std;

fstream fin,fout;
vector<vector<string> > text;
map<string,string> v;
map<string,set<string> > r;
map<string,string> t;

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
    fout<<"\t.section\t.rodata"<<endl<<".LC0:"<<endl<<"\t.string \"ld\\n\"\n\t.text"<<endl;
    if(text[0][0]!=".globl"){
        cout<<"No main function"<<endl;
        exit(1);
    }
    fout<<"\t"<<text[0][0]<<" "<<text[0][1];
    for(int i=1;i<text.size();i++){
        string reg1,reg2,op;
        if(text[i][0][0]=='_'){
            fout<<text[i][0]<<endl;
        }else if(text[i][0][0]=='.') fout<<text[i][0]<<endl;
        else{
            if(text[i][0]=="if"){

            }else if(text[i][0]=="store"){

            }else if(text[i][0]=="return"){

            }else if(text[i][0]=="goto"){

            }else if(text[i][0]=="call"){
            
            }else if(text[i][0]=="push"){
                
            }else if(text[i][0].size()>=5 && text[i][0].substr(0,5)=="print"){

            }else if(text[i][0].size()>=3 && text[i][0].substr(0,3)=="mem"){

            }else{
                if(text[i].size()==3){
                    if(text[i][0][0]=='#'){ 
                        if(v.find(text[i][2])==v.end()){
                            reg1 = get_empty_reg(text[i][2]);
                            print("movq",text[i][2],reg1);
                        }
                        else reg1 = v[text[i][2]];
                        r[reg1].insert(text[i][0]);
                    }else{
                        if(v.find(text[i][2])==v.end()){
                            reg1 = get_empty_reg(text[i][2]);
                            print("movq",text[i][2],reg1);
                        }
                        else reg1 = v[text[i][2]];
                        r[reg1].insert(text[i][0]);
                    }
                }
            }
        }
    }

}