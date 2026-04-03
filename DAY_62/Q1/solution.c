// Day 62 - Question 1
// Problem: Graph Representation Using Adjacency List

#include <stdio.h>

int main(){
    int n,m; // vertices, edges
    if(scanf("%d %d",&n,&m)!=2) return 0;
    int adj[100][100]; // adjacency lists (max 100 vertices)
    int cnt[100]={0}; // number of neighbors for each vertex
    for(int i=0;i<m;i++){
        int u,v; scanf("%d %d",&u,&v);
        adj[u][cnt[u]++]=v; // add v to u's list
        adj[v][cnt[v]++]=u; // add u to v's list (undirected)
    }
    for(int i=0;i<n;i++){
        printf("%d: ",i);
        for(int j=0;j<cnt[i];j++){
            printf("%d",adj[i][j]);
            if(j+1<cnt[i]) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
