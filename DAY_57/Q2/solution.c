// Day 57 - Question 2
// Problem: Flatten Binary Tree to Linked List

void flatten(struct TreeNode* root){
    if(!root)return;
    struct TreeNode* cur=root;
    while(cur){
        if(cur->left){
            struct TreeNode* right=cur->right;
            struct TreeNode* pre=cur->left;
            while(pre->right)pre=pre->right;
            pre->right=right;
            cur->right=cur->left;
            cur->left=NULL;
        }
        cur=cur->right;
    }
}
