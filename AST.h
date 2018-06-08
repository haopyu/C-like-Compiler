#pragma once

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

typedef struct abstract_syntax_tree AST;
typedef struct symbol Symbol;

enum statement_type {
    LIST,
	NUM,
	STR,
	SYM,
	EX_EQ,
	PLUS_OP,
	MINUS_OP,
	MUL_OP,
	LT_OP,
	GT_OP,
	GET_ARRAY_OP,
	SET_ARRAY_OP,
	CALL_OP,
	IF_STATEMENT,
	BLOCK_STATEMENT,
	RETURN_STATEMENT,
	WHILE_STATEMENT,
	FOR_STATEMENT
};

struct symbol {
    char *name;
	int type, pointer;
};

struct abstract_syntax_tree {
    enum statement_type type;
    int symbol_type;
    char* text;
    AST *lpNext;// 同一层
    AST *lpSub;// 子层节点
};


void PrintTree(AST* tree);
AST* NewNode(char* text);
AST* FatherAddSon(AST* pFather, AST* pSon);
AST* NewFatherAddSon(enum statement_type iType, int num_of_sons, ...);
// void FreeTree(AST* root);
void nm_clear();

