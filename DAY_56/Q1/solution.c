// Day 56 - Question 1
// Problem: Symmetric Binary Tree Check

#include <stdio.h>

int n, arr[101];

int isMirror(int i, int j){
    int vi = (i>n)?-1:arr[i];
    int vj = (j>n)?-1:arr[j];
    if(vi==-1 && vj==-1) return 1;
    if(vi==-1 || vj==-1) return 0;
    if(vi!=vj) return 0;
    return isMirror(2*i,2*j+1) && isMirror(2*i+1,2*j);
}

int main(){
    if(scanf("%d", &n)!=1) return 0;
    for(int i=1;i<=n;i++) scanf("%d", &arr[i]);
    if(isMirror(2,3)) printf("YES\n");
    else printf("NO\n");
    return 0;
}
