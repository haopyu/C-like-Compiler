#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#include <stdio.h>
#include <stdlib.h>
#define SEGSYMBOLTABLESIZE 200
#define SEGMENTNUMBER 100
typedef struct symTabNode
{
	char *name;
	char *type;
}SymTabNode;

typedef struct segSymTable
{
	SymTabNode seg_table[SEGSYMBOLTABLESIZE];
	int currSegTabSize;
}SegSymTable;

int currSegNum = 0;


void init_symtable();
//look up the symbol in the segment tabel, 
//if succeed, return position
//else, return -1
int lookup_symbol(int seg, char *str);

//check whether the type of the symbol is correct
//if correct, return 1
//else, return 0 
int check_symbol(int seg, char *str, char *typ);
int add_symbol(int seg, char *str, char *typ);

int hash(char *str, int i);
//fail, return -1
//succeed, return position
int hash_insert(int seg, char *str, char *typ);
//find, return position
//not found, return -1
int hash_search(int seg, char *str);

void print_table();

#endif