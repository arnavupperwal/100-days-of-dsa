// Day 60 - Question 2
// Problem: Binary Tree Cameras

int minCameraCover(struct TreeNode* root){
    int ans=0;
    // 0=covered,1=has camera,2=needs camera
    int dfs(struct TreeNode* n){
        if(!n) return 0;
        int l=dfs(n->left), r=dfs(n->right);
        if(l==2||r==2){ans++;return 1;}
        if(l==1||r==1)return 0;
        return 2;
    }
    if(dfs(root)==2) ans++;
    return ans;
}