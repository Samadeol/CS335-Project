#include<bits/stdc++.h>
using namespace std;

fstream fin,fout;
vector<vector<string> > text;
map<string,string> t; 
map<string,string> r;
map<string,string> s;

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
    int k;
    fout<<"\t"<<text[0][0]<<" "<<text[0][1];
    for(int i=1;i<text.size();i++){
        string reg1,reg2,op;
        if(text[i][0][0]=='_'){
            fout<<text[i][0]<<endl;
            k = -stoi(text[i+1][2]);
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
                    if(text[i][0]=="rsp"){
                        if(text[i][1]=="+") print("addq","$"+text[i][2],"rsp");
                        else print("subq","$"+text[i][2],"rsp");
                    }else if(text[i][0][0]=='#'){ 
                        reg1 = get_empty_reg();
                        print("movq",text[i][2],reg1);
                        r[reg1] = text[i][0];
                        t[text[i][0]] = reg1;
                    }else{
                        if(t.find(text[i][2])==t.end()){
                            reg1 = get_empty_reg();
                            print("movq",s[text[i][2]],reg1);
                        }else reg1 = t[text[i][2]];
                        t.erase(text[i][2]);
                        print("movq",reg1,text[i][0]);
                        r.erase(reg1);
                    }
                }
                if(text[i].size()==4){
                    if(t.find(text[i][3]==t.end())){
                        reg1 =get_empty_reg();
                        print("movq",s[text[i][3]],reg1);
                    }else reg1 = t[text[i][3]];
                    t.erase(text[i][3]);
                    if(text[i][2]=="-") print("negq",reg1,"");
                    if(text[i][2]=="~") print("notq",reg1,"");
                    r[reg1] = text[i][0];
                    t[text[i][0]] = reg1;
                }else{
                    if(t.find(text[i][2])==t.end())){
                        reg1 = get_empty_reg();
                        print("movq",s[text[i][2]],reg1);
                    }else reg1 = t[text[i][2]];
                    t.erase(text[i][2]);
                    if(t.find(text[i][4])==t.end())){
                        reg2 = get_empty_reg();
                        print("movq",s[text[i][4]],reg2);
                    }else reg2 = t[text[i][4]];
                    t.erase(text[i][4]);
                    if(text[i][3]=="+") print("addq",reg2,reg1);
                    else if(text[i][3]=="-") print("subq",reg2,reg1);
                    else if(text[i][3]=="*") print("imulq",reg2,reg1);
                    else if(text[i][3]=="/" || text[i][2]=="%"){
                        print("movl",reg1,"rax");
                        print("cltd","","");
                        print("idivq",reg2);
                        if(text[i][3] == "/") print("movl","rax",reg1);
                        else print("movl","rdx",reg1);
                    }else if(text[i][3]=="<<" || text[i][3]==">>"){
                        print("movl",reg2,"rcx");
                        if(text[i][3]=="<<") print("salq","rcx",reg1);
                        else print("sarq","rcx",reg1);
                    }
                    else if(text[i][3]=="&") print("andq",reg2,reg1);
                    else if(text[i][3]=="|") print("orq",reg2,reg1);
                    else if(text[i][3]=="^") print("xorq",reg2,reg1);
                    r[reg1]=text[i][0];
                    t[text[i][0]] = reg1;
                }
            }
        }
    }

}