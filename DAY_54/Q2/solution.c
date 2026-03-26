// Day 54 - Question 2
// Problem: Binary Tree Zigzag Level Order Traversal

#include <stdlib.h>
struct TreeNode{int val;struct TreeNode* left;struct TreeNode* right;};
int** zigzagLevelOrder(struct TreeNode* root,int** returnColumnSizes,int* returnSize){
    if(!root){*returnSize=0;*returnColumnSizes=NULL;return NULL;}
    int rc=10,rs=0;int** res=malloc(rc*sizeof(int*));int* col=malloc(rc*sizeof(int));
    int qc=100;struct TreeNode** q=malloc(qc*sizeof(struct TreeNode*));int h=0,t=0;q[t++]=root;int dir=1;
    while(h<t){int sz=t-h;int* lev=malloc(sz*sizeof(int));for(int i=0;i<sz;i++){struct TreeNode* n=q[h++];lev[i]=n->val;if(n->left){if(t==qc){qc*=2;q=realloc(q,qc*sizeof(struct TreeNode*));}q[t++]=n->left;}if(n->right){if(t==qc){qc*=2;q=realloc(q,qc*sizeof(struct TreeNode*));}q[t++]=n->right;}}
        if(dir==-1){for(int i=0,j=sz-1;i<j;i++,j--){int tmp=lev[i];lev[i]=lev[j];lev[j]=tmp;}}
        if(rs==rc){rc*=2;res=realloc(res,rc*sizeof(int*));col=realloc(col,rc*sizeof(int));}
        res[rs]=lev;col[rs]=sz;rs++;dir*=-1;}
    *returnSize=rs;*returnColumnSizes=col;return res;}
