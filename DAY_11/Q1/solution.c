// Day 11 - Question 1
// Problem: Matrix Addition

#include <stdio.h>

int main(){
    int m,n; if(scanf("%d %d",&m,&n)!=2) return 0;
    int a[100][100],b[100][100],c[100][100];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++) scanf("%d",&b[i][j]);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d%s",c[i][j], j==n-1?"\n":" ");
        }
    }
    return 0;
}
