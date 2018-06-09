#include "AST.h"

AST* make_node(value val, int _case, ...) {

}
void print_tree(AST* tree) {
	if(tree==NULL)
		return; 
	if(!strcmp(tree->val.use,"string"))
		printf("Value: %s ",tree->val.v.s);
	if(!strcmp(tree->val.use,"identifier"))
		printf("Value: %s ",tree->val.v.s);
	else if(!strcmp(tree->val.use,"float"))
		printf("Value: %f ",tree->val.v.f);
	else if(!strcmp(tree->val.use,"integer"))
		printf("Value: %d ",tree->val.v.i);
	else 
		printf("Value: ");

	printf("Label: %s\n",labels[(tree->node_identifier)]);
	//if(tree->first!=NULL) printf("Going from %s to %s\n",labels[tree->nodeIdentifier],labels[tree->firstree->nodeIdentifier]);
	print_tree(tree->first);
	//if(tree->second!=NULL) printf("Going from %s to %s\n",labels[tree->nodeIdentifier],labels[tree->second->nodeIdentifier]);
	print_tree(tree->second);
	//if(tree->third!=NULL) printf("Going from %s to %s\n",labels[tree->nodeIdentifier],labels[tree->third->nodeIdentifier]);
	print_tree(tree->third);
	//if(tree->fourth!=NULL) printf("Going from %s to %s\n",labels[tree->nodeIdentifier],labels[tree->fourth->nodeIdentifier]);
	print_tree(tree->fourth);
}
int find_usage(AST* p, String _type[100], int i, String u) {

}