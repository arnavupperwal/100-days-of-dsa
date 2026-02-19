// Day 19 - Question 1
// Problem: Pair Sum Closest to Zero

#include <stdio.h>
int main(){
    int n,i; if(scanf("%d",&n)!=1) return 0; int arr[100];
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    // sort array
    for(i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++) if(arr[i]>arr[j]){int t=arr[i];arr[i]=arr[j];arr[j]=t;}
    int l=0,r=n-1; int best=2147483647, x=0,y=0;
    while(l<r){
        int s=arr[l]+arr[r];
        int abs_s=s<0?-s:s;
        if(abs_s<best){best=abs_s; x=arr[l]; y=arr[r];}
        if(s<0) l++; else r--;
    }
    printf("%d %d",x,y);
    return 0;
}
