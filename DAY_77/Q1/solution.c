// Day 77 - Question 1
// Problem: Check if Graph is Connected

#include <stdio.h>
int main(){
    int n,m; if(scanf("%d%d",&n,&m)!=2) return 0;
    int adj[101][101]={0},deg[101]={0};
    for(int i=0;i<m;i++){
        int u,v; scanf("%d%d",&u,&v);
        adj[u][v]=adj[v][u]=1; deg[u]++; deg[v]++;
    }
    int vis[101]={0},q[101],head=0,tail=0;
    vis[1]=1; q[tail++]=1; int cnt=1;
    while(head<tail){
        int cur=q[head++];
        for(int nxt=1;nxt<=n;nxt++) if(adj[cur][nxt] && !vis[nxt]){vis[nxt]=1; q[tail++]=nxt; cnt++;}
    }
    if(cnt==n) printf("CONNECTED\n"); else printf("NOT CONNECTED\n");
    return 0;
}
