// Day 66 - Question 2
// Problem: Course Schedule

#include <stdbool.h>

bool canFinish(int numCourses, int** prerequisites, int prerequisitesSize, int* prerequisitesColSize){
    // adjacency list via static arrays (max 5000 edges)
    int maxE = 5000;
    int to[maxE], nxt[maxE], head[numCourses];
    for(int i=0;i<numCourses;i++) head[i]=-1;
    int e=0;
    for(int i=0;i<prerequisitesSize;i++){
        int a=prerequisites[i][0], b=prerequisites[i][1];
        to[e]=a; nxt[e]=head[b]; head[b]=e++; // edge b->a
    }
    int state[numCourses]; //0=unvis,1=visiting,2=visited
    for(int i=0;i<numCourses;i++) state[i]=0;
    bool ok=true;
    for(int i=0;i<numCourses && ok;i++) if(state[i]==0){
        // iterative DFS stack
        int stack[500], sp=0;
        stack[sp++]=i;
        while(sp && ok){
            int v=stack[sp-1];
            if(state[v]==0){
                state[v]=1;
                for(int e=head[v]; e!=-1; e=nxt[e]){
                    int u=to[e];
                    if(state[u]==0) stack[sp++]=u;
                    else if(state[u]==1){ ok=false; break; }
                }
            }else if(state[v]==1){
                state[v]=2; sp--; // finished
            }else sp--; // already visited
        }
    }
    return ok;
}
