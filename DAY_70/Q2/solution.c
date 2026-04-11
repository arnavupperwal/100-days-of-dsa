// Day 70 - Question 2
// Problem: Cheapest Flights Within K Stops

int findCheapestPrice(int n, int** flights, int flightsSize, int* flightsColSize, int src, int dst, int k){int INF=1e9;int dist[n];for(int i=0;i<n;i++)dist[i]=INF;dist[src]=0;int nd[n];for(int r=0;r<=k;r++){for(int i=0;i<n;i++)nd[i]=dist[i];for(int i=0;i<flightsSize;i++){int u=flights[i][0],v=flights[i][1],w=flights[i][2];if(dist[u]!=INF&&dist[u]+w<nd[v])nd[v]=dist[u]+w;}for(int i=0;i<n;i++)dist[i]=nd[i];}return dist[dst]==INF?-1:dist[dst];}