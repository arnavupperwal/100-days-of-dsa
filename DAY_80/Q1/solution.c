// Day 80 - Question 1
// Problem: Floyd-Warshall Algorithm

#include <stdio.h>
int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int d[105][105];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x; scanf("%d",&x);
            if(x==-1) d[i][j]=1000000000; else d[i][j]=x;
        }
    }
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            if(d[i][k]==1000000000) continue;
            for(int j=0;j<n;j++){
                if(d[k][j]==1000000000) continue;
                if(d[i][j]>d[i][k]+d[k][j]) d[i][j]=d[i][k]+d[k][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(d[i][j]>=1000000000) printf("-1"); else printf("%d",d[i][j]);
            if(j+1==n) printf("\n"); else printf(" ");
        }
    }
    return 0;
}
