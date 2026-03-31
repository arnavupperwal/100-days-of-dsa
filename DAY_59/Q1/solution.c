// Day 59 - Question 1
// Problem: Build Tree from Inorder & Postorder

#include <stdio.h>

int n;
int in[100], post[100];

// build tree recursively and print preorder
void build(int inL, int inR, int postL, int postR){
    if(inL>inR) return; // no nodes
    int root = post[postR];
    printf("%d ", root);
    // find root in inorder
    int i;
    for(i=inL;i<=inR;i++) if(in[i]==root) break;
    int leftSize = i-inL;
    // left subtree
    build(inL, i-1, postL, postL+leftSize-1);
    // right subtree
    build(i+1, inR, postL+leftSize, postR-1);
}

int main(){
    if(scanf("%d", &n)!=1) return 0;
    for(int i=0;i<n;i++) scanf("%d", &in[i]);
    for(int i=0;i<n;i++) scanf("%d", &post[i]);
    build(0, n-1, 0, n-1);
    return 0;
}
