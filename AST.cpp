#include "AST.h"
//include "yacc.hpp"
extern FILE* yyin;


void PrintTree(AST* tree) {

}

AST* NewNode() {
    AST* pNew = new AST;
    if(!pNew) return pNew;
    memset(pNew, 0, sizeof(*pNew));
    return pNew;
}

AST* FatherAddSon(AST* pFather, AST* pSon) {
    AST* pFS = pFather->lpSub;
    if (!pFS) { //no son
        pFather->lpSub = pSon;
        return pFather;
    }
    else {
        while(pFS->lpNext)//add to neighbor
            pFS = pFS->lpNext;
        
        pFS->lpNext = pSon;
        return pFather;
    }
}

AST* NewFatherAddSon(statement_type iType, int num_of_sons, ...) {
    AST* pFather = NewNode();
    if (!pFather)
    {
        return pFather;
    }
    
    pFather->type = iType;
    
    va_list ap;
    va_start(ap, num_of_sons);
    
    while(num_of_sons--)
        FatherAddSon(pFather, va_arg(ap, AST*));
    
    va_end(ap);
    
    return pFather;
}
void FreeTree(AST* root) {
    if (root->lpNext)  FreeTree(root->lpNext);
    if (root->lpSub)   FreeTree(root->lpSub);
    //real free
    delete root;
    root = NULL;
}