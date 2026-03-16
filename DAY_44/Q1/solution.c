// Day 44 - Question 1
// Problem: Binary Tree Traversals

#include <stdio.h>

int n, arr[100];

void inorder(int i){
    if(i>=n || arr[i]==-1) return;
    inorder(2*i+1);
    printf("%d ", arr[i]);
    inorder(2*i+2);
}

void preorder(int i){
    if(i>=n || arr[i]==-1) return;
    printf("%d ", arr[i]);
    preorder(2*i+1);
    preorder(2*i+2);
}

void postorder(int i){
    if(i>=n || arr[i]==-1) return;
    postorder(2*i+1);
    postorder(2*i+2);
    printf("%d ", arr[i]);
}

int main(){
    scanf("%d", &n);
    for(int i=0;i<n;i++) scanf("%d", &arr[i]);
    inorder(0); printf("\n");
    preorder(0); printf("\n");
    postorder(0); printf("\n");
    return 0;
}
