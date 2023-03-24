#include "symbol_table.h"

sym_table* curr_sym_table;
sym_table* dirty_sym_table;
sym_table* default_sym_table;
map<sym_table*, sym_table*> parent;
string curr_file;

void init_symbol_table(){
    default_sym_table = new sym_table;
    curr_sym_table = default_sym_table;
    dirty_sym_table = new sym_table;
}

void new_scope(){
    parent.insert(make_pair(dirty_sym_table,curr_sym_table));
    curr_sym_table = dirty_sym_table;
    dirty_sym_table = new sym_table;
}

void old_scope(){
    sym_table* temp = curr_sym_table;
    curr_sym_table = parent[curr_sym_table];
    dirty_sym_table = temp;
    if(dirty_sym_table->size() == 0) parent.erase(dirty_sym_table);
}

void reset(){
    dirty_sym_table = new sym_table;
}

bool check(string name){
    if((*curr_sym_table).find(name)==(*curr_sym_table).end()) return false;
    else return true;
}

void make_entry(string name, string type, int line_number, string modifiers){
    sym_entry* new_sym_entry = new sym_entry;
    if(check(name)) (*curr_sym_table).insert(make_pair(name,new_sym_entry));
    (*curr_sym_table)[name]->line_number = line_number;
    (*curr_sym_table)[name]->source_file = curr_file;
    (*curr_sym_table)[name]->type = type;
    (*curr_sym_table)[name]->isfunc = false;
    (*curr_sym_table)[name]->modifiers = modifiers;
}

void make_func_entry(string name, string type, vector<tuple<string,string,bool,bool> > args, int line_number, string modifiers){
    make_entry(name,type,line_number,modifiers);
    (*curr_sym_table)[name]->arguments = args;
    (*curr_sym_table)[name]->child = dirty_sym_table;
    reset();
}

void make_class_entry(string name, int line_number, string modifiers){
    make_entry(name,name,line_number,modifiers);
    (*curr_sym_table)[name]->child = dirty_sym_table;
    reset();
}

void make_dirty_entry(string name, string type, int line_number, string modifiers){
    sym_entry* new_sym_entry = new sym_entry;
    if(check(name)) (*dirty_sym_table).insert(make_pair(name,new_sym_entry));
    (*dirty_sym_table)[name]->line_number = line_number;
    (*dirty_sym_table)[name]->source_file = curr_file;
    (*dirty_sym_table)[name]->type = type;
    (*dirty_sym_table)[name]->modifiers = modifiers;
}

string find_in_scope(string name){
    string t,p;
    for(int i=0;i<name.size();i++){
        if(name[i]=='.') break;
        t.push_back(name[i]);
    }
    sym_table* temp = curr_sym_table,*temp2;
    while(temp!=default_sym_table){
        if((*temp).find(t)!=(*temp).end()){
            if(t.size()==name.size()) return (*temp)[t]->type;
            else temp2 = (*temp)[t]->child;
            break;
        }
        temp = parent[temp];
    }
    if(temp==default_sym_table){
        if((*global_sym_table).find(t)==(*global_sym_table).end()){
            cout<<t<<" not declared in this scope"<<endl;
            exit(1);
        }
        else temp2 = (*global_sym_table)[t];
    }
    for(int i=t.size()+1;i<name.size();i++){
        if(name[i]=='.'){
            if((*temp2).find(p)==(*temp2).end()){
                cout<<name.substr(0,i)<<" not declared in this scope"<<endl;
                exit(1);
            }else temp2 = (*temp2)[p]->child;
            p.clear();
        }
        else p.push_back(name[i]);
    }
    if((*temp2).find(p)==(*temp2).end()){
        cout<<name<<" not declared in this scope"<<endl;
        exit(1);
    }
    return (*temp2)[p]->type;
}

string expression_type(string type1, string type2, string op){
    vector<string> types {"boolean","char","int","float"};
    vector<string>  ops1 = {"++","--","+","-","*","/","%"};
    if(op=="&&" || op=="||"){
        if(type1=="boolean" && type2=="boolean")return "boolean";
        else{
            cout<<"Invalid operand types for operator: "<<op<<endl;
            exit(1);
        }
    }

}

string check_class_modifiers(string str, string name){
    string ans = "00";
    for(int i=0;i<str.size();i++){
        if((str[i]=='2' || str[i]=='0') && ans[(str[i]-'0')/2]=='0')ans[(str[i]-'0')/2]='1';
        else{
            cout<<"Either wrong or repeated modifier used"<<endl;
            exit(1);
        }
    }
    if((ans[0]=='1') && name!=curr_file.substr(0,curr_file.size()-5)){
        cout<<"Public class "<<name<<" must be declared in file "<<name<<".java"<<endl;
        exit(1);
    } 
    return ans;
}

string check_method_modifiers(string str){
    string ans = "0000";
    for(int i=0;i<str.size();i++){
        if(ans[str[i]-'0']=='1'){
            cout<<"Repeated Modifier used"<<endl;
            exit(1);
        }
        ans[str[i]-'0']='1';
    }
    if(ans[0]=='1' && ans[1]=='1'){
        cout<<"Object cannot be both public and private"<<endl;
        exit(1);
    }
    return ans;
}

void check_gst(string name){
    if((*global_sym_table).find(name)==(*global_sym_table).end()){
        cout<<"No datatype or Class name of type: "<<name<<endl;
        exit(1);
    }
}

void check_constructor(string name){
    if((*global_sym_table).find(name)==(*global_sym_table).end() || (*global_sym_table)[name]!=curr_sym_table) cout<<"Constructor should have same name as class"<<endl;
}

bool check_first(){
    if(parent[curr_sym_table] == default_sym_table) return true;
    else return false;
}

void add_arguments(vector<tuple<string,string,bool, bool> > arguments, string name){

}

string expression_type(string type1, string type2, string op){

}

void error_msg(){

}