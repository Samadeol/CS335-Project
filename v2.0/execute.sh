#!/bin/bash
for file in tests/*;
    do
    k1=$(expr ${#file} - 6)
    k2=$(expr $k1 + 1)
    k3=$(expr $k1 - 5)
    if [ ${file:k2:5} != ".java" ]; then
        echo ${file:6:k1} "is not a valid Java File"
    else 
        echo ${file:6:k1}
        if ./output < $file ${file:6:k3}; then
            dot -Tps "dot_outputs/"${file:6:k3}".dot" -o "ast_outputs/"${file:6:k3}".ps"
        fi
    fi
done