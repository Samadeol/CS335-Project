#!/bin/bash
for file in ../dot_outputs/*;
    do
    k1=$(expr ${#file} - 15)
    k2=$(expr $k1 + 11)
    k3=$(expr $k1 - 4)
    if [ ${file:k2:4} != ".dot" ]; then
        echo ${file:15:k1} "is not a valid Dot File"
    else 
        if dot -Tpng $file -o ../ast_outputs/${file:15:k3}.png; then
            echo ${file:15:k3}.png created;
        else 
            echo ${file:15:k3}
        fi
    fi
done