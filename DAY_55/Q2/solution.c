// Day 55 - Question 2
// Problem: Binary Tree Right Side View

#include <stdlib.h>

struct TreeNode{int val;struct TreeNode* left;struct TreeNode* right;};
struct Q{struct TreeNode* t;struct Q* n;};

int* rightSideView(struct TreeNode* root,int* returnSize){
    if(!root){*returnSize=0;return NULL;}
    struct Q *qhead=NULL,*qtail=NULL, *tmp;
    int cap=10;int sz=0;int *res=malloc(cap*sizeof(int));
    // enqueue root
    qhead=qtail=malloc(sizeof(struct Q));qtail->t=root;qtail->n=NULL;
    while(qhead){
        int level=0;struct Q* cur=qhead;
        while(cur){level++;cur=cur->n;}
        int last=0;
        for(int i=0;i<level;i++){
            struct TreeNode* node=qhead->t;tmp=qhead;qhead=qhead->n;free(tmp);
            last=node->val;
            if(node->left){tmp=malloc(sizeof(struct Q));tmp->t=node->left;tmp->n=NULL;if(qtail){qtail->n=tmp;}else qhead=tmp;qtail=tmp;}
            if(node->right){tmp=malloc(sizeof(struct Q));tmp->t=node->right;tmp->n=NULL;if(qtail){qtail->n=tmp;}else qhead=tmp;qtail=tmp;}
        }
        if(sz==cap){cap*=2;res=realloc(res,cap*sizeof(int));}
        res[sz++]=last;
    }
    *returnSize=sz;return res;
}
