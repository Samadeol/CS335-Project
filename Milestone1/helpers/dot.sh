#!/bin/bash
for file in ../tests/*;
    do
    k1=$(expr ${#file} - 9)
    k2=$(expr $k1 + 4)
    k3=$(expr $k1 - 5)
    if [ ${file:k2:5} != ".java" ]; then
        echo ${file:9:k1} "is not a valid Java File"
    else 
        
        if ./output --input=$file --output=../dot_outputs/${file:9:k3}.dot; then
            echo ${file:9:k1} parsed succesfully;
        else 
            echo ${file:9:k1} parse failed;
            rm -rf ../dot_outputs/${file:9:k3}.dot || true
           #dot -Tps "dot_outputs/"${file:6:k3}".dot" -o "ast_outputs/"${file:6:k3}".ps"
        fi
    fi
done