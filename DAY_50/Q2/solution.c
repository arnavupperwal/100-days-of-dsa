// Day 50 - Question 2
// Problem: Search in BST

struct TreeNode* searchBST(struct TreeNode* root,int val){if(!root||root->val==val)return root;return val<root->val?searchBST(root->left,val):searchBST(root->right,val);}