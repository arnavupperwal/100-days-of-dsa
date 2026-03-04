// Day 32 - Question 1
// Problem: Push and Pop in Stack

#include <stdio.h>

int main(){
    int n,i,m,pos;
    int arr[100];
    if(scanf("%d",&n)!=1) return 0;
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&m);
    pos=n-1; // top index
    pos-=m; // pop m times
    for(i=pos;i>=0;i--){
        printf("%d",arr[i]);
        if(i>0) printf(" ");
    }
    return 0;
}
