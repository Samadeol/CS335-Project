#include "symbol_table.h"
#include "3ac.cpp"

sym_table* curr_sym_table;
sym_table* dirty_sym_table;
sym_table* default_sym_table;
sym_table* print_table;
map<sym_table*, sym_table*> parent;
extern int yylineno;
string curr_file;
string out_file_name;
extern string curr_class_name;
int offset;
extern int k;
bool first_parse;

void set_dimensions(string name,vector<int> v){
    sym_table* temp = curr_sym_table;
    while(temp!=default_sym_table){
        if((*curr_sym_table).find(name)==(*curr_sym_table).end()) temp = parent[temp];
        else {
            (*curr_sym_table)[name]->dimension = v;
            break;
        }
    }
}

vector<int> get_dimensions(string name){
    sym_table* temp = curr_sym_table;
    while(temp!=default_sym_table){
        if((*temp).find(name)==(*temp).end())
            temp = parent[temp];
        else return  (*temp)[name]->dimension;
    }
    cout<<"Unexpected Error Occures"<<endl;
    exit(1);
}

void print(string name){
    fstream fout;
    string file_name = out_file_name+name+".csv";
    fout.open(file_name,ios::out);
    fout<<"Lexeme,Line Number,Type,Modifiers,Function,Num of Arguments,Offset,Size"<<endl;
    for(auto it:*print_table){
        string mod = "";
        if(it.second->modifiers[0]=='1') mod+="public ";
        if(it.second->modifiers[1]=='1') mod+="private ";
        if(it.second->modifiers[2]=='1') mod+="final ";
        if(it.second->modifiers[3]=='1') mod+="static ";
        string t;
        if(it.second->isfunc) t="Yes";
        else t="No";
        fout<<it.first<<","<<it.second->line_number<<","<<it.second->type<<","<<mod<<","<<t<<","<<it.second->arguments.size()<<","<<it.second->offset<<","<<it.second->size<<endl;
    }
    print_table = new sym_table;
}

void init_symbol_table(){
    offset=0;
    default_sym_table = new sym_table;
    curr_sym_table = default_sym_table;
    dirty_sym_table = new sym_table;
}

void second_init(){
    curr_sym_table = default_sym_table;
    dirty_sym_table = new sym_table;
    print_table = new sym_table;
}

void new_scope(){
    if(parent.find(dirty_sym_table) == parent.end()) parent.insert(make_pair(dirty_sym_table,curr_sym_table));
    curr_sym_table = dirty_sym_table;
    dirty_sym_table = new sym_table;
    // cout<<"new scope ";
    // cout<<curr_sym_table->size()<<endl;
}

void old_scope(){
    sym_table* temp = curr_sym_table;
    curr_sym_table = parent[curr_sym_table];
    dirty_sym_table = temp;
    if(!first_parse){
        for(auto it:*dirty_sym_table) print_table->insert(it);
    }
}

void reset(){
    dirty_sym_table = new sym_table;
}

bool check(string name){
    if(curr_sym_table == default_sym_table){
        if((*curr_sym_table).find(name)==(*curr_sym_table).end()) return true;
        else return false;
    }
    if((*dirty_sym_table).find(name)!=(*dirty_sym_table).end()) return false;
    sym_table* temp = curr_sym_table;
    while(temp!=default_sym_table){
        if((*curr_sym_table).find(name)==(*curr_sym_table).end()) temp = parent[temp];
        else  return false;
    }
    return true;
}

int get_size(string type){
    if(type.substr(0,3)=="int" || type.substr(0,5)=="float") return 4;
    else if(type.substr(0,4)=="char" || type.substr(0,4)=="short") return 2;
    else if(type.substr(0,4)=="byte") return 1;
    else if(type.substr(0,4)=="long" || type.substr(0,6)=="double") return 8;
    else return 8;
}

void make_dirty_entry(string name, string type, int line_number, string modifiers, int t){
    sym_entry* new_sym_entry = new sym_entry;
    if(check(name)) (*dirty_sym_table).insert(make_pair(name,new_sym_entry));
    int size = get_size(type);
    (*dirty_sym_table)[name]->line_number = line_number;
    (*dirty_sym_table)[name]->source_file = curr_file;
    (*dirty_sym_table)[name]->type = type;
    (*dirty_sym_table)[name]->isfunc = false;
    (*dirty_sym_table)[name]->modifiers = modifiers;
    (*dirty_sym_table)[name]->size = size;
    if(t==-1) offset-=size;
    (*dirty_sym_table)[name]->offset = offset;
    if(t==1) offset+=size;
}

void make_entry(string name, string type, int line_number, string modifiers){
    sym_entry* new_sym_entry = new sym_entry;
    if(check(name)){
        (*curr_sym_table)[name]=new_sym_entry;
    }else{
        cout<<name<<" already declared in this scope. Line number "<<line_number<<endl;
        exit(1);
    }
    int size = get_size(type);
    (*curr_sym_table)[name]->line_number = line_number;
    (*curr_sym_table)[name]->source_file = curr_file;
    (*curr_sym_table)[name]->type = type;
    (*curr_sym_table)[name]->isfunc = false;
    (*curr_sym_table)[name]->modifiers = modifiers;
    (*curr_sym_table)[name]->offset = offset;
    offset+=size;
    (*curr_sym_table)[name]->size = size;

}

void make_func_entry(string name, string type, vector<tuple<string,string,int,int> > args, int line_number, string modifiers){
    make_entry(name,type,line_number,modifiers);
    (*curr_sym_table)[name]->arguments = args;
    (*curr_sym_table)[name]->child = dirty_sym_table;
    (*curr_sym_table)[name]->isfunc = true;
    int size = get_size(type);
    (*curr_sym_table)[name]->offset = 0;
    int temp = offset - size;
    offset = -size;
    for(int i=0;i<args.size();i++){
        if(get<2>(args[i])) make_dirty_entry(get<0>(args[i]),get<1>(args[i]),line_number,"0010",-1);
        else make_dirty_entry(get<0>(args[i]),get<1>(args[i]),line_number,"0000",-1);
    }
    (*curr_sym_table)[name]->size = -offset;
    offset = temp;
    reset();
}

void make_class_entry(string name, int line_number, string modifiers){
    make_entry(name,name,line_number,modifiers);
    (*curr_sym_table)[name]->child = dirty_sym_table;
    (*curr_sym_table)[name]->size = offset-4;
    offset=0;
    reset();
}

string find_in_scope(string name, char (&label)[1000]){
    string final_name = name;
    if((*dirty_sym_table).find(name)!=(*dirty_sym_table).end()) return (*dirty_sym_table)[name]->type;
    string t,p;
    for(int i=0;i<name.size();i++){
        if(name[i]=='.') break;
        t.push_back(name[i]);
    }
    bool stt=false;
    sym_table* temp = curr_sym_table,*temp2;
    if(t=="this") {
        final_name="this";
        temp2 = (*default_sym_table)[curr_class_name]->child;}
    else stt=true;
    while(stt){
        if((*temp).find(t)!=(*temp).end()){
            if(t.size()==name.size()) return (*temp)[t]->type;
            else{
                string class_name = (*temp)[t]->type;
                if((*default_sym_table).find(class_name) == (*default_sym_table).end()) {
                    cout<<name<<" not declared in this scope "<<yylineno<<endl;
                    exit(1);
                }
                else{
                    final_name = new_temporary();
                    emitt("",t,"",final_name,-1);
                    temp2 = (*default_sym_table)[class_name]->child;
                }
            break;
            }
        }
        if(temp==default_sym_table){
            cout<<temp<<" not declared in this scope"<<endl;
            exit(1);
        }
        temp = parent[temp];
    }
    for(int i=t.size()+1;i<name.size();i++){
        if(name[i]=='.'){
            if((*temp2).find(p)==(*temp2).end()){
                cout<<name.substr(0,i)<<" not declared in this scope "<<yylineno<<endl;
                exit(1);
            }else{
                string class_name = (*temp2)[p]->type;
                if((*default_sym_table).find(class_name) == (*default_sym_table).end()) {
                    cout<<name<<" not declared in this scope "<<yylineno<<endl;
                    exit(1);
                }
                else{
                    string s = new_temporary();
                    emitt("",to_string((*temp2)[p]->offset),"",s,-1);
                    final_name = "*("+final_name+" + "+s+")";
                    temp2 = (*default_sym_table)[class_name]->child;
                }
            }
            p.clear();
        }
        else p.push_back(name[i]);
    }
    if((*temp2).find(p)==(*temp2).end()){
        cout<<name<<" not declared in this scope "<<yylineno<<endl;
        exit(1);
    }
    string s = new_temporary();
    emitt("",to_string((*temp2)[p]->offset),"",s,-1);
    final_name = "*("+final_name+" + "+s+")";
    strcpy(label,final_name.c_str());
    return (*temp2)[p]->type;
}

string expression_type(int line_num, string type1, string type2, string op){
    vector<string> types {"boolean","char","byte","short","int","long","float","double","String"};
    int a=-1,b=-1;
    if(type1=="") a=0;
    if(type2=="") b=0;
    string t;
    if(type2.size()!=type1.size() && type2.substr(0,type1.size())==type1) return type2;
    if(type1[type1.size()-1]=='*'){
        string s;
        for(int i=0;i<type1.size();i++){
            if(type1[i]=='*') break;
            s.push_back(type1[i]);
        }
        t=type1;
        type1=s;
    }
    for(int i=0;i<types.size();i++){
        if(type1 == types[i]) a=i+1;
        if(type2 == types[i]) b=i+1;
    }
    if(t.size()) type1 = t;
    if(type2[0]=='*'){
        type1 = type1+type2;
        return type1;
    }
    if(op=="&&" || op=="||"){
        if(a==1 && b==1)return "boolean";
        else{
            cout<<"Invalid operand type "<<type1<<" and "<<type2<<" for operator: "<<op<<" in line number "<<line_num<<endl;
            exit(1);
        }
    }
    if(op == "declare" || op == "=" || op == "*=" || op == "/=" || op=="+=" || op == "-=" || op=="&=" || op=="^=" || op == "|="){
        if(b==0 && op=="declare") return type1;
        if(a==1){
            if(b==1 && (op=="declare" || op == "=")) return "boolean";
            else{
                if(op=="declare") cout<<"Invalid declaration of "<<type2<<" to "<<type1<<" in line number "<<line_num<<endl;
                else cout<<"Invalid operand type "<<type1<<" and "<<type2<<" for operator: "<<op<<" in line number "<<line_num<<endl;
                exit(1);
            }
        }else if(a==2){
            if(b>=2 && b<=6) return "char";
            else{
                if(op=="declare") cout<<"Invalid declaration of "<<type2<<" to "<<type1<<" in line number "<<line_num<<endl;
                else cout<<"Invalid operand type "<<type1<<" and "<<type2<<" for operator: "<<op<<" in line number "<<line_num<<endl;
                exit(1);
            }
        }else if(a>=3 && a<=8){
            if(b>1 && b<=a) return type1;
            else{
                if(op == "declare") cout<<"Invalid declaration of "<<type2<<" to "<<type1<<" in line number "<<line_num<<endl;
                else cout<<"Invalid operand type "<<type1<<" and "<<type2<<" for operator: "<<op<<" in line number "<<line_num<<endl;
                exit(1);
            }
        }else{
            if(type1==type2 && (op=="declare" || op == "=" || (a==9 && op=="+="))) return type1;
            else{
                if(op=="declare") cout<<"Invalid declaration"<<type2<<" to "<<type1<<" in line number "<<line_num<<endl;
                else cout<<"Invalid operand type "<<type1<<" and "<<type2<<" for operator: "<<op<<" in line number "<<line_num<<endl;
                exit(1);
            }
        }
    }
    if(op==">>" || op=="<<" || op==">>>" || op==">>=" || op=="<<=" || op==">>>="){
        if(a>=2 && a<=6 && b>=2 && b<=6) return type1;
        else{
            cout<<"Invalid operand type "<<type1<<" and "<<type2<<" for operator: "<<op<<" in line number "<<line_num<<endl;
            exit(1);
        }
    }
    if(op=="==" || op=="!=" || op=="<=" || op==">=" || op == "<" || op==">"){
        if((a==1 && b==1)||(a==2 && b>=2 && b<=6)||(a>=3 && a<=8 && b>1 && b<=a)||(op=="==" && type2==type1)) return "boolean";
        else{
            cout<<"Invalid operand type "<<type1<<" and "<<type2<<" for operator: "<<op<<" in line number "<<line_num<<endl;
            exit(1);
        }
    }
    if(b==0){
        if(a>=1 && a<9) return type1;
        else{
            cout<<"Unary Expression invalid on "<<type1<<" in line number "<<line_num<<endl;
            exit(1);
        }
    }
    if(a<2 || b<2){
        cout<<"Invalid operand type "<<type1<<" and "<<type2<<" for operator: "<<op<<" in line number "<<line_num<<endl;
        exit(1);
    }
    if(a==9 || b==9){
        if(a==b && op=="+") return type1;
        else{
            cout<<"Invalid operand type "<<type1<<" and "<<type2<<" for operator: "<<op<<" in line number "<<line_num<<endl;
            exit(1);
        }
    }
    if(a>b) return type1;
    else return type2;
}

string get_method(string name, string scope, vector<pair<string,string > > args, string l){
    if(scope==""){
        sym_table* temp = curr_sym_table;
        while(temp!=default_sym_table){
            if((*temp).find(name)!=(*temp).end()){
                if(!(*temp)[name]->isfunc){
                    cout<<"Method "<<name<<" does not belong in this scope"<<endl;
                }
                if(args.size()!=(*temp)[name]->arguments.size()){
                    cout<<"Invalid number of arguments in method call"<<endl;
                    exit(1);
                }
                string lk = new_temporary();
                emitt("","this","",lk,-1);
                emitt("string","push_param "+lk,"","",-1);
                for(int i=0;i<args.size();i++){
                    if(args[i].first!=get<1>((*temp)[name]->arguments[i])){
                        cout<<"Invalid argument type "<<args[i].first<<" to "<<get<1>((*temp)[name]->arguments[i])<<endl;
                        exit(1);
                    }
                    emitt("string","push_param "+ args[args.size()-i-1].second,"","",-1);
                }
                emitt("string","stack_pointer +"+to_string((*temp)[name]->size+4),"","",-1);
                emitt("string","call "+curr_class_name+"."+name,"","",-1);
                emitt("string","stack_pointer -"+to_string((*temp)[name]->size+4),"","",-1);
                int size = get_size((*temp)[name]->type);
                if(size) emitt("","pop "+to_string(size),"",l,-1);
                emitt("string","pop "+to_string((*temp)[name]->size-size),"","",-1);
                return (*temp)[name]->type;
            }
            temp = parent[temp];
        }
        cout<<"Method dosent belong in this scope"<<endl;
        exit(1);
    }
    else{
        if((*default_sym_table).find(scope)==(*default_sym_table).end()){
            cout<<"No class of "<<scope<<endl;
            exit(1);
        }
        sym_table* temp = (*default_sym_table)[scope]->child;
        if(name==scope){
            if((*temp).find(name)==(*temp).end()){
                if(args.size()==0){
                    string s = new_temporary();
                    emitt("",to_string((*default_sym_table)[scope]->size),"",s,-1);
                    emitt("string","push_param "+s,"","",-1);
                    emitt("string","stack_pointer +8","","",-1);
                    emitt("string","call alloc 1","","",-1);
                    emitt("string","stack_pointer -8","","",-1);
                    emitt("","pop 4","",l,-1);
                    emitt("string","pop 4","","",-1);
                    return scope;
                }else{
                    cout<<"Please define a constructor appropriately"<<endl;
                    exit(1);
                }
            }
        }
        //cout<<"ji"<<endl;
        if((*temp).find(name)!=(*temp).end()){
            if(!(*temp)[name]->isfunc){
                cout<<"Method "<<name<<" does not belong in this scope"<<endl;
            }
            if(args.size()!=(*temp)[name]->arguments.size()){
                cout<<"Invalid number of arguments in method call"<<endl;
                exit(1);
            }
            if(name==scope){
                string s = new_temporary();
                emitt("",to_string((*default_sym_table)[scope]->size),"",s,-1);
                emitt("string","push_param "+s,"","",-1);
            }
            for(int i=0;i<args.size();i++){
                if(args[i].first!=get<1>((*temp)[name]->arguments[i])){
                    cout<<"Invalid argument type "<<args[i].first<<" to "<<get<1>((*temp)[name]->arguments[i])<<endl;
                    exit(1);
                }
                emitt("string","push_param "+ args[args.size()-i-1].second,"","",-1);
            }
            emitt("string","stack_pointer +"+to_string((*temp)[name]->size+4),"","",-1);
            emitt("string","call "+scope+"."+name,"","",-1);
            emitt("string","stack_pointer -"+to_string((*temp)[name]->size+4),"","",-1);
            int size = get_size((*temp)[name]->type);
            if(size) emitt("","pop "+to_string(size),"",l,-1);
            if(name==scope) size-=4;
            emitt("string","pop "+to_string((*temp)[name]->size-size),"","",-1);
            return (*temp)[name]->type;
        }
        else{
            cout<<"Method dosent belong in "<<name<<" scope"<<endl;
            exit(1);
        }
    }
}

void go_in_scope(string name){
    //for(auto it : *curr_sym_table) cout<<it.first<<endl;
    //cout<<(*(*default_sym_table)["Main"]->child)["main"]->type<<endl;
    dirty_sym_table = (*curr_sym_table)[name]->child;
    //cout<<(*dirty_sym_table)["main"]->type<<endl;
    //cout<<"hi"<<endl;
}

string check_class_modifiers(string str){
    string ans = "00";
    if(str == "") return ans;
    for(int i=0;i<str.size();i++){
        if((str[i]=='2' || str[i]=='0') && ans[(str[i]-'0')/2]=='0')ans[(str[i]-'0')/2]='1';
        else{
            cout<<"Either wrong or repeated modifier used"<<endl;
            exit(1);
        }
    }
    return ans;
}

string check_method_modifiers(string str){
    string ans = "0000";
    //cout<<str<<endl;
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
    if(!first_parse){
        if((*default_sym_table).find(name)==(*default_sym_table).end()){
            cout<<"No datatype or Class name of type: "<<name<<endl;
            exit(1);
        }
    }
}

void check_constructor(string name){
    if(!first_parse && ((*default_sym_table).find(name)==(*default_sym_table).end() || (*default_sym_table)[name]->child!=curr_sym_table)) cout<<"Constructor should have same name as class"<<endl;
}

void final_print(){
    for(auto it:*default_sym_table){
        print_table = it.second->child;
        print(it.first);
    }
}

bool check_first(){
    if(parent[curr_sym_table] == default_sym_table) return true;
    else return false;
}

string get_offset(string name, string func){
    if(name == "this") return "*(stack_pointer"+ to_string(k-4) +")";
    int offset = (*(*curr_sym_table)[func]->child)[name]->offset;
    k=min(k,offset);
    return "*(stack_pointer"+ to_string(offset) +")";
}

string get_base_offset(string name){
    //return name
    sym_table* temp = dirty_sym_table;
    while(temp!=default_sym_table){
        if((*temp).find(name)!=(*temp).end()) return "*(stack_pointer + "+ to_string((*temp)[name]->offset) +")";
        if(temp == dirty_sym_table) temp = curr_sym_table;
        else temp = parent[temp];
    }
    cout<<name<<endl;
    exit(1);
    //int offset = (*curr_sym_table)[name]->offset;
}