// Day 78 - Question 1
// Problem: Minimum Spanning Tree using Prim’s Algorithm

#include <stdio.h>

int main(){
    int n,m; if(scanf("%d%d",&n,&m)!=2) return 0;
    int w[101][101]={0};
    for(int i=0;i<m;i++){
        int u,v,wt; scanf("%d%d%d",&u,&v,&wt);
        w[u][v]=w[v][u]=wt; // undirected
    }
    int vis[101]={0}, minw[101];
    for(int i=1;i<=n;i++) minw[i]=1e9; // large
    minw[1]=0; // start from node 1
    int total=0;
    for(int it=1; it<=n; it++){
        int u=-1, best=1e9;
        for(int i=1;i<=n;i++) if(!vis[i] && minw[i]<best){best=minw[i]; u=i;}
        vis[u]=1; total+=best;
        for(int v=1; v<=n; v++) if(!vis[v] && w[u][v] && w[u][v]<minw[v]) minw[v]=w[u][v];
    }
    printf("%d", total);
    return 0;
}
