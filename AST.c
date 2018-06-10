#include "AST.h"

const String slabels[] = {
	"UNARY_OPERATOR",
	"UNARY_EXPRESSION",
	"TYPE_SPECIFIER",
	"TYPE_QUALIFIER_LIST",
	"TYPE_QUALIFIER",
	"TYPE_NAME",
	"TRANSLATION_UNIT",
	"STRUCT_DECLARATOR",
	"STRUCT_DECLARATOR_LIST",
	"SPECIFIER_QUALIFIER_LIST",
	"STRUCT_DECLARATION",
	"STRUCT_DECLARATION_LIST",
	"STRUCT_OR_UNION",
	"STRUCT_OR_UNION_SPECIFIER",
	"STORAGE_CLASS_SPECIFIER",
	"STATEMENT",
	"SHIFT_EXPRESSION",
	"SELECTION_STATEMENT",
	"RELATIONAL_EXPRESSION",
	"PROGRAM",
	"PRIMARY_EXPRESSION",
	"POSTFIX_EXPRESSION",
	"POINTER",
	"PARAMETER_DECLARATION",
	"PARAMETER_LIST",
	"PARAMETER_TYPE_LIST",
	"MULTIPLICATIVE_EXPRESSION",
	"LOGICAL_OR_EXPRESSION",
	"LOGICAL_AND_EXPRESSION",
	"LABELED_STATEMENT",
	"JUMP_STATEMENT",
	"ITERATION_STATEMENT",
	"INITIALIZER_LIST",
	"INITIALIZER",
	"INIT_DECLARATOR",
	"INIT_DECLARATOR_LIST",
	"INCLUSIVE_OR_EXPRESSION",
	"IDENTIFIER_LIST",
	"FUNCTION_SPECIFIER",
	"FUNCTION_DEFINITION",
	"EXTERNAL_DECLARATION",
	"EXPRESSION_STATEMENT",
	"EXPRESSION",
	"EXCLUSIVE_OR_EXPRESSION",
	"EQUALITY_EXPRESSION",
	"ENUMERATOR",
	"ENUMERATOR_LIST",
	"ENUM_SPECIFIER",
	"DIRECT_ABSTRACT_DECLARATOR",
	"DIRECT_DECLARATOR",
	"DESIGNATOR",
	"DESIGNATOR_LIST",
	"DESIGNATION",
	"DECLARATION_LIST",
	"DECLARATOR",
	"DECLARATION_SPECIFIERS",
	"DECLARATION",
	"CONSTANT_EXPRESSION",
	"CONSTANT",
	"CONDITIONAL_EXPRESSION",
	"COMPOUND_STATEMENT",
	"CAST_EXPRESSION",
	"BLOCK_ITEM",
	"BLOCK_ITEM_LIST",
	"ASSIGNMENT_OPERATOR",
	"ASSIGNMENT_EXPRESSION",
	"ARGUMENT_EXPRESSION_LIST",
	"AND_EXPRESSION",
	"ADDITIVE_EXPRESSION",
	"ABSTRACT_DECLARATOR",
	"ERROR"
};

AST* make_node(value *val, int _case, int num_of_sons, ...) {
    AST *tree;
    tree = (AST*)malloc(sizeof(AST));
    
    if(val != NULL) {
		tree->val = (value*)malloc(sizeof(value));
        tree->val->type = val->type;
        tree->val->v = val->v;
		//printf("%s ", val->v.s);
    } else tree->val = NULL;

	int i = 0;
    for(; i < CHILDREN_NUM; i++)
		tree->children[i] = NULL;
	tree->node_identifier = _case;
	//printf("%s ", slabels[tree->node_identifier]);
	tree->num_of_sons = num_of_sons;

    va_list ap;
    va_start(ap, num_of_sons);
    i = 0;
    while(num_of_sons--)
        tree->children[i++] = va_arg(ap, AST*);
    va_end(ap);
    
    return tree;
}

void print_tree(AST* tree) {
	int i;
	// static int depth = 0;
	// for (i = 0; i < depth; i+=2) {
	// 	printf ("-");
	// }
	if(tree == NULL) return; 
	if(tree->val != NULL) {
		if(!strcmp(tree->val->type,"string"))
			printf("Value: %s ",tree->val->v.s);
		else if(!strcmp(tree->val->type,"identifier"))
			printf("Value: %s ",tree->val->v.s);
		else if(!strcmp(tree->val->type,"float"))
			printf("Value: %f ",tree->val->v.f);
		else if(!strcmp(tree->val->type,"integer"))
			printf("Value: %d ",tree->val->v.i);
		else 
			printf("Value: ");
	}
	printf("Label: %s\n",slabels[(tree->node_identifier)]);
    i = 0;
	// depth++;
    for (i = 0; i < CHILDREN_NUM; i++) {
		print_tree(tree->children[i]);
	}
	// depth--;   
}

int find_usage(AST* p, String _type[100], int i, String u) {
	if(p == NULL) return i;
	if(!strcmp(p->val->type,u)) {
		strcpy(_type[i],p->val->v.s);
		i++;
	}
    int index = 0;
    for (index = 0; index < CHILDREN_NUM; index++)
        i = find_usage(p->children[index],  _type, i, u);
	return i;
}