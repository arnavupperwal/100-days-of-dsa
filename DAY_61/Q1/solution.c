// Day 61 - Question 1
// Problem: Graph Representation Using Adjacency Matrix

#include <stdio.h>
int main(){
    int n,m,u,v; // n vertices, m edges
    if(scanf("%d%d",&n,&m)!=2) return 0;
    int mat[100][100]={0}; // adjacency matrix
    for(int i=0;i<m;i++){
        scanf("%d%d",&u,&v);
        mat[u][v]=1; // directed edge
        mat[v][u]=1; // if undirected, comment out this line
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
