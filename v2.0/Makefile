execute: output
	./execute.sh

compile: parser.y lexer.l 
	bison -d -t -v parser.y
	flex lexer.l
	g++ lex.yy.c parser.tab.c -o output