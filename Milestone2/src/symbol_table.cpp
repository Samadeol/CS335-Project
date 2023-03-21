#include "symbol_table.h"

list_sym_table* global_sym_table;
sym_table* curr_sym_table;
sym_table* default_sym_table;
map<sym_table*, sym_table*> parent;
string curr_file;

void init_symbol_table(){
    curr_sym_table = default_sym_table;
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

void make_entry(string name, string type, int line_number){
    sym_entry* new_sym_entry = new sym_entry;
    if(check(name)) (*curr_sym_table).insert(make_pair(name,new_sym_entry));
    else error_msg();
    (*curr_sym_table)[name]->line_number = line_number;
    (*curr_sym_table)[name]->normal = 0;
    (*curr_sym_table)[name]->source_file = curr_file;
    (*curr_sym_table)[name]->type = type;
}

void make_func_entry(string name, string type, vector<pair<string,string> > args, int line_number){
    make_entry(name,type,line_number);
    (*curr_sym_table)[name]->arguments = args;
    (*curr_sym_table)[name]->normal = 2;
}

void make_array_entry(string name, string type, int line_number, vector<int> dims){
    make_entry(name,type,line_number);
    (*curr_sym_table)[name]->normal = 1;
    (*curr_sym_table)[name]->dims = dims;
}

void make_class_entry(string name, int line_number){
    make_entry(name,name,line_number);
    (*curr_sym_table)[name]->normal = 3;
    make_symbol_table(name);
}

void error_msg(){

}