// Day 55 - Question 1
// Problem: Right View of Binary Tree

#include <stdio.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int a[100];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int q[100], front=0, rear=0;
    if(a[0]==-1) return 0; // empty tree
    q[rear++]=0; // root index
    while(front<rear){
        int sz=rear-front; // nodes in current level
        for(int i=0;i<sz;i++){
            int idx=q[front++];
            if(i==sz-1) printf("%d ",a[idx]);
            int l=2*idx+1, r=2*idx+2;
            if(l<n && a[l]!=-1) q[rear++]=l;
            if(r<n && a[r]!=-1) q[rear++]=r;
        }
    }
    return 0;
}
