// Day 43 - Question 1
// Problem: Binary Tree Construction (Level Order)

#include <stdio.h>

int n, arr[100];
int val[100], left[100], right[100];
int q[100], head, tail;

void inorder(int v){
    if(v==-1) return;
    inorder(left[v]);
    printf("%d ", val[v]);
    inorder(right[v]);
}

int main(){
    scanf("%d", &n);
    for(int i=0;i<n;i++) scanf("%d", &arr[i]);
    if(n==0) return 0;
    int p=0; // index in arr
    if(arr[0]==-1) return 0; // empty tree
    int root=0;
    val[root]=arr[0]; left[root]=right[root]=-1;
    head=tail=0; q[tail++]=root;
    p=1;
    while(p<n){
        int cur=q[head++];
        // left child
        if(p<n && arr[p]!=-1){
            int lc=p; val[lc]=arr[p]; left[lc]=right[lc]=-1;
            left[cur]=lc; q[tail++]=lc;
        }else left[cur]=-1;
        p++;
        // right child
        if(p<n && arr[p]!=-1){
            int rc=p; val[rc]=arr[p]; left[rc]=right[rc]=-1;
            right[cur]=rc; q[tail++]=rc;
        }else right[cur]=-1;
        p++;
    }
    inorder(root);
    return 0;
}
