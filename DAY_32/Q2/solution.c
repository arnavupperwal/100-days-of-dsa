// Day 32 - Question 2
// Problem: Min Stack

#include <stdio.h>
#include <stdlib.h>

typedef struct{int *v,*m;int cap,top;}MinStack;
MinStack* minStackCreate(){MinStack* s=malloc(sizeof(MinStack));s->cap=10000;s->top=0;s->v=malloc(s->cap*sizeof(int));s->m=malloc(s->cap*sizeof(int));return s;}
void minStackPush(MinStack* s,int x){if(s->top==s->cap){s->cap*=2; s->v=realloc(s->v,s->cap*sizeof(int)); s->m=realloc(s->m,s->cap*sizeof(int));}
s->v[s->top]=x; s->m[s->top]=s->top? (x<s->m[s->top-1]?x:s->m[s->top-1]) : x; s->top++;}
void minStackPop(MinStack* s){if(s->top>0)s->top--;}
int minStackTop(MinStack* s){return s->v[s->top-1];}
int minStackGetMin(MinStack* s){return s->m[s->top-1];}
void minStackFree(MinStack* s){free(s->v);free(s->m);free(s);}
