// Day 47 - Question 1
// Problem: Height of Binary Tree

#include <stdio.h>

int head[101], to[200], nxt[200], idx;
int n;

int dfs(int u){
    int h=0, v;
    for(int e=head[u]; e!=-1; e=nxt[e]){
        v=to[e];
        int sub=dfs(v)+1;
        if(sub>h) h=sub;
    }
    return h;
}

int main(){
    scanf("%d", &n);
    for(int i=1;i<=n;i++) head[i]=-1;
    idx=0;
    for(int i=0;i<n-1;i++){
        int u,v; scanf("%d%d", &u,&v);
        to[idx]=v; nxt[idx]=head[u]; head[u]=idx++; // directed from parent to child
    }
    int height=dfs(1); // assume 1 is root
    printf("%d", height);
    return 0;
}
