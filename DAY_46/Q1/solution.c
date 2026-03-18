// Day 46 - Question 1
// Problem: Level Order Traversal

#include <stdio.h>
int main(){
    int n,i;
    if(scanf("%d",&n)!=1)return 0;
    int arr[n+1];
    for(i=1;i<=n;i++)scanf("%d",&arr[i]);
    for(i=1;i<=n;i++){
        printf("%d",arr[i]);
        if(i<n)printf(" ");
    }
    return 0;
}
