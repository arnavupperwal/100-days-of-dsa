// Day 72 - Question 2
// Problem: Travelling Salesman Problem

int tsp(int n, int graph[n][n]){
    int best=INT_MAX, vis=0, cur=0, start=0;
    void dfs(int u,int mask,int cost){
        if(mask==((1<<n)-1)){
            int total=cost+graph[u][start];
            if(total<best) best=total;return;
        }
        for(int v=0;v<n;v++) if(!(mask>>v&1)){
            dfs(v,mask|1<<v,cost+graph[u][v]);
        }
    }
    dfs(start,1<<start,0);
    return best;
}