// Day 25 - Question 1
// Problem: Count Occurrences of an Element in Linked List

#include <stdio.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int arr[100];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int key; scanf("%d",&key);
    int cnt=0;
    for(int i=0;i<n;i++) if(arr[i]==key) cnt++; // count matches
    printf("%d",cnt);
    return 0;
}
