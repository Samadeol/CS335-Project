#!/bin/bash

flex lexer.l
g++ lex.yy.c -o output

for file in tests/*;
    do
    k1=$(expr ${#file} - 6)
    k2=$(expr $k1 + 1)
    k3=$(expr $k1 - 5)
    if [ ${file:k2:5} != ".java" ]; then
        echo ${file:6:k1} "is not a valid Java File"
    else
        if ./output < $file ${file:6:k3}; then
            echo ${file:6:k3}.csv created
        else
            echo " in file" ${file:6:k1}
        fi
    fi
done