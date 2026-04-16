// Day 75 - Question 2
// Problem: Is Graph Bipartite?

#include <stdbool.h>

bool isBipartite(int** graph, int graphSize, int* graphColSize){
    int color[graphSize];
    for(int i=0;i<graphSize;i++) color[i]=-1;
    int q[graphSize]; int head, tail;
    for(int s=0;s<graphSize;s++) if(color[s]==-1){
        head=tail=0; q[tail++]=s; color[s]=0;
        while(head<tail){
            int u=q[head++];
            for(int j=0;j<graphColSize[u];j++){
                int v=graph[u][j];
                if(color[v]==-1){color[v]=color[u]^1; q[tail++]=v;}
                else if(color[v]==color[u]) return false;
            }
        }
    }
    return true;
}