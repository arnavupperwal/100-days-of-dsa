// Day 26 - Question 2
// Problem: Design Linked List

#include <stdlib.h>

struct Node{int v; struct Node* n;};
struct MyLinkedList{int sz; struct Node* h;};

struct MyLinkedList* myLinkedListCreate(){struct MyLinkedList* l=malloc(sizeof* l);l->sz=0;l->h=NULL;return l;}

int myLinkedListGet(struct MyLinkedList* l,int i){if(i<0||i>=l->sz)return -1;struct Node* p=l->h;while(i--)p=p->n;return p->v;}

void myLinkedListAddAtHead(struct MyLinkedList* l,int v){struct Node* n=malloc(sizeof* n);n->v=v;n->n=l->h;l->h=n;l->sz++;}

void myLinkedListAddAtTail(struct MyLinkedList* l,int v){struct Node* n=malloc(sizeof* n);n->v=v;n->n=NULL;if(!l->h){l->h=n;}else{struct Node* p=l->h;while(p->n)p=p->n;p->n=n;}l->sz++;}

void myLinkedListAddAtIndex(struct MyLinkedList* l,int i,int v){if(i<0||i>l->sz)return;if(i==0){myLinkedListAddAtHead(l,v);return;}struct Node* p=l->h;while(--i)p=p->n;struct Node* n=malloc(sizeof* n);n->v=v;n->n=p->n;p->n=n;l->sz++;}

void myLinkedListDeleteAtIndex(struct MyLinkedList* l,int i){if(i<0||i>=l->sz)return;if(i==0){struct Node* t=l->h;l->h=l->h->n;free(t);}else{struct Node* p=l->h;while(--i)p=p->n;struct Node* t=p->n;p->n=t->n;free(t);}l->sz--;}

void myLinkedListFree(struct MyLinkedList* l){while(l->h){struct Node* t=l->h;l->h=l->h->n;free(t);}free(l);}