// Day 46 - Question 2
// Problem: Binary Tree Level Order Traversal

#include <stdio.h>
#include <stdlib.h>

struct TreeNode{int val;struct TreeNode* left;struct TreeNode* right;};

int** levelOrder(struct TreeNode* root, int* returnSize, int** returnColumnSizes){
    if(!root){*returnSize=0;*returnColumnSizes=NULL;return NULL;}
    struct TreeNode* q[1000];int front=0,back=0;q[back++]=root;int levels=0;
    int **res=NULL;int *cols=NULL;
    while(front<back){int sz=back-front;int *row=malloc(sz*sizeof(int));
        for(int i=0;i<sz;i++){struct TreeNode* cur=q[front++];row[i]=cur->val;
            if(cur->left)q[back++]=cur->left; if(cur->right)q[back++]=cur->right;}
        res=realloc(res,++levels*sizeof(int*));res[levels-1]=row;
        cols=realloc(cols,levels*sizeof(int));cols[levels-1]=sz;}
    *returnSize=levels;*returnColumnSizes=cols;return res;}