// Day 53 - Question 2
// Problem: Binary Tree Level Order Traversal

#include <stdlib.h>
struct TreeNode{int val;struct TreeNode* left;struct TreeNode* right;};
int** levelOrder(struct TreeNode* root, int* returnSize, int** returnColumnSizes){
    if(!root){*returnSize=0;*returnColumnSizes=NULL;return NULL;}
    // simple queue
    struct TreeNode** q=malloc(sizeof(struct TreeNode*)*1000);int front=0,back=0;q[back++]=root;
    int maxLevels=1000;int* colSizes=malloc(sizeof(int)*maxLevels);int* sizes=malloc(sizeof(int)*maxLevels);int lvl=0;int curCnt=1, nextCnt=0;
    int** res=malloc(sizeof(int*)*maxLevels);
    while(front<back){
        struct TreeNode* node=q[front++];
        if(lvl==0){res[lvl]=malloc(sizeof(int)*curCnt);colSizes[lvl]=curCnt;}
        res[lvl][sizes[lvl]++]=node->val;
        if(node->left){q[back++]=node->left;nextCnt++;}
        if(node->right){q[back++]=node->right;nextCnt++;}
        curCnt--; if(curCnt==0){lvl++; curCnt=nextCnt; nextCnt=0;}
    }
    *returnSize=lvl;*returnColumnSizes=colSizes;return res;
}