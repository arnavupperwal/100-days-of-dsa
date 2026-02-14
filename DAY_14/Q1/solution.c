// Day 14 - Question 1
// Problem: Check Identity Matrix

#include <stdio.h>

int main(){
    int n,i,j; // matrix size
    if(scanf("%d",&n)!=1) return 0;
    int a[100][100];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int ok=1; // assume identity
    for(i=0;i<n && ok;i++){
        for(j=0;j<n;j++){
            if(i==j){
                if(a[i][j]!=1){ ok=0; break; }
            }else{
                if(a[i][j]!=0){ ok=0; break; }
            }
        }
    }
    if(ok) printf("Identity Matrix\n");
    else printf("Not an Identity Matrix\n");
    return 0;
}
