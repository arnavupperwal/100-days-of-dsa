// Day 66 - Question 1
// Problem: Cycle Detection in Directed Graph

#include <stdio.h>

int n,m;                 // number of vertices and edges
int to[200], nxt[200], head[101];
int ec=0;                 // edge counter
int vis[101], rec[101];   // visited and recursion stack

void add(int u,int v){
    to[ec]=v; nxt[ec]=head[u]; head[u]=ec++;
}

int dfs(int u){
    vis[u]=rec[u]=1;
    for(int e=head[u]; e!=-1; e=nxt[e]){
        int v=to[e];
        if(!vis[v]){ if(dfs(v)) return 1; }
        else if(rec[v]) return 1;          // back edge
    }
    rec[u]=0; return 0;
}

int main(){
    if(scanf("%d %d",&n,&m)!=2) return 0;
    for(int i=1;i<=n;i++) head[i]=-1;
    for(int i=0;i<m;i++){
        int u,v; scanf("%d %d",&u,&v); add(u,v);
    }
    int cycle=0;
    for(int i=1;i<=n;i++) if(!vis[i]) if(dfs(i)) {cycle=1; break;}
    printf(cycle?"YES":"NO");
    return 0;
}
