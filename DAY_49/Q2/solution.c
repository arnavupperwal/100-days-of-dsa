// Day 49 - Question 2
// Problem: Insert into BST

struct TreeNode* insertIntoBST(struct TreeNode* root, int val){
    if(!root) return (struct TreeNode*){val,0,0};
    if(val<root->val) root->left=insertIntoBST(root->left,val);
    else root->right=insertIntoBST(root->right,val);
    return root;
}