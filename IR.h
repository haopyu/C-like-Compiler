#pragma once

#include <stdio.h>
#include <stdlib.h>
#include "AST.h"

typedef struct expression exp;
struct expression {
    String op;
    String symbol;
    union {
        float f;
        int i;
        String s;
    }v;
};

void translate(AST* ast);
void translate_a_node(AST* node);
void compound_statement(AST* node);
void selection_sattement(AST* node);