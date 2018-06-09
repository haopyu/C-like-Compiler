#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

typedef int bool;
typedef enum TypeEnum 
{
    ERROR = -1,
    VOID,
    INTEGER,
    BOOLEAN,
    CHAR
} Type;

typedef union {
        int integer;
        bool boolean;
        char character;
} Value;

typedef struct SYMBOL
{
    char* name;
    Type type;
    Value value;
    struct SYMBOL *next;
} Symbol;

Symbol *symbol_new(char const * name);
Symbol *symbol_lookup(Symbol *symtab, char const *name);
Symbol *symbol_insert(Symbol *symtab, Symbol *symbol);
void symbol_print(Symbol *symbol);
#endif