// Day 21 - Question 1
// Problem: Create and Traverse Singly Linked List

#include <stdio.h>

struct Node{int data; struct Node *next;};

int main(){
    int n,i; if(scanf("%d",&n)!=1) return 0;
    struct Node nodes[100];
    for(i=0;i<n;i++){
        scanf("%d",&nodes[i].data); // read data
        nodes[i].next = (i<n-1)? &nodes[i+1]: NULL; // link nodes
    }
    struct Node *head = (n>0)? &nodes[0]: NULL;
    for(struct Node *p=head; p; p=p->next){
        printf("%d", p->data);
        if(p->next) printf(" ");
    }
    return 0;
}
