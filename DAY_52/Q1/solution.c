// Day 52 - Question 1
// Problem: LCA in Binary Tree

#include <stdio.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int arr[1000];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int x,y; scanf("%d %d",&x,&y);
    int ix=-1,iy=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==x) ix=i;
        if(arr[i]==y) iy=i;
    }
    int visited[1000]={0};
    for(int i=ix;i>=0;i=(i-1)/2){
        visited[i]=1;
        if(i==0) break;
    }
    int ans=-1;
    for(int i=iy;i>=0;i=(i-1)/2){
        if(visited[i]){ ans=i; break; }
        if(i==0) break;
    }
    printf("%d", arr[ans]);
    return 0;
}
