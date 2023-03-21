#include<bits/stdc++.h>
using namespace std;
#define ll long long

typedef struct sym_entry{
    string type;
    string source_file;
    int line_number;
    int normal; //normal->0 = basic  normal->1 = array  normal->2 = func  normal->3 = class/interface
    int size;
    int offset;
    vector<int> dims;
    vector<pair<string,string> > arguments;

}sym_entry;

typedef map<string, sym_entry*> sym_table;
typedef map<string, sym_table*> list_sym_table;

extern list_sym_table* global_sym_table;
extern sym_table* curr_sym_table;

void init_symbol_table();
