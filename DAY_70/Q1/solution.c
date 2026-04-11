// Day 70 - Question 1
// Problem: Bellman-Ford Algorithm

#include <stdio.h>
int main(){
    int n,m,u,v,w; if(scanf("%d%d",&n,&m)!=2) return 0;
    int e[200][3];
    for(int i=0;i<m;i++) scanf("%d%d%d",&e[i][0],&e[i][1],&e[i][2]);
    int dist[101];
    for(int i=1;i<=n;i++) dist[i]=1e9; dist[1]=0; // source = 1
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            int a=e[j][0],b=e[j][1],c=e[j][2];
            if(dist[a]!=1e9 && dist[a]+c<dist[b]) dist[b]=dist[a]+c;
        }
    }
    int neg=0;
    for(int j=0;j<m;j++){
        int a=e[j][0],b=e[j][1],c=e[j][2];
        if(dist[a]!=1e9 && dist[a]+c<dist[b]){neg=1;break;}
    }
    if(neg){printf("NEGATIVE CYCLE\n");}
    else{
        for(int i=1;i<=n;i++) printf("%d ",dist[i]);
        printf("\n");
    }
    return 0;
}
