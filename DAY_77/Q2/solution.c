// Day 77 - Question 2
// Problem: Critical Connections in a Network

#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> criticalConnections(int n, vector<vector<int>>& con){
    vector<vector<int>> res;
    for(int k=0;k<(int)con.size();k++){
        // build graph without edge k
        vector<vector<int>> g(n);
        for(int i=0;i<(int)con.size();i++) if(i!=k){
            int a=con[i][0],b=con[i][1];
            g[a].push_back(b);g[b].push_back(a);
        }
        // bfs from 0
        vector<int> vis(n,0);queue<int>q;q.push(0);vis[0]=1;
        while(!q.empty()){int u=q.front();q.pop();for(int v:g[u])if(!vis[v]){vis[v]=1;q.push(v);}}
        bool ok=true;for(int i=0;i<n;i++) if(!vis[i]){ok=false;break;}
        if(!ok) res.push_back(con[k]);
    }
    return res;
}
