// Day 69 - Question 1
// Problem: Dijkstraâ€™s Algorithm (Shortest Path)

#include <stdio.h>
#define INF 1000000000
int main(){int n,m,s,t; if(scanf("%d%d%d%d",&n,&m,&s,&t)!=4)return 0; int w[101][101]; for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)w[i][j]=INF; for(int i=0;i<m;i++){int u,v,c; scanf("%d%d%d",&u,&v,&c); w[u][v]=c; w[v][u]=c;} int dist[101],used[101]; for(int i=1;i<=n;i++){dist[i]=INF; used[i]=0;} dist[s]=0; for(int i=1;i<=n;i++){int u=-1; for(int j=1;j<=n;j++)if(!used[j]&&(u==-1||dist[j]<dist[u]))u=j; if(u==-1||dist[u]==INF)break; used[u]=1; for(int v=1;v<=n;v++)if(!used[v]&&w[u][v]!=INF){int nd=dist[u]+w[u][v]; if(nd<dist[v])dist[v]=nd;}}
 if(dist[t]==INF)printf("-1\n"); else printf("%d\n",dist[t]); return 0;}
