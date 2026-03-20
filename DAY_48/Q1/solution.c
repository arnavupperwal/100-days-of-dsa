// Day 48 - Question 1
// Problem: Count Leaf Nodes

#include <stdio.h>

int main(){
    int n,i,u,v,deg[101]={0};
    if(scanf("%d",&n)!=1) return 0;
    for(i=0;i<n-1;i++){
        scanf("%d%d",&u,&v);
        deg[u]++; deg[v]++; // count connections
    }
    int leaf=0;
    for(i=1;i<=n;i++){
        if(deg[i]==1) leaf++; // leaf if only one connection
    }
    // if root has no edges (single node)
    if(n==1) leaf=1;
    printf("%d",leaf);
    return 0;
}
