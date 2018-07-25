#include "symbol_table.h"

//test symbol table
/*
int main()
{
	SymTabPtr table_ptr = init_symtable();
	add_symbol(table_ptr, 0, "a", "int");	
	add_symbol(table_ptr, 0, "b", "float");
	table_ptr->curr_seg_num = table_ptr->curr_seg_num + 1;
	add_symbol(table_ptr, 1, "a", "float");
	printf("a in segment 0 position is %d\n", lookup_symbol(table_ptr, 0, "a"));
	printf("a in segment 1 position is %d\n", lookup_symbol(table_ptr, 1, "a"));
	printf("check(0, a, int) is %d\n", check_symbol(table_ptr, 0, "a", "int"));
	printf("check(0, a, float) is %d\n", check_symbol(table_ptr, 0, "a", "float"));
	printf("check(1, a, int) is %d\n", check_symbol(table_ptr, 1, "a", "int"));
	printf("check(1, a, float) is %d\n", check_symbol(table_ptr, 1, "a", "float"));

	char **para_list = (char**)malloc(3*sizeof(char*));
	para_list[0] = (char*)malloc(10*sizeof(char));
	para_list[1] = (char*)malloc(10*sizeof(char));
	para_list[2] = (char*)malloc(10*sizeof(char));
	strcpy(para_list[0], "one");
	strcpy(para_list[1], "two");
	strcpy(para_list[2], "three");
	add_func_decla(table_ptr, 0, "func1", "int", para_list, 3);

	char **para_list2 = (char**)malloc(3*sizeof(char*));
	para_list2[0] = (char*)malloc(10*sizeof(char));
	para_list2[1] = (char*)malloc(10*sizeof(char));
	para_list2[2] = (char*)malloc(10*sizeof(char));
	strcpy(para_list2[0], "one");
	strcpy(para_list2[1], "two");
	strcpy(para_list2[2], "three");

	char **para_list3 = (char**)malloc(3*sizeof(char*));
	para_list3[0] = (char*)malloc(10*sizeof(char));
	para_list3[1] = (char*)malloc(10*sizeof(char));
	para_list3[2] = (char*)malloc(10*sizeof(char));
	strcpy(para_list3[0], "four");
	strcpy(para_list3[1], "two");
	strcpy(para_list3[2], "three");

	printf("check func1 correct: %d", check_func(table_ptr, "func1", "int", para_list2, 3));
	printf("check func2 func_name error: %d", check_func(table_ptr, "func2", "int", para_list2, 3));
	printf("check func1 return_type error: %d", check_func(table_ptr, "func1", "float", para_list2, 3));
	printf("check func1 para_type error: %d", check_func(table_ptr, "func1", "int", para_list3, 3));

	char **name_list = (char**)malloc(3*sizeof(char*));
	name_list[0] = (char*)malloc(10*sizeof(char));
	name_list[1] = (char*)malloc(10*sizeof(char));
	name_list[2] = (char*)malloc(10*sizeof(char));
	strcpy(name_list[0], "para1");
	strcpy(name_list[1], "para2");
	strcpy(name_list[2], "para3");
	add_func_to_seg(table_ptr, "func1", name_list, 3);
	print_table(table_ptr);
}
*/
SymTabPtr init_symtable()
{
	SymTabPtr table_ptr = (SymTabPtr)malloc(sizeof(struct symbol_table));
	SegSymTable *table = table_ptr->table;
	table_ptr->curr_parent = -1;
	table_ptr->curr_seg_num = 0;
	table_ptr->curr_func_num = 0;
	int j, k;
	for(j=0; j<SEGMENTNUMBER; j++)
	{
		table[j].parent_seg_num = -1;
		table[j].currSegTabSize = 0;
		for(k=0; k<SEGSYMBOLTABLESIZE; k++)
		{
			table[j].seg_table[k].name = (char*)malloc(101);
			strcpy(table[j].seg_table[k].name, "NULL");
			table[j].seg_table[k].type = (char*)malloc(10);
			strcpy(table[j].seg_table[k].type, "VOID");
		}
	}	
	return table_ptr;
}

int lookup_symbol(SymTabPtr table_ptr, int seg, char *str)
{
	int pos = hash_search(table_ptr, seg, str);
	if(pos == -1)
	{
		printf("%s has not been defined.\n", str);
		return -1;
	}
	return pos;
}

int check_symbol(SymTabPtr table_ptr, int seg, char *str, char *typ)
{
	SegSymTable *table = table_ptr->table;
	int pos = hash_search(table_ptr, seg, str);
	if(strcmp(table[seg].seg_table[pos].type, typ) == 0)
		return 1;
	else 
	{
		printf("###Error: type conflict.\n");
		return 0;
	}
}

int add_symbol(SymTabPtr table_ptr, int seg, char *str, char *typ)
{
	int islegal = hash_insert(table_ptr, seg, str, typ);
	if(islegal)
	{
		return 1;
	}
	else
	{
		printf("###Error: variable has been defined before.\n");
	}
}

int hash(char *str, int i)
{
	unsigned long Hash = 5381;
    int c;

    while (c = *str++)
        Hash = ((Hash << 4) + Hash) + c; /* Hash * 33 + c */

    return ((int)((Hash+i)%SEGSYMBOLTABLESIZE));
}

int hash_insert(SymTabPtr table_ptr, int seg, char *str, char *typ)
{
	SegSymTable *table = table_ptr->table;
	if(hash_search(table_ptr, seg, str)==-1) 
	{
		int i=0;
		int k;
		while(i<SEGSYMBOLTABLESIZE) 
		{
			k=hash(str,i);
			if(strcmp(table[seg].seg_table[k].name, "NULL")==0) 
			{
				strcpy(table[seg].seg_table[k].name, str);
				table[seg].seg_table[k].type = (char*)malloc(10*sizeof(char));
				strcpy(table[seg].seg_table[k].type, typ);
				table[seg].currSegTabSize++;
				return k;
			}
			i++;
		} 
	}
	return -1;
}

int hash_search(SymTabPtr table_ptr, int seg, char *str)
{
	SegSymTable *table = table_ptr->table;
	int i=0;
	int k=hash(str,i);
	while((i<SEGSYMBOLTABLESIZE) && (strcmp(table[seg].seg_table[k].name, "NULL")!=0)) 
	{
		if(strcmp(table[seg].seg_table[k].name, str)==0) 
		{
			return k;
		}
		i++;
		k=hash(str,i);
	}
	return (-1);
}


int add_func_decla(SymTabPtr table_ptr, int func_num, char *name, char *return_type, char **para_type_list, int para_num)
{
	FuncDecla *fd_table = table_ptr->func_decla_table;
	int i=0;
	for(i=0; i<table_ptr->curr_func_num; i++)
	{
		if(strcmp(fd_table[i].name, name) == 0)
		{
			printf("###Error: function has been declared before.\n");
			return -1;
		}
	}
	fd_table[func_num].para_num = para_num;
	//apply a segment for the function
	table_ptr->curr_seg_num = table_ptr->curr_seg_num + 1;
	fd_table[func_num].func_seg_num = table_ptr->curr_seg_num;	
	fd_table[func_num].name = (char*)malloc(101);
	strcpy(fd_table[func_num].name, name);
	fd_table[func_num].return_type = (char*)malloc(10);
	strcpy(fd_table[func_num].return_type, return_type);
	fd_table[func_num].para_type_list = (char**)malloc(20);
	for(i=0; i<para_num; i++)
	{
		fd_table[func_num].para_type_list[i] = (char*)malloc(10);
		strcpy(fd_table[func_num].para_type_list[i], para_type_list[i]);
	}
	table_ptr->curr_func_num = table_ptr->curr_func_num + 1;
	return 0;
}

int check_func(SymTabPtr table_ptr, char *name, char *return_type, char **para_type_list, int para_num)
{
	FuncDecla *fd_table = table_ptr->func_decla_table;
	int i=0, j=0;
	int notfound=1;
	for(i=0; i<table_ptr->curr_func_num; i++)
	{
		if(strcmp(fd_table[i].name, name) == 0)
		{
			notfound = 0;
			for(j=0; j<para_num; j++)
			{
				if(strcmp(fd_table[i].para_type_list[j], para_type_list[j]) != 0)
				{
					printf("###Error: function parameters type is conflict to declaration.\n");
					return -1;
				}
				if(strcmp(fd_table[i].return_type, return_type) != 0)
				{
					printf("###Error: return variables type is conflict to declaration.\n");
					return -2;
				}
			}		
		}
	}
	if(notfound)
	{
		printf("###Error: function has not been defined.\n");
		return -3;
	}
	else
		return 0;
}

int symbol_type(char * name) {
	return 0;
}

int add_func_to_seg(SymTabPtr table_ptr, char *name, char **para_name_list, int para_num)
{
	FuncDecla *fd_table = table_ptr->func_decla_table;
	int i=0, j=0;
	int seg=-1;
	for(i=0; i<table_ptr->curr_func_num; i++)
	{
		if(strcmp(fd_table[i].name, name) == 0)
		{
			seg = fd_table[i].func_seg_num;
			for(j=0; j<para_num; j++)
				add_symbol(table_ptr, seg, para_name_list[j], fd_table[i].para_type_list[j]);	
		}
	}
	SegSymTable *table = table_ptr->table;
	table[seg].currSegTabSize = para_num;
	table[seg].parent_seg_num = 0;
}

void print_table(SymTabPtr table_ptr) {	
	int i, seg, func_num;
	printf("SYMBOL TABLE\n");
	SegSymTable *table = table_ptr->table;
	for(seg=0; seg<=table_ptr->curr_seg_num; seg++)
	{
		printf("---------------Segment %d, parent_seg %d---------------\n", seg, table[seg].parent_seg_num);
		printf("|INDEX\t|NAME\t|DATATYPE\t|\n");
		printf("-------------------------------------------------------\n");
		for(i=0;i<SEGSYMBOLTABLESIZE;i++) 
		{
			if(strcmp(table[seg].seg_table[i].name,"NULL")!=0)
					printf("|%d\t|%s\t|%s\t\t|\n",i, table[seg].seg_table[i].name, table[seg].seg_table[i].type);
		}
	}
	printf("-------------------------------------------------------\n");
	printf("FUNCTION DECLARATION TABLE\n");
	FuncDecla *fd_table = table_ptr->func_decla_table;
	for(func_num=0; func_num<table_ptr->curr_func_num; func_num++)
	{
		printf("---------------Function Declaration %d----------------\n", func_num);
		printf("Returning variable type: %s\n", fd_table[func_num].return_type);
		printf("Segment Number: %d\n", fd_table[func_num].func_seg_num);
		for(i=0; i<fd_table[func_num].para_num; i++)
		{
			printf("variable type: %s\n", fd_table[func_num].para_type_list[i]);
		}
	}

	return;
}

