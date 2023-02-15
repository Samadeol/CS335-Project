#!/bin/bash

flex lexer.l
g++ lex.yy.c -o output

while true
do
    read -p "Enter the file name: " filename
    k=${#filename}-5
    if ./output < $filename ${filename:0:k}; then
        echo ${filename:0:k}.csv created
    fi
done