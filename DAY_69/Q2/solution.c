// Day 69 - Question 2
// Problem: Network Delay Time

int networkDelayTime(int** times, int timesSize, int* timesColSize, int n, int k){
    int INF=1e9, d[101], vis[101];
    for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)d[i]=INF; // will use adjacency matrix via d[u]
    int mat[101][101];
    for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)mat[i][j]=INF;
    for(int i=0;i<timesSize;i++){
        int u=times[i][0], v=times[i][1], w=times[i][2];
        mat[u][v]=w;
    }
    for(int i=1;i<=n;i++)vis[i]=0;
    int dist[101];
    for(int i=1;i<=n;i++)dist[i]=INF;
    dist[k]=0;
    for(int _=1;_<=n;_++){
        int u=-1, best=INF;
        for(int i=1;i<=n;i++)if(!vis[i]&&dist[i]<best){best=dist[i];u=i;}
        if(u==-1)break;vis[u]=1;
        for(int v=1;v<=n;v++)if(mat[u][v]<INF && dist[v]>dist[u]+mat[u][v])dist[v]=dist[u]+mat[u][v];
    }
    int ans=0;
    for(int i=1;i<=n;i++)if(dist[i]==INF)return -1;if(dist[i]>ans)ans=dist[i];
    return ans;
}