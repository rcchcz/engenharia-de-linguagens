all: compilador

compilador: lex.yy.c y.tab.c 
	gcc lex.yy.c y.tab.c ./lib/record.c ./lib/symbolTable.c -o compiler

lex.yy.c: lexer.l
	flex lexer.l

y.tab.c: parser.y  
	#yacc parser.y -d -v
	bison parser.y -dy -v

clean:
	rm -rf lex.yy.c y.tab.* compiler output.txt y.output
