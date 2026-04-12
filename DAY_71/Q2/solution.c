// Day 71 - Question 2
// Problem: Min Cost to Connect All Points

#include <limits.h>
int minCostConnectPoints(int** points,int pointsSize,int* pointsColSize){
    int n=pointsSize,dist[n],vis[n];
    for(int i=0;i<n;i++){dist[i]=INT_MAX;vis[i]=0;}
    dist[0]=0;int ans=0;
    for(int i=0;i<n;i++){
        int u=-1,best=INT_MAX;
        for(int j=0;j<n;j++) if(!vis[j]&&dist[j]<best){best=dist[j];u=j;}
        vis[u]=1;ans+=best;
        for(int v=0;v<n;v++) if(!vis[v]){
            int d=abs(points[u][0]-points[v][0])+abs(points[u][1]-points[v][1]);
            if(d<dist[v])dist[v]=d;
        }
    }
    return ans;
}