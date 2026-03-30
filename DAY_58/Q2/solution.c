// Day 58 - Question 2
// Problem: Construct Binary Tree from Preorder and Inorder Traversal

TreeNode* buildTree(int* preorder, int preorderSize, int* inorder, int inorderSize){
    if(!preorderSize) return NULL;
    int i;
    for(i=0;i<inorderSize;i++) if(inorder[i]==preorder[0]) break; // find root
    int leftSize=i;
    TreeNode* root=(TreeNode*)malloc(sizeof(TreeNode));
    root->val=preorder[0];
    root->left=buildTree(preorder+1, leftSize, inorder, leftSize);
    root->right=buildTree(preorder+1+leftSize, preorderSize-1-leftSize, inorder+leftSize+1, inorderSize-leftSize-1);
    return root;
}