#include "symbol_table.h"

SegSymTable symbol_table[SEGMENTNUMBER];
//test symbol table
/*
int main()
{
	init_symtable();
	add_symbol(0, "a", "int");
	add_symbol(1, "a", "float");
	add_symbol(0, "b", "float");
	printf("a in segment 0 position is %d", lookup_symbol(0, "a"));
	printf("a in segment 1 position is %d", lookup_symbol(1, "a"));
	printf("check(0, a, int) is %d", check_symbol(0, "a", "int"));
	printf("check(0, a, float) is %d", check_symbol(0, "a", "float"));
	printf("check(1, a, int) is %d", check_symbol(1, "a", "int"));
	printf("check(1, a, float) is %d", check_symbol(1, "a", "float"));
	print_table();
}
*/


void init_symtable()
{
	int j=0, k=0;
	for(j=0; j<SEGMENTNUMBER; j++)
		for(k=0; k<SEGSYMBOLTABLESIZE; k++)
		{
			symbol_table[j].seg_table[k].name = (char*)malloc(101);
			strcpy(symbol_table[j].seg_table[k].name, "NULL");
			symbol_table[j].seg_table[k].type = (char*)malloc(10);
			strcpy(symbol_table[j].seg_table[k].type, "VOID");
		}
	return ;
}

int lookup_symbol(int seg, char *str)
{
	return hash_search(seg, str);
}

int check_symbol(int seg, char *str, char *typ)
{
	int pos = hash_search(seg, str);
	if(strcmp(symbol_table[seg].seg_table[pos].type, typ) == 0)
		return 1;
	else 
		return 0;
}

int add_symbol(int seg, char *str, char *typ)
{
	return hash_insert(seg, str, typ);
}

int hash(char *str, int i)
{
	unsigned long Hash = 5381;
    int c;

    while (c = *str++)
        Hash = ((Hash << 4) + Hash) + c; /* Hash * 33 + c */

    return ((int)((Hash+i)%SEGSYMBOLTABLESIZE));
}

int hash_insert(int seg, char *str, char *typ)
{
	if(hash_search(seg, str)==-1) 
	{
		int i=0;
		int k;
		while(i<SEGSYMBOLTABLESIZE) 
		{
			k=hash(str,i);
			if(strcmp(symbol_table[seg].seg_table[k].name, "NULL")==0) 
			{
				strcpy(symbol_table[seg].seg_table[k].name, str);
				symbol_table[seg].seg_table[k].type = (char*)malloc(10*sizeof(char));
				strcpy(symbol_table[seg].seg_table[k].type, typ);
				return k;
			}
			i++;
		} 
	}
	return -1;
}

int hash_search(int seg, char *str)
{
	int i=0;
	int k=hash(str,i);
	while((i<SEGSYMBOLTABLESIZE) && (strcmp(symbol_table[seg].seg_table[k].name, "NULL")!=0)) 
	{
		if(strcmp(symbol_table[seg].seg_table[k].name, str)==0) 
		{
			return k;
		}
		i++;
		k=hash(str,i);

	}
	return (-1);

}

void print_table() {
	int i, seg;
	printf("SYMBOL TABLE\n");

	for(seg=0; seg<SEGMENTNUMBER; seg++)
	{
		printf("---------------Segment %d:------------------\n", seg);
		printf("|INDEX\t|NAME\t|DATATYPE\t|\n");
		printf("--------------------------------------------\n");
		for(i=0;i<SEGSYMBOLTABLESIZE;i++) 
		{
			if(strcmp(symbol_table[seg].seg_table[i].name,"NULL")!=0)
					printf("|%d\t|%s\t|%s\t\t|\n",i,symbol_table[seg].seg_table[i].name,symbol_table[seg].seg_table[i].type);
		}
	}
	printf("--------------------------------------------\n");
	return;
}

