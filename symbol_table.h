#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#include <stdio.h>
#include <stdlib.h>
#define SEGSYMBOLTABLESIZE 200
#define SEGMENTNUMBER 100
#define FUNCTIONNUMBER 100
//when match a function declaration, we will apply a segment number, record function names and the types of variables.
typedef struct funcDecla
{
	//function name
	char *name;
	//returning value type
	char *return_type;
	//input para type list
	char **para_type_list;
	//input para numbers
	int para_num;
	int func_seg_num;
}FuncDecla;

typedef struct symTabNode
{
	char *name;
	char *type;
}SymTabNode;

typedef struct segSymTable
{
	SymTabNode seg_table[SEGSYMBOLTABLESIZE];
	int currSegTabSize;
	int parent_seg_num;
}SegSymTable;

typedef struct symbol_table
{
	SegSymTable table[SEGMENTNUMBER];
	FuncDecla func_decla_table[FUNCTIONNUMBER];
	//when match a "}" curr_parent = seg_table[curr_parent].parent_seg_num
	int curr_parent;
	//when match a "{" curr_seg_num = curr_seg_num + 1
	int curr_seg_num;
	int curr_func_num;
}Symbol_table;

typedef Symbol_table* SymTabPtr;
SymTabPtr init_symtable();
//look up the symbol in the segment tabel, 
//if succeed, return position
//else, return -1
int lookup_symbol(SymTabPtr table_ptr, int seg, char *str);

//check whether the type of the symbol is correct
//reg almost is equal to curr_seg_num
//if correct, return 1
//else, return 0 
int check_symbol(SymTabPtr table_ptr, int seg, char *str, char *typ);
int add_symbol(SymTabPtr table_ptr, int seg, char *str, char *typ);

int hash(char *str, int i);
//fail, return -1
//succeed, return position
int hash_insert(SymTabPtr table_ptr, int seg, char *str, char *typ);
//find, return position
//not found, return -1
int hash_search(SymTabPtr table_ptr, int seg, char *str);
//func_num almost is equal to curr_func_num
int add_func_decla(SymTabPtr table_ptr, int func_num, char *name, char *return_type, char **para_type_list, int para_num);

//check
int check_func(SymTabPtr table_ptr, char *name, char *return_type, char **para_type_list, int para_num);

int add_func_to_seg(SymTabPtr table_ptr, char *name, char **para_name_list, int para_num);


void print_table(SymTabPtr table_ptr);

#endif
