// Day 48 - Question 2
// Problem: Sum of Left Leaves

int sumOfLeftLeaves(struct TreeNode* root){int sum=0; if(!root) return 0; if(root->left && !root->left->left && !root->left->right) sum+=root->left->val; sum+=sumOfLeftLeaves(root->left); sum+=sumOfLeftLeaves(root->right); return sum; }