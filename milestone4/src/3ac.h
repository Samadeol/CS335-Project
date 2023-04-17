#include <bits/stdc++.h>

using namespace std;

typedef struct quadruple{
    string op;
    string arg1;
    string arg2;
    string result;
    int index;// target label for this particular instruction
}quadruple;

void emitt(string,string,string,string,int);
void print3AC_code();
string new_temporary();
