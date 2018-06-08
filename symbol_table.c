#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "symbol_table.h"

Symbol *
symbol_new(char const * name)
{
    Symbol * symbol = (Symbol *) malloc (sizeof(struct SYMBOL));
    symbol->type = VOID;
    value_set(&symbol->value, symbol->type, NULL);

    symbol->next = NULL;

    if (name != NULL)
        symbol->name = strdup(name);
     else
        symbol->name = NULL;

    return symbol;
}

Symbol *
symbol_insert(Symbol *symtab, Symbol *symbol)
{
    Symbol *sym;

    if (symbol == NULL)
        return NULL;

    sym = symbol_lookup(symtab, symbol->name);

    if (sym != NULL) {
        free(symbol->name);
        free(symbol);
        return sym;
    }

    symbol->next = symtab->next;
    symtab->next = symbol;

    return symbol;
}

Symbol *
symbol_lookup(Symbol *symtab, char const *name)
{
    Symbol *temp;

    if (symtab == NULL)
        return NULL;

    for (temp = symtab->next; temp != NULL; temp = temp->next) {
        if (!strcmp (temp->name, name))
            return temp;
    }

    return temp;
}