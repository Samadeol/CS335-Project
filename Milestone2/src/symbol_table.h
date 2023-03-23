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
    int dimension;
    string modifiers;
    vector<int> dims;
    map<string, sym_entry*> *child;
    vector<tuple<string,string, int, bool, bool> > arguments;

}sym_entry;

typedef map<string, sym_entry*> sym_table;
typedef map<string, sym_table*> list_sym_table;

extern list_sym_table* global_sym_table;
extern sym_table* curr_sym_table;
extern string type;

void init_symbol_table();
string check_class_modifiers(string str);
sym_entry* curr_look_up(sym_table* table, string name);
sym_table* gst_look_up(string name);
