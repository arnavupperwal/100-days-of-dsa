// Day 58 - Question 1
// Problem: Build Tree from Inorder & Preorder

#include <stdio.h>

int n, pre[100], in[100], idx = 0;

int find(int val, int l, int r){
    for(int i=l;i<=r;i++) if(in[i]==val) return i;
    return -1;
}

void post(int l, int r){
    if(l>r) return;
    int root = pre[idx++];
    int pos = find(root,l,r);
    post(l,pos-1);          // left
    post(pos+1,r);          // right
    printf("%d ",root);    // root
}

int main(){
    if(scanf("%d",&n)!=1) return 0;
    for(int i=0;i<n;i++) scanf("%d",&pre[i]);
    for(int i=0;i<n;i++) scanf("%d",&in[i]);
    post(0,n-1);
    return 0;
}
