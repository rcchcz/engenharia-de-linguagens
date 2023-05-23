Execução do programa no windows:

É necessário que a sua máquina apresente o flex ou lex instalado.

$ flex lexer.l ou lex lexer.l
$ gcc lex.yy.c -o parser
$ ./parser < programa.txt

Para testar outras palavras, pode colocar outro arquivo txt no lugar ou simplesmente rodar ./parser, colocar a palavra, apertando enter para a análise, retorno, e inserção de uma nova palavra, para parar de rodar aperte Ctrl + C.