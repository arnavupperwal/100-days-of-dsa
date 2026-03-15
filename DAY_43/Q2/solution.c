// Day 43 - Question 2
// Problem: Binary Tree Inorder Traversal

#include <stdlib.h>
struct TreeNode{int val;struct TreeNode *left;struct TreeNode *right;};
static void dfs(struct TreeNode* n,int** a,int* sz,int* cap){if(!n)return;dfs(n->left,a,sz,cap);if(*sz==*cap){*cap=*cap?*cap*2:100;*a=realloc(*a,*cap*sizeof(int));}(*a)[(*sz)++] = n->val;dfs(n->right,a,sz,cap);}int* inorderTraversal(struct TreeNode* root,int* returnSize){int* a=NULL;int sz=0,cap=0;dfs(root,&a,&sz,&cap);*returnSize=sz;return a;}
