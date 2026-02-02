// Day 2 - Question 1
// Problem: Delete an Element from an Array

#include <stdio.h>

int main(){
    int n, pos, arr[100];
    if(scanf("%d", &n)!=1) return 0;
    for(int i=0;i<n;i++) scanf("%d", &arr[i]);
    scanf("%d", &pos); // 1‑based
    int idx = pos-1; // 0‑based index to delete
    for(int i=idx;i<n-1;i++) arr[i]=arr[i+1]; // shift left
    for(int i=0;i<n-1;i++){
        printf("%d", arr[i]);
        if(i<n-2) printf(" ");
    }
    return 0;
}
