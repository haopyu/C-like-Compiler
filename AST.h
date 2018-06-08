#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <cstdarg>

using namespace std;

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
    statement_type type;
    int symbol_type;
    string text;
    AST *lpNext;// 同一层
    AST *lpSub;// 子层节点
};


void PrintTree(AST* tree);
AST* NewNode();
AST* FatherAddSon(AST* pFather, AST* pSon);
AST* NewFatherAddSon(int iType, int num_of_sons, ...);
void FreeTree(AST* root);
void nm_clear();

