// Day 76 - Question 2
// Problem: Clone Graph

struct Node* cloneGraph(struct Node* node){
    if(!node)return NULL;
    static struct Node* mp[1000];
    for(int i=0;i<1000;i++)mp[i]=NULL;
    struct Node* dfs(struct Node* n){
        if(!n)return NULL;
        if(mp[n->val])return mp[n->val];
        int c=n->numNeighbors;
        struct Node* cl=malloc(sizeof(struct Node));
        cl->val=n->val;cl->numNeighbors=c;cl->neighbors=c?malloc(c*sizeof(struct Node*)) : NULL;mp[n->val]=cl;
        for(int i=0;i<c;i++)cl->neighbors[i]=dfs(n->neighbors[i]);
        return cl;
    }
    return dfs(node);
}