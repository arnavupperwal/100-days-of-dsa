// Day 36 - Question 1
// Problem: Circular Queue Using Array

#include <stdio.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int arr[100];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int m; scanf("%d",&m);
    int front=0, rear=n%100; // rear points to next free slot
    // dequeue m times
    for(int i=0;i<m && front!=rear;i++) front=(front+1)%100;
    int cnt=(rear-front+100)%100; // remaining elements
    for(int i=0;i<cnt;i++){
        int idx=(front+i)%100;
        printf("%d",arr[idx]);
        if(i<cnt-1) printf(" ");
    }
    return 0;
}
