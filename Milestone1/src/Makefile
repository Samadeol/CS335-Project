compile: parser.y lexer.l 
	bison -d -t -v parser.y
	flex lexer.l
	g++ lex.yy.c parser.tab.c -o output

dot: output
	./../helpers/dot.sh

ast:
	./../helpers/ast.sh

clean:
	rm -r parser.tab.c
	rm -r parser.tab.h
	rm -r parser.output
	rm -r lex.yy.c