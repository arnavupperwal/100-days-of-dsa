// Day 63 - Question 1
// Problem: Depth First Search (DFS)

#include <stdio.h>

int n, s;
int adj[100][100];
int deg[100];
int vis[100];

void dfs(int u){
    vis[u]=1; printf("%d ",u);
    for(int i=0;i<deg[u];i++){
        int v=adj[u][i];
        if(!vis[v]) dfs(v);
    }
}

int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int k; scanf("%d",&k); deg[i]=k;
        for(int j=0;j<k;j++) scanf("%d",&adj[i][j]);
    }
    scanf("%d",&s);
    for(int i=1;i<=n;i++) vis[i]=0;
    dfs(s);
    return 0;
}
