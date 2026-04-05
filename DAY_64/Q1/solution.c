// Day 64 - Question 1
// Problem: Breadth First Search (BFS)

#include <stdio.h>
int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int adj[100][100]; int deg[100];
    for(int i=0;i<n;i++){
        int d; scanf("%d",&d); deg[i]=d;
        for(int j=0;j<d;j++) scanf("%d",&adj[i][j]);
    }
    int s; scanf("%d",&s); s--; // 0‑based
    int vis[100]={0};
    int q[100]; int front=0, back=0;
    vis[s]=1; q[back++]=s;
    while(front<back){
        int u=q[front++];
        printf("%d ",u+1); // 1‑based output
        for(int i=0;i<deg[u];i++){
            int v=adj[u][i]-1;
            if(!vis[v]){vis[v]=1; q[back++]=v;}
        }
    }
    return 0;
}
