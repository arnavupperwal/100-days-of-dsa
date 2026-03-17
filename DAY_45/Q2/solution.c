// Day 45 - Question 2
// Problem: Maximum Depth of Binary Tree

int maxDepth(struct TreeNode* r){if(!r)return 0;int l=maxDepth(r->left),h=maxDepth(r->right);return l>h?l+1:h+1;}
