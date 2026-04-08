// Day 67 - Question 1
// Problem: Topological Sort (DFS)

#include <stdio.h>

int n,m;
int to[2000],next[2000],head[101],ecnt=0;
int vis[101],stk[101],top=0;

void add(int u,int v){to[ecnt]=v;next[ecnt]=head[u];head[u]=ecnt++;}

void dfs(int u){vis[u]=1;for(int e=head[u];e!=-1;e=next[e])if(!vis[to[e]])dfs(to[e]);stk[top++]=u;}

int main(){int i,u,v;scanf("%d%d",&n,&m);for(i=1;i<=n;i++)head[i]=-1;for(i=0;i<m;i++){scanf("%d%d",&u,&v);add(u,v);}for(i=1;i<=n;i++)if(!vis[i])dfs(i);for(i=top-1;i>=0;i--){printf("%d",stk[i]);if(i)printf(" ");}printf("\n");return 0;}
