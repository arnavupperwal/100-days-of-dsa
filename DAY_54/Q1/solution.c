// Day 54 - Question 1
// Problem: Zigzag Traversal

#include <stdio.h>

struct Node{int val;int l;int r;};
int main(){int n;scanf("%d",&n);struct Node a[101];int pos=0;int q[101],front=0,back=0;for(int i=0;i<n;i++){int x;scanf("%d",&x);a[i].val=x;a[i].l=a[i].r=-1;if(x!=-1){q[back++]=i;}}
while(front<back){int cur=q[front++];int left=2*cur+1,right=2*cur+2;if(left<n&&a[left].val!=-1){a[cur].l=left;q[back++]=left;}if(right<n&&a[right].val!=-1){a[cur].r=right;q[back++]=right;}}
int s1[101],s2[101],top1=0,top2=0;int dir=0;int root=0;if(a[root].val==-1)return 0; s1[top1++]=root;while(top1||top2){if(dir==0){while(top1){int node=s1[--top1];printf("%d ",a[node].val);if(a[node].l!=-1)s2[top2++]=a[node].l;if(a[node].r!=-1)s2[top2++]=a[node].r;}dir=1;}else{while(top2){int node=s2[--top2];printf("%d ",a[node].val);if(a[node].r!=-1)s1[top1++]=a[node].r;if(a[node].l!=-1)s1[top1++]=a[node].l;}dir=0;}}return 0;}
