// Day 30 - Question 1
// Problem: Polynomial Using Linked List

#include <stdio.h>

int main(){
    int n,i;
    if(scanf("%d",&n)!=1) return 0;
    int c[100],e[100];
    for(i=0;i<n;i++) scanf("%d %d",&c[i],&e[i]);
    for(i=0;i<n;i++){
        if(i) printf(" + ");
        if(e[i]==0) printf("%d",c[i]);
        else if(e[i]==1) printf("%dx",c[i]);
        else printf("%dx^%d",c[i],e[i]);
    }
    return 0;
}
