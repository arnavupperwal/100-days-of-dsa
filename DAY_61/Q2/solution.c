// Day 61 - Question 2
// Problem: Number of Provinces

int findCircleNum(int** isConnected, int isConnectedSize, int* isConnectedColSize){int n=isConnectedSize;int visited[n];for(int i=0;i<n;i++)visited[i]=0;int dfs(int v){visited[v]=1;for(int u=0;u<n;u++)if(isConnected[v][u]&& !visited[u])dfs(u);return 1;}int cnt=0;for(int i=0;i<n;i++)if(!visited[i]){dfs(i);cnt++;}return cnt;}
