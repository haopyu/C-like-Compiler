#pragma once

#include <stdio.h>
#include <stdlib.h>
#include "AST.h"

typedef struct expression EXP;
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
void selection_statement(AST* node);
void expression_statement(AST* node);
void expression_statement(AST* node);
void assignment_statement(AST* node);
void declaration(AST* node);
void statement(AST* node);
void jump_statement(AST* node);
void designator(AST* node);
void declaration_list(AST* node);
void direct_declarator(AST* node);
void direct_abstract_declarator(AST* node);
void argument_expression_list(AST* node);
void addictive_expression(AST* node);
void abstract_expression(AST* node);
void cast_expression(AST* node);
void labeled_statement(AST* node);
void multiplicative_expression(AST* node);
void postfix_expression(AST* node);
void primary_expression(AST* node);
void parameter_list(AST* node);
void parameter_type_list(AST* node);
void enumerator_list(AST* node);
void and_expression(AST* node);
void or_expression(AST* node);
void conditional_expression(AST* node);
