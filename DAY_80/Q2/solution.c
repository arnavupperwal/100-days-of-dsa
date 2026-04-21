// Day 80 - Question 2
// Problem: Find the City With the Smallest Number of Neighbors

int findTheCity(int n, int** edges, int edgesSize, int* edgesColSize, int distanceThreshold){
    int INF=1e9;int dist[100][100];for(int i=0;i<n;i++)for(int j=0;j<n;j++)dist[i][j]=(i==j?0:INF);
    for(int k=0;k<edgesSize;k++){int u=edges[k][0],v=edges[k][1],w=edges[k][2];dist[u][v]=dist[v][u]=w;}
    for(int k=0;k<n;k++)for(int i=0;i<n;i++)for(int j=0;j<n;j++)if(dist[i][k]+dist[k][j]<dist[i][j])dist[i][j]=dist[i][k]+dist[k][j];
    int ans=n-1, best=INF;
    for(int i=0;i<n;i++){
        int cnt=0;for(int j=0;j<n;j++)if(i!=j&&dist[i][j]<=distanceThreshold)cnt++;
        if(cnt<best||(cnt==best&&i>ans)){best=cnt;ans=i;}
    }
    return ans;}
