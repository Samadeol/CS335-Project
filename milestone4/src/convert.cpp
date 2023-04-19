#include<bits/stdc++.h>
using namespace std;

fstream fin,fout;
vector<vector<string> > text;
map<string,string> t; 
map<string,string> r;
map<string,string> s;
int k;

void print(string a, string b, string c){
    fout<<"\t"<<a;
    if(b=="")fout<<endl;
    else{
        if(b.size()>3 && b.substr(0,3)=="rbp"){
            string p = b.substr(4,b.size()-5);
            fout<<"\t"<<p<<"(%rbp)";
        }else if(b[0]=='r') fout<<"\t\%"<<b;
        else fout<<"\t"<<b;
        if(c=="") fout<<endl;
        else{
            if(c.size()>3 && c.substr(0,3)=="rbp"){
                string p = c.substr(4,c.size()-5);
                fout<<", "<<p<<"(%rbp)"<<endl;
            }else if(c[0]=='r') fout<<", \%"<<c<<endl;
            else fout<<", "<<c<<endl;
        }
    }
}

string get_empty_reg(string reg = ""){
    if(r.empty()) return "r8";
    int l=8;
    for(auto it:r){
        string x = it.first;
        x = x.substr(1,x.size()-1);
        if(l<stoi(x)) return "r"+to_string(l);
        l++;
    }
    if(l<16) return "r"+to_string(l);
    if(reg != "r8") reg = "r8";
    else reg = "r9";
    print("pushq",reg,"");
    k-=8;
    t.erase(r[reg]);
    s[r[reg]] = "rbp["+to_string(k)+"]";
    r.erase(reg);
    return reg;
}

int main(int argc, char**argv){
    string input,output;
    if(argc<2){
        cout<<"No Actions Provided"<<endl;
        exit(1);
    }
    bool please;
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
    string s1;
    while(getline(fin,s1)){
        vector<string> lol;
        string temp;
        int k=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]=='(') k++;
            else if(s1[i]==')') k--;
            if(s1[i]==' ' && k==0){
                if(temp.size()) lol.push_back(temp);
                temp.clear();
            }else temp.push_back(s1[i]);
        }
        if(temp.size()) lol.push_back(temp);
        if(lol.size()) text.push_back(lol);
    }
    fout<<"\t.section\t.rodata"<<endl<<".LC0:"<<endl<<"\t.string \"\%ld\\n\"\n\t.text"<<endl;
    if(text[0][0]!=".globl"){
        cout<<"No main function"<<endl;
        exit(1);
    }
    fout<<"\t"<<text[0][0]<<" "<<text[0][1]<<endl;
    for(int i=1;i<text.size();i++){
        string reg1,reg2;
        if(text[i][0][0]=='_'){
            please = false;
            if(text[i][0]=="_main:"){
                please=true;
                fout<<"main:"<<endl;
            }
            else fout<<text[i][0]<<endl;
            k = -stoi(text[i+1][2]);
            print("pushq","rbp","");
            print("movq","rsp","rbp");
        }else if(text[i][0][0]=='.') fout<<text[i][0]<<endl;
        else{
            if(text[i][0]=="if"){
                if(t.find(text[i][1])==t.end()){
                    reg1 = get_empty_reg();
                    print("movq",s[text[i][1]],reg1);
                }else reg1 = t[text[i][1]];
                t.erase(text[i][1]);
                if(t.find(text[i][3])==t.end()){
                    reg2 = get_empty_reg(reg1);
                    print("movq",s[text[i][3]],reg2);
                }else reg2 = t[text[i][3]];
                t.erase(text[i][3]);
                print("cmpq",reg2,reg1);
                if(text[i][2]=="<") print("jl",text[i][5],"");
                if(text[i][2]==">") print("jg",text[i][5],"");
                if(text[i][2]==">=") print("jge",text[i][5],"");
                if(text[i][2]=="<=") print("jle",text[i][5],"");
                if(text[i][2]=="==") print("je",text[i][5],"");
                if(text[i][2]=="!=") print("jne",text[i][5],"");
                r.erase(reg1);
                r.erase(reg2);       
            }else if(text[i][0]=="store"){
                print("pushq",t[text[i][1]],"");
                k-=8;
                s[text[i][1]]="rbp["+to_string(k)+"]";
                r.erase(t[text[i][1]]);
                t.erase(text[i][1]);
            }else if(text[i][0]=="return"){
                if(please) print("movq","$0","rax");
                print("leave","","");
                print("ret","","");
                s.clear();
            }else if(text[i][0]=="goto"){
                print("jmp",text[i][1],"");
            }else if(text[i][0]=="call"){
                print("call","_"+text[i][1],"");
            }else if(text[i][0]=="push"){
                if(text[i][1][0]=='#'){
                    if(t.find(text[i][1])==t.end()){
                        reg1 = get_empty_reg();
                        print("movq",s[text[i][1]],reg1);
                    }else reg1 = t[text[i][1]];
                    t.erase(text[i][1]);
                    r.erase(reg1);
                }else{
                    reg1 = get_empty_reg();
                    print("movq",text[i][1],reg1);
                }
                print("pushq",reg1,"");
            }else if(text[i][0].size()>=5 && text[i][0].substr(0,5)=="print"){
                string p = text[i][0].substr(6,text[i][0].size()-7);
                if(t.find(p)==t.end()) print("movq",s[p],"rsi");
                else{
                    print("movq",t[p],"rsi");
                    r.erase(t[p]);
                    t.erase(p);
                }
                print("leaq",".LC0(%rip)","rdi");
                print("movq","$0","rax");
                print("call","printf@PLT","");
            }else if(text[i][0].size()>=3 && text[i][0].substr(0,3)=="mem"){
                string p = text[i][0].substr(4,text[i][0].size()-5);
                if(p[0]=='#'){
                    if(t.find(p)==t.end()) print("movq",s[p],"rdi");
                    else{
                        print("movq",t[p],"rdi");
                        r.erase(t[p]);
                        t.erase(p);
                    }
                }else print("movq","$"+p,"rdi");
                print("call","malloc@PLT","");
            }else{
                if(text[i].size()==3){
                    if(text[i][0]=="rsp"){
                        if(text[i][1]=="+") print("addq","$"+text[i][2],"rsp");
                        else print("subq","$"+text[i][2],"rsp");
                    }else if(text[i][0] == "rax"){
                        if(t.find(text[i][2])==t.end()) print("movq",s[text[i][2]],"rax");
                        else{
                            print("movq",t[text[i][2]],"rax");
                            r.erase(t[text[i][2]]);
                            t.erase(text[i][2]);
                        }
                    }else if(text[i][2] == "rax") print("movq","rax",text[i][0]);
                    else if(text[i][0][0]=='#'){ 
                        reg1 = get_empty_reg();
                        if(text[i][2][0]=='-' || (text[i][2][0]>='0' && text[i][2][0]<='9'))print("movq","$"+text[i][2],reg1);
                        else print("movq",text[i][2],reg1);
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
                }else if(text[i].size()==4){
                    if(t.find(text[i][3])==t.end()){
                        reg1 =get_empty_reg();
                        print("movq",s[text[i][3]],reg1);
                    }else reg1 = t[text[i][3]];
                    t.erase(text[i][3]);
                    if(text[i][2]=="-") print("negq",reg1,"");
                    if(text[i][2]=="~") print("notq",reg1,"");
                    r[reg1] = text[i][0];
                    t[text[i][0]] = reg1;
                }else{
                    if(t.find(text[i][2])==t.end()){
                        reg1 = get_empty_reg();
                        print("movq",s[text[i][2]],reg1);
                    }else reg1 = t[text[i][2]];
                    t.erase(text[i][2]);
                    if(text[i][4]=="1"){
                        if(text[i][3]=="+") print("incq",reg1,"");
                        else print("decq",reg1,"");
                        t[text[i][2]] = reg1;
                        r[reg1] = text[i][2];
                        continue;
                    }
                    if(t.find(text[i][4])==t.end()){
                        reg2 = get_empty_reg(reg1);
                        print("movq",s[text[i][4]],reg2);
                    }else reg2 = t[text[i][4]];
                    t.erase(text[i][4]);
                    if(text[i][3]=="+") print("addq",reg2,reg1);
                    else if(text[i][3]=="-") print("subq",reg2,reg1);
                    else if(text[i][3]=="*") print("imulq",reg2,reg1);
                    else if(text[i][3]=="/" || text[i][2]=="%"){
                        print("movq",reg1,"rax");
                        print("cltd","","");
                        print("idivq",reg2,"");
                        if(text[i][3] == "/") print("movq","rax",reg1);
                        else print("movq","rdx",reg1);
                    }else if(text[i][3]=="<<" || text[i][3]==">>"){
                        print("movq",reg2,"rcx");
                        if(text[i][3]=="<<") print("salq","rcx",reg1);
                        else print("sarq","rcx",reg1);
                    }
                    else if(text[i][3]=="&") print("andq",reg2,reg1);
                    else if(text[i][3]=="|") print("orq",reg2,reg1);
                    else if(text[i][3]=="^") print("xorq",reg2,reg1);
                    r[reg1]=text[i][0];
                    r.erase(reg2);
                    t[text[i][0]] = reg1;
                }
            }
        }
    }
}