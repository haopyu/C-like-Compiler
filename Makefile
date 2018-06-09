CC = gcc
YACC = byacc
LEX = flex
CCFLAG = -Wall

QAQ : main.c
	$(CC) -o QAQ main.c 
y.tab.c y.tab.h : compiler.y
	$(YACC) -d compiler.y
lex.yy.c : compiler.l
	$(LEX) compiler.l

.PHONE : clean
clean : 
	rm -f *.yy.c *.tab.c *tab.h *.out