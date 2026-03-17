// Day 45 - Question 1
// Problem: Height of a Binary Tree

#include <stdio.h>
int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int arr[100];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int last=-1;
    for(int i=0;i<n;i++) if(arr[i]!=-1) last=i;
    if(last==-1){ printf("0"); return 0; }
    int sz=last+1, h=0;
    while(sz>1){ sz>>=1; h++; }
    printf("%d", h+1);
    return 0;
}
