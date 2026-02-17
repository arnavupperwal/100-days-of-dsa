// Day 17 - Question 1
// Problem: Find Maximum and Minimum Element

#include <stdio.h>

int main(){
    int n,i; 
    if(scanf("%d",&n)!=1) return 0; // read size
    int arr[100];
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    int mx=arr[0],mn=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>mx) mx=arr[i];
        if(arr[i]<mn) mn=arr[i];
    }
    printf("Max: %d\n",mx);
    printf("Min: %d\n",mn);
    return 0;
}
