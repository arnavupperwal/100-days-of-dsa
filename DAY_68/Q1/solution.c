// Day 68 - Question 1
// Problem: Topological Sort (Kahnâ€™s BFS Algorithm)

#include <stdio.h>
int main(){
    int n,m; if(scanf("%d%d",&n,&m)!=2) return 0;
    int adj[100][100]; int indeg[100]={0};
    for(int i=0;i<m;i++){
        int u,v; scanf("%d%d",&u,&v); adj[u][v]=1; indeg[v]++;
    }
    int q[100],head=0,tail=0;
    for(int i=1;i<=n;i++) if(indeg[i]==0) q[tail++]=i;
    int out[100],cnt=0;
    while(head<tail){
        int u=q[head++]; out[cnt++]=u;
        for(int v=1;v<=n;v++) if(adj[u][v]){ indeg[v]--; if(indeg[v]==0) q[tail++]=v; }
    }
    for(int i=0;i<cnt;i++) printf("%d%s",out[i],i+1==cnt?"\n":" ");
    return 0;
}
