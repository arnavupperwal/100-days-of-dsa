// Day 73 - Question 2
// Problem: Redundant Connection

int* findRedundantConnection(int** edges, int edgesSize, int* edgesColSize){
    int n=edgesSize+1;int *p=malloc(n*sizeof(int));int *r=malloc(n*sizeof(int));for(int i=1;i<n;i++){p[i]=i;r[i]=0;}
    function<int(int)> find=[&](int x){return p[x]==x?x:p[x]=find(p[x]);};
    for(int i=0;i<edgesSize;i++){
        int u=edges[i][0],v=edges[i][1];int fu=find(u),fv=find(v);
        if(fu==fv){int *ans=malloc(2*sizeof(int));ans[0]=u;ans[1]=v;return ans;}
        if(r[fu]<r[fv])p[fu]=fv;else if(r[fu]>r[fv])p[fv]=fu;else{p[fv]=fu;r[fu]++;}
    }
    return NULL;}
