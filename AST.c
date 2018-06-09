#include "AST.h"

AST* make_node(value val, int _case, int num_of_sons, ...) {
    AST *tree;
    tree = (AST*)malloc(sizeof(AST));
    tree->val = val;
    tree->node_identifier = _case;

    va_list ap;
    va_start(ap, num_of_sons);
    int i = 0;
    while(num_of_sons--)
        tree->children[i++] = va_arg(ap, AST*);
    va_end(ap);
    
    return tree;
}

void print_tree(AST* tree) {
	if(tree == NULL) return; 
	if(!strcmp(tree->val.type,"string"))
		printf("Value: %s ",tree->val.v.s);
	if(!strcmp(tree->val.type,"identifier"))
		printf("Value: %s ",tree->val.v.s);
	else if(!strcmp(tree->val.type,"float"))
		printf("Value: %f ",tree->val.v.f);
	else if(!strcmp(tree->val.type,"integer"))
		printf("Value: %d ",tree->val.v.i);
	else 
		printf("Value: ");

	printf("Label: %s\n",labels[(tree->node_identifier)]);
    int i = 0;
    for (i = 0; i < CHILDREN_NUM; i++)
        print_tree(tree->children[i]);
	// //if(tree->first!=NULL) printf("Going from %s to %s\n",labels[tree->nodeIdentifier],labels[tree->firstree->nodeIdentifier]);
	// print_tree(tree->children[0]);
	// //if(tree->second!=NULL) printf("Going from %s to %s\n",labels[tree->nodeIdentifier],labels[tree->second->nodeIdentifier]);
	// print_tree(tree->children[1]);
	// //if(tree->third!=NULL) printf("Going from %s to %s\n",labels[tree->nodeIdentifier],labels[tree->third->nodeIdentifier]);
	// print_tree(tree->children[2]);
	// //if(tree->fourth!=NULL) printf("Going from %s to %s\n",labels[tree->nodeIdentifier],labels[tree->fourth->nodeIdentifier]);
	// print_tree(tree->children[3]);
}

int find_usage(AST* p, String _type[100], int i, String u) {
	if(p == NULL) return i;
	if(!strcmp(p->val.type,u)) {
		strcpy(_type[i],p->val.v.s);
		i++;
	}
    int index = 0;
    for (index = 0; index < CHILDREN_NUM; index++)
        i = find_usage(p->children[index],  _type, i, u);
	// i = find_usage(p->first,  _type, i, u);
	// i = find_usage(p->second, _type, i, u);
	// i = find_usage(p->third,  _type, i, u);
	// i = find_usage(p->fourth, _type, i, u);
	return i;
}