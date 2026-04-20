// Day 79 - Question 1
// Problem: Single Source Shortest Path using Dijkstra’s Algorithm

#include <stdio.h>

#define MAXN 105
#define INF 1000000000

int head[MAXN], to[200], w[200], nxt[200], ecnt;
int dist[MAXN], vis[MAXN];

void add_edge(int u,int v,int wt){
    to[ecnt]=v; w[ecnt]=wt; nxt[ecnt]=head[u]; head[u]=ecnt++;
}

int main(){
    int n,m,u,v,wt,src,i,j;
    if(scanf("%d %d",&n,&m)!=2) return 0;
    for(i=0;i<MAXN;i++) head[i]=-1;
    ecnt=0;
    for(i=0;i<m;i++){
        scanf("%d %d %d",&u,&v,&wt);
        add_edge(u,v,wt); add_edge(v,u,wt); // undirected
    }
    scanf("%d",&src);
    for(i=1;i<=n;i++){dist[i]=INF; vis[i]=0;}
    dist[src]=0;
    for(i=1;i<=n;i++){
        int u=-1, best=INF;
        for(j=1;j<=n;j++) if(!vis[j] && dist[j]<best){best=dist[j]; u=j;}
        if(u==-1) break;
        vis[u]=1;
        for(j=head[u]; j!=-1; j=nxt[j]){
            int v=to[j];
            if(dist[v]>dist[u]+w[j]) dist[v]=dist[u]+w[j];
        }
    }
    for(i=1;i<=n;i++){
        if(i>1) printf(" ");
        printf("%d",dist[i]);
    }
    printf("\n");
    return 0;
}
