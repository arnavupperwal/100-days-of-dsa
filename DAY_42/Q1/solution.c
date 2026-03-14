// Day 42 - Question 1
// Problem: Reverse a Queue Using Stack

#include <stdio.h>

int main(){
    int n,i;
    if(scanf("%d",&n)!=1) return 0;
    int arr[100], st[100];
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    // push all elements onto stack
    for(i=0;i<n;i++) st[i]=arr[i];
    // pop from stack to output reversed
    for(i=n-1;i>=0;i--){
        printf("%d", st[i]);
        if(i) printf(" ");
    }
    return 0;
}
