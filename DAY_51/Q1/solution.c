// Day 51 - Question 1
// Problem: Lowest Common Ancestor in BST

#include <stdio.h>

struct Node{int v,l,r;};
struct Node nodes[100];
int cnt=0;
int newnode(int val){nodes[cnt].v=val;nodes[cnt].l=nodes[cnt].r=-1;return cnt++;}
void insert(int *root,int val){if(*root==-1){*root=newnode(val);return;}int cur=*root;while(1){if(val<nodes[cur].v){if(nodes[cur].l==-1){nodes[cur].l=newnode(val);break;}cur=nodes[cur].l;}else{if(nodes[cur].r==-1){nodes[cur].r=newnode(val);break;}cur=nodes[cur].r;}}}
int lca(int root,int a,int b){while(root!=-1){int v=nodes[root].v;if(a<v&&b<v)root=nodes[root].l;else if(a>v&&b>v)root=nodes[root].r;else return v;}}
int main(){int n,i;scanf("%d",&n);int arr[100];for(i=0;i<n;i++)scanf("%d",&arr[i]);int root=-1;for(i=0;i<n;i++)insert(&root,arr[i]);int x,y;scanf("%d %d",&x,&y);printf("%d",lca(root,x,y));return 0;}
