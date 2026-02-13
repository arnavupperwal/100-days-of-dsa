// Day 13 - Question 1
// Problem: Boundary-to-Center Matrix Walk

#include <stdio.h>
int main(){
    int r,c; if(scanf("%d%d",&r,&c)!=2) return 0;
    int arr[100][100];
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&arr[i][j]);
    int top=0,bottom=r-1,left=0,right=c-1;
    while(top<=bottom && left<=right){
        for(int j=left;j<=right;j++) printf("%d ",arr[top][j]);
        for(int i=top+1;i<=bottom;i++) printf("%d ",arr[i][right]);
        if(top<bottom){
            for(int j=right-1;j>=left;j--) printf("%d ",arr[bottom][j]);
        }
        if(left<right){
            for(int i=bottom-1;i>top;i--) printf("%d ",arr[i][left]);
        }
        top++; bottom--; left++; right--; 
    }
    return 0;
}
