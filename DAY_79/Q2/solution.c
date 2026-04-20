// Day 79 - Question 2
// Problem: Strongly Connected Components

#include <stdio.h>

#define MAXV 1000

int V, E;
int head[MAXV], to[20000], nxt[20000], ecnt;
int rhead[MAXV], rto[20000], rnxt[20000], rcnt;
int st[MAXV], top, order[MAXV], ocnt;
int comp[MAXV], cc;

void add(int u,int v){ to[ecnt]=v; nxt[ecnt]=head[u]; head[u]=ecnt++; }
void radd(int u,int v){ rto[rcnt]=v; rnxt[rcnt]=rhead[u]; rhead[u]=rcnt++; }

void dfs1(int u){ st[top++]=u; int i; for(i=head[u];i!=-1;i=nxt[i]) if(!order[i>>1]) dfs1(to[i]); order[u]=1; order[~u]=1; }
void dfs2(int u){ comp[u]=cc; int i; for(i=rhead[u];i!=-1;i=rnxt[i]) if(comp[rto[i]]==-1) dfs2(rto[i]); }

void SCC(int v, int e, int edges[][2]){
    V=v; E=e; ecnt=rcnt=0; ocnt=0; top=0; cc=0;
    for(int i=0;i<V;i++) head[i]=rhead[i]=-1, comp[i]=-1;
    for(int i=0;i<E;i++){ int u=edges[i][0], w=edges[i][1]; add(u,w); radd(w,u); }
    for(int i=0;i<V;i++) if(!order[i]) dfs1(i);
    for(int i=V-1;i>=0;i--){ int u=order[i>>1]; if(comp[u]==-1){ dfs2(u); cc++; } }
    printf("%d\n",cc);
}
