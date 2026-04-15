// Day 74 - Question 2
// Problem: Number of Connected Components in an Undirected Graph

int findCircleNum(int** isConnected, int isConnectedSize, int* isConnectedColSize){int n=isConnectedSize;int visited[200]={0};int dfs(int i){visited[i]=1;for(int j=0;j<n;j++)if(isConnected[i][j]&& !visited[j])dfs(j);}int cnt=0;for(int i=0;i<n;i++)if(!visited[i]){dfs(i);cnt++;}return cnt;}
