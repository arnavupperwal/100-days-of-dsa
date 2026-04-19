// Day 78 - Question 2
// Problem: Articulation Points (GFG)

#include <bits/stdc++.h>
using namespace std;

vector<int> articulationPoints(int V, vector<vector<int>> adj){
    vector<int> disc(V,-1), low(V), parent(V,-1), ap(V,0);
    int time=0;
    function<void(int)> dfs=[&](int u){
        disc[u]=low[u]=++time;
        int children=0;
        for(int v:adj[u]){
            if(disc[v]==-1){
                parent[v]=u; children++;
                dfs(v);
                low[u]=min(low[u],low[v]);
                if(parent[u]==-1 && children>1) ap[u]=1;
                if(parent[u]!=-1 && low[v]>=disc[u]) ap[u]=1;
            }else if(v!=parent[u]) low[u]=min(low[u],disc[v]);
        }
    };
    for(int i=0;i<V;i++) if(disc[i]==-1) dfs(i);
    vector<int> res;
    for(int i=0;i<V;i++) if(ap[i]) res.push_back(i);
    return res;
}
