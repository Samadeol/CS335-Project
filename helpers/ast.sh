#!/bin/bash
for file in dot_outputs/*;
    do
    k1=$(expr ${#file} - 12)
    k2=$(expr $k1 + 8)
    k3=$(expr $k1 - 4)
    if [ ${file:k2:4} != ".dot" ]; then
        echo ${file:12:k1} "is not a valid Dot File"
    else 
        if dot -Tpng $file -o ast_outputs/${file:12:k3}.png; then
            echo ${file:12:k3}.png created;
        else 
            echo ${file:12:k3}
        fi
    fi
done