import re


f=open("new_parser.y","r")
g=open("parser.y","a")

for x in f:
    l=re.sub(r'{}', "", x)
    # print(l)
    g.write(l)