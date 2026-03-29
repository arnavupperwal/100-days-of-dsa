// Day 57 - Question 1
// Problem: Mirror a Binary Tree

#include <stdio.h>

int n;
int val[100];
int left[100], right[100];

void mirror(int v){
    if(v==-1) return;
    int t=left[v]; left[v]=right[v]; right[v]=t; // swap children
    mirror(left[v]);
    mirror(right[v]);
}

void inorder(int v){
    if(v==-1) return;
    inorder(left[v]);
    printf("%d ", val[v]);
    inorder(right[v]);
}

int main(){
    if(scanf("%d", &n)!=1) return 0;
    for(int i=0;i<n;i++){
        scanf("%d", &val[i]);
        left[i] = (2*i+1<n)? 2*i+1 : -1;
        right[i] = (2*i+2<n)? 2*i+2 : -1;
    }
    mirror(0);
    inorder(0);
    return 0;
}
