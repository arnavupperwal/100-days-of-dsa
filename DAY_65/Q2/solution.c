// Day 65 - Question 2
// Problem: Graph Cycle Detection

bool isCycle(int V, vector<vector<int>>& adj){
    vector<int> vis(V,0);
    function<bool(int,int)> dfs=[&](int u,int p){
        vis[u]=1;
        for(int v:adj[u]){
            if(!vis[v]) if(dfs(v,u)) return true;
            else if(v!=p) return true;
        }
        return false;
    };
    for(int i=0;i<V;i++) if(!vis[i]) if(dfs(i,-1)) return true;
    return false;
}
