// Day 50 - Question 1
// Problem: BST Search

#include <stdio.h>
int main(){
    int n,i,x,arr[100];
    if(scanf("%d",&n)!=1) return 0;
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&x);
    int l=0,r=n-1,found=0;
    while(l<=r){
        int m=(l+r)/2;
        if(arr[m]==x){found=1;break;}
        else if(arr[m]<x) l=m+1; else r=m-1;
    }
    printf("%d",found);
    return 0;
}
