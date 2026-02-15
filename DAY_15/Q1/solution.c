// Day 15 - Question 1
// Problem: Matrix Diagonal Sum

#include <stdio.h>

int main(){
    int m,n; // matrix size
    if(scanf("%d %d",&m,&n)!=2) return 0;
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int x; scanf("%d",&x); // read element
            if(i==j) sum+=x; // add primary diagonal
        }
    }
    printf("%d",sum);
    return 0;
}
