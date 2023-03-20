import re


f=open("parser_empty.y","r")
g=open("new_parser.y","a")

for x in f:
    l=re.sub(r'{}', "", x)
    # print(l)
    g.write(l)