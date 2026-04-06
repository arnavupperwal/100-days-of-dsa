// Day 65 - Question 1
// Problem: Cycle Detection in Undirected Graph (DFS)

#include <stdio.h>

int n,m;
int g[100][100];
int vis[100];

int dfs(int u,int p){
    vis[u]=1;
    for(int v=0;v<n;v++) if(g[u][v]){
        if(!vis[v]) if(dfs(v,u)) return 1;
        else if(v!=p) return 1; // back edge
    }
    return 0;
}

int main(){
    if(scanf("%d %d",&n,&m)!=2) return 0;
    for(int i=0;i<m;i++){
        int a,b; scanf("%d %d",&a,&b); a--;b--; g[a][b]=g[b][a]=1; }
    int cycle=0;
    for(int i=0;i<n;i++) if(!vis[i]) if(dfs(i,-1)) {cycle=1; break;}
    printf(cycle?"YES":"NO");
    return 0;
}
