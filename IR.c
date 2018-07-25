#include "IR.h"

EXP exp_code;

void translate(AST* ast) {
    if (ast == NULL) return;
    ast = ast->children[0];
    translate_a_node(ast);
}

void translate_a_node(AST* node) {
    int i;
    for (i = 0; i < 4; i++) {
        if (node->children[i] == NULL) continue;
        switch (node->children[i]->node_identifier) {
            case TRANSLATION_UNIT: 
            case EXTERNAL_DECLARATION: 
            case FUNCTION_DEFINITION: 
            case DECLARATOR: {
                translate_a_node(node->children[i]);
                break;
            }
            case DIRECT_DECLARATOR: {
                if (node->children[i]->num_of_sons == 0) {
                    printf("%s:\n",node->children[i]->val->v.s);
                }
                else {
                    translate_a_node(node->children[i]);
                }
                break;
            }
            case COMPOUND_STATEMENT: {
                compound_statement(node->children[i]);
                break;
            }
        }
    }
}

void compound_statement(AST* node) {
    int i;
    for (i = 0; i < 4; i++) {
        if (node->children[i] == NULL) continue;
        switch (node->children[i]->node_identifier) {
            case BLOCK_ITEM_LIST: 
            case BLOCK_ITEM:
            case DECLARATION: 
            case DECLARATOR:
            case INIT_DECLARATOR_LIST:
            case INITIALIZER:
            case CONDITIONAL_EXPRESSION:
            case LOGICAL_OR_EXPRESSION:
            case LOGICAL_AND_EXPRESSION:
            case INCLUSIVE_OR_EXPRESSION:
            case EXCLUSIVE_OR_EXPRESSION:
            case AND_EXPRESSION:
            case EQUALITY_EXPRESSION:
            case RELATIONAL_EXPRESSION:
            case SHIFT_EXPRESSION:
            case ADDITIVE_EXPRESSION:
            case MULTIPLICATIVE_EXPRESSION:
            case EXPRESSION_STATEMENT:
            case CAST_EXPRESSION:
            case UNARY_EXPRESSION:
            case POSTFIX_EXPRESSION:
            case PRIMARY_EXPRESSION:
            case EXPRESSION:
            case ASSIGNMENT_EXPRESSION: 
            case STATEMENT: {
                compound_statement(node->children[i]);
                break;
            }
            case INIT_DECLARATOR: {
                if(node->children[i]->val == NULL) {
                    continue;
                } 
                else {
                    printf("move ");
                    compound_statement(node->children[i]);
                }
                break;
            }
            case DIRECT_DECLARATOR: {
                if (node->children[i]->num_of_sons == 0) {
                    printf("%s, ",node->children[i]->val->v.s);
                }
                else {
                    compound_statement(node->children[i]);
                }
                break;
            }
            case CONSTANT: {
                if(!strcmp(node->children[i]->val->type,"integer")) {
                    printf("%d\n", node->children[i]->val->v.i);
                }
                else if(!strcmp(node->children[i]->val->type,"float")) {
                    printf("%f\n", node->children[i]->val->v.f);
                }
                break;
            }
            case JUMP_STATEMENT: {
                printf("jump L2\n");
                //compound_statement(node->children[i]);
                printf("label: L2\n");
                break;
            }
            case SELECTION_STATEMENT: {
                if(!strcmp(node->children[i]->val->v.s,"if")) {
                    printf("if_false ");
                } else if(!strcmp(node->children[i]->val->v.s,"switch")) {

                }
                selection_statement(node->children[i]);
                printf("label: L1\n");
                break;
            }
        }
    }
}

void selection_statement(AST* node) {
    int i;
    for (i = 0; i < 4; i++) {
        if (node->children[i] == NULL) continue;
        switch (node->children[i]->node_identifier) {
            case ASSIGNMENT_EXPRESSION:
            case CONDITIONAL_EXPRESSION:
            case LOGICAL_OR_EXPRESSION:
            case LOGICAL_AND_EXPRESSION:
            case INCLUSIVE_OR_EXPRESSION:
            case EXCLUSIVE_OR_EXPRESSION:
            case MULTIPLICATIVE_EXPRESSION:
            case ADDITIVE_EXPRESSION:
            case SHIFT_EXPRESSION:
            case AND_EXPRESSION:
            case CAST_EXPRESSION:
            case UNARY_EXPRESSION:
            case POSTFIX_EXPRESSION:
            case EXPRESSION: 
            case STATEMENT: {
                selection_statement(node->children[i]);
                break;
            }
            case COMPOUND_STATEMENT: {
                compound_statement(node->children[i]);
            }
            case CONSTANT: {
                printf("%s %s ", exp_code.symbol, exp_code.op);
                if(!strcmp(node->children[i]->val->type,"integer")) {
                    printf("%d ", node->children[i]->val->v.i);
                }
                else if(!strcmp(node->children[i]->val->type,"float")) {
                    printf("%f ", node->children[i]->val->v.f);
                }
                printf("goto L1\n");
                break;
            }
            case RELATIONAL_EXPRESSION: 
            case EQUALITY_EXPRESSION: {
                if (node->children[i]->val != NULL) {
                    if(!strcmp(node->children[i]->val->v.s,"==")) {
                        exp_code.op = "==";
                    }
                    else if (!strcmp(node->children[i]->val->v.s,"!=")) {
                        exp_code.op = "!=";
                    }
                    else if (!strcmp(node->children[i]->val->v.s,"<")) {
                        exp_code.op = "<";
                    }
                    else if (!strcmp(node->children[i]->val->v.s,">")) {
                        exp_code.op = ">";
                    }
                    else if (!strcmp(node->children[i]->val->v.s,"<=")) {
                        exp_code.op = "<=";
                    }
                    else if (!strcmp(node->children[i]->val->v.s,">=")) {
                        exp_code.op = ">=";
                    }
                }
                selection_statement(node->children[i]);
                break;
            }
            case PRIMARY_EXPRESSION: {
                if (node->children[i]->val != NULL) {
                    if(!strcmp(node->children[i]->val->type, "identifier")) {
                        exp_code.symbol = node->children[i]->val->v.s;
                    }
                } 
                selection_statement(node->children[i]);
                break;
            }
        }
    }
}
