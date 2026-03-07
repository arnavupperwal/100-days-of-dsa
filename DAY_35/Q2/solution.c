// Day 35 - Question 2
// Problem: Implement Queue using Stacks

#include <stdlib.h>
#include <stdbool.h>

struct Node{int v;struct Node*n;};
struct MyQueue{struct Node*in;struct Node*out;};

static void pushS(struct Node**s,int x){struct Node*t=malloc(sizeof* t);t->v=x;t->n=*s;*s=t;}
static int popS(struct Node**s){int r=(*s)->v;struct Node*t=*s;*s=t->n;free(t);return r;}
static bool emptyS(struct Node*s){return s==NULL;}

struct MyQueue* myQueueCreate(){struct MyQueue*q=malloc(sizeof* q);q->in=q->out=NULL;return q;}
void myQueuePush(struct MyQueue*obj,int x){pushS(&obj->in,x);} 
int myQueuePop(struct MyQueue*obj){if(emptyS(obj->out)){while(!emptyS(obj->in))pushS(&obj->out,popS(&obj->in));}return popS(&obj->out);} 
int myQueuePeek(struct MyQueue*obj){if(emptyS(obj->out)){while(!emptyS(obj->in))pushS(&obj->out,popS(&obj->in));}return obj->out->v;} 
bool myQueueEmpty(struct MyQueue*obj){return emptyS(obj->in)&&emptyS(obj->out);} 
void myQueueFree(struct MyQueue*obj){while(!emptyS(obj->in))popS(&obj->in);while(!emptyS(obj->out))popS(&obj->out);free(obj);}