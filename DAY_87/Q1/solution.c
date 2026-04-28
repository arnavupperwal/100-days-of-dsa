// Day 87 - Question 1
// Problem: Implement Binary Search Iterative

#include <stdio.h>
int main(){
    int n,i,j;scanf("%d",&n);int arr[100];for(i=0;i<n;i++)scanf("%d",&arr[i]);
    // simple bubble sort
    for(i=0;i<n-1;i++)for(j=0;j<n-i-1;j++)if(arr[j]>arr[j+1]){int t=arr[j];arr[j]=arr[j+1];arr[j+1]=t;}
    for(i=0;i<n;i++)printf("%d%s",arr[i],i==n-1?"":" ");
    return 0;
}
