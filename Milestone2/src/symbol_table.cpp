#include "symbol_table.h"

list_sym_table* global_sym_table;
sym_table* curr_sym_table;
sym_table* default_sym_table;
map<sym_table*, sym_table*> parent;
string curr_file;

void init_symbol_table(){
    curr_sym_table = default_sym_table;
    global_sym_table = new list_sym_table;
}

bool check(string name){
    if(curr_sym_table ==  default_sym_table){
        if(gst_look_up(name)) return false;
        else return true;
    }else{
        if(curr_look_up(curr_sym_table,name)) return false;
        else return true;
    }
    return true;
}

void make_symbol_table(string name){
    sym_table* new_sym_table = new sym_table;
    if(curr_sym_table ==  default_sym_table){
        (*global_sym_table).insert(make_pair(name,new_sym_table));
        parent.insert(make_pair(new_sym_table,default_sym_table));
    }else{
        parent.insert(make_pair(new_sym_table,curr_sym_table));
    }
    curr_sym_table = new_sym_table;
}

sym_entry* curr_look_up(sym_table* table, string name){
    if((*table).find(name)==(*table).end()) return NULL;
    else return (*table)[name];
}

sym_table* gst_look_up(string name){
    if((*global_sym_table).find(name)==(*global_sym_table).end()) return NULL;
    else return (*global_sym_table)[name];
}

void make_entry(string name, string type, int line_number, string modifiers){
    sym_entry* new_sym_entry = new sym_entry;
    if(check(name)) (*curr_sym_table).insert(make_pair(name,new_sym_entry));
    (*curr_sym_table)[name]->line_number = line_number;
    (*curr_sym_table)[name]->normal = 0;
    (*curr_sym_table)[name]->source_file = curr_file;
    (*curr_sym_table)[name]->type = type;
    (*curr_sym_table)[name]->type = type;
    (*curr_sym_table)[name]->modifiers = modifiers;
}

void make_func_entry(string name, string type, vector<tuple<string,string,int,bool,bool> > args, int line_number, string modifiers, int dims){
    make_entry(name,type,line_number,modifiers);
    (*curr_sym_table)[name]->arguments = args;
    (*curr_sym_table)[name]->normal = 2;
    (*curr_sym_table)[name]->dimension = dims;
    make_symbol_table(name);
}

void make_array_entry(string name, string type, int line_number, vector<int> dims, string modifiers){
    make_entry(name,type,line_number,modifiers);
    (*curr_sym_table)[name]->normal = 1;
    (*curr_sym_table)[name]->dims = dims;
}

void make_class_entry(string name, int line_number, string modifiers){
    make_entry(name,name,line_number, modifiers);
    (*curr_sym_table)[name]->normal = 3;
    make_symbol_table(name);
}

string check_class_modifiers(string str, string name){
    string ans = "00";
    for(int i=0;i<str.size();i++){
        if((str[i]=='2' || str[i]=='0') && (ans.size()==0 || (ans.size()==1 && ans[0]!=str[i]))) ans[(str[i]-'0')/2]='1';
        else{
            cout<<"Either wrong or repeated modifier used"<<endl;
            exit(1);
        }
    }
    if((ans[0]=='0' || ans[1]=='0') && name!=curr_file.substr(0,curr_file.size()-5)){
        cout<<"Public class "<<name<<" must be declared in file "<<name<<".java";
        exit(1);
    } 
    sort(ans.begin(),ans.end());
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

void up_sym_table(){
    curr_sym_table = parent[curr_sym_table];
}

void check_gst(string name){
    if((*global_sym_table).find(name)==(*global_sym_table).end()){
        cout<<"No datatype or Class name of type: "<<name<<endl;
        exit(1);
    }
}

void error_msg(){

}