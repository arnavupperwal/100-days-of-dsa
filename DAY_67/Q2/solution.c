// Day 67 - Question 2
// Problem: Course Schedule II

#include <stdio.h>
#include <stdlib.h>

int* findOrder(int numCourses, int** prerequisites, int prerequisitesSize, int* prerequisitesColSize, int* returnSize){
    // adjacency list
    int **adj = (int**)malloc(numCourses*sizeof(int*));
    int *sz = (int*)calloc(numCourses,sizeof(int));
    int *cap = (int*)calloc(numCourses,sizeof(int));
    for(int i=0;i<numCourses;i++){adj[i]=NULL;cap[i]=2;adj[i]=malloc(cap[i]*sizeof(int));}
    for(int i=0;i<prerequisitesSize;i++){
        int a=prerequisites[i][0], b=prerequisites[i][1];
        if(sz[b]==cap[b]){cap[b]*=2;adj[b]=realloc(adj[b],cap[b]*sizeof(int));}
        adj[b][sz[b]++]=a;
    }
    int *color=calloc(numCourses,sizeof(int));
    int *order=malloc(numCourses*sizeof(int));
    int idx=numCourses-1;int ok=1;
    for(int i=0;i<numCourses;i++) if(!color[i]){
        int stack[5000],sp=0;stack[sp++]=i;
        while(sp){int v=stack[sp-1];
            if(color[v]==0){color[v]=1;for(int j=0;j<sz[v];j++) if(!color[adj[v][j]]){stack[sp++]=adj[v][j];}}
            else if(color[v]==1){color[v]=2;order[idx--]=v;sp--;}
            else sp--;
        }
    }
    if(idx!=-1){*returnSize=0;free(order);return NULL;}
    *returnSize=numCourses;return order;
}
