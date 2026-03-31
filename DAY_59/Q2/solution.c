// Day 59 - Question 2
// Problem: Construct Binary Tree from Inorder and Postorder Traversal

#include <stdlib.h>

struct TreeNode{int val;struct TreeNode* left;struct TreeNode* right;};

static struct TreeNode* build(int* in,int iL,int iR,int* post,int pL,int pR){
    if(iL>iR)return NULL;
    struct TreeNode* root=malloc(sizeof(struct TreeNode));
    root->val=post[pR];root->left=root->right=NULL;
    int k=iL;while(in[k]!=post[pR])k++;int l=k-iL,r=iR-k;
    root->left=build(in,iL,k-1,post,pL,pL+l-1);
    root->right=build(in,k+1,iR,post,pL+l,pR-1);
    return root;
}

struct TreeNode* buildTree(int* inorder, int inorderSize, int* postorder, int postorderSize){
    return build(inorder,0,inorderSize-1,postorder,0,postorderSize-1);
}