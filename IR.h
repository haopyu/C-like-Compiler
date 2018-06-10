#pragma once

#include <stdio.h>
#include <stdlib.h>
#include "AST.h"


void translate(AST* ast);
void translate_a_node(AST* node);
void compound_statement(AST* node);