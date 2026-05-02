// Day 94 - Question 1
// Problem: Counting Sort Implementation

#include <stdio.h>

int main(){
    int n,i,x,max=0;
    if(scanf("%d",&n)!=1) return 0;
    int arr[100];
    for(i=0;i<n;i++){ scanf("%d",&arr[i]); if(arr[i]>max) max=arr[i]; }
    int freq[max+1];
    for(i=0;i<=max;i++) freq[i]=0;          // count frequencies
    for(i=0;i<n;i++) freq[arr[i]]++;
    int out[100];
    int pos=0;
    for(i=0;i<=max;i++) while(freq[i]--){ out[pos++]=i; }
    for(i=0;i<n;i++) printf("%d%c", out[i], i==n-1?'\n':' ');
    return 0;
}
