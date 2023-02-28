#!/bin/bash

bison -d -t -v parser.y
flex lexer.l
g++ lex.yy.c parser.tab.c -o output

for file in tests/*;
    do
    k1=$(expr ${#file} - 6)
    k2=$(expr $k1 + 1)
    k3=$(expr $k1 - 5)
    if [ ${file:k2:5} != ".java" ]; then
        echo ${file:6:k1} "is not a valid Java File"
    else
        echo ${file:6:k3} 
        ./output < $file ${file:6:k3};
    fi
done