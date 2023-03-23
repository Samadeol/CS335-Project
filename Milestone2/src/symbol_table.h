#include<bits/stdc++.h>
using namespace std;
#define ll long long

typedef struct sym_entry{
    string type;
    string source_file;
    string value;
    int line_number;
    int normal; //normal->0 = basic  normal->1 = array  normal->2 = func  normal->3 = class/interface
    int size;
    int offset;
    string modifiers;
    vector<int> dims;
    map<string, sym_entry*> *child;
    vector<tuple<string,string,bool, bool> > arguments;

}sym_entry;

typedef map<string, sym_entry*> sym_table;
typedef map<string, sym_table*> list_sym_table;

extern list_sym_table* global_sym_table;
extern sym_table* curr_sym_table;
extern sym_table* dirty_sym_table;
extern sym_table* default_sym_table;
extern map<sym_table*, sym_table*> parent;
extern string curr_file;

void init_symbol_table();
void new_scope();
void old_scope();
void reset();
bool check(string name);
sym_entry* curr_look_up(sym_table* table, string name);
sym_table* gst_look_up(string name);
void make_entry(string name, string type, int line_number, string modifiers);
void make_func_entry(string name, string type, vector<tuple<string,string,bool,bool> > args, int line_number, string modifiers);
string check_class_modifiers(string str);
void make_array_entry(string name, string type, int line_number, string modifiers);
void make_class_entry(string name, int line_number, string modifiers);
string check_class_modifiers(string str, string name);
string check_method_modifiers(string str);
void check_gst(string name);
void check_constructor(string name);
bool check_first();
void add_arguments(vector<tuple<string,string,bool, bool> > arguments, string name);
string expression_type(string type1, string type2, string op);
void error_msg();

