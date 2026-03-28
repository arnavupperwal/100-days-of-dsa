// Day 56 - Question 2
// Problem: Symmetric Tree

#include <stdbool.h>
struct TreeNode{int val;struct TreeNode* left;struct TreeNode* right;};
bool isSymmetric(struct TreeNode* root){
    if(!root) return true;
    struct TreeNode *l=root->left,*r=root->right;
    while(l||r){
        if(!l||!r||l->val!=r->val) return false;
        struct TreeNode *ln=l->left,*rn=r->right;
        l=l->right; r=r->left; // swap sides
        l=ln; r=rn; // push next pair
    }
    return true;
}
