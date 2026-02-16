// Day 16 - Question 1
// Problem: Frequency Counter in Array

#include <stdio.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int arr[100];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int vis[100]={0};
    for(int i=0;i<n;i++){
        if(vis[i]) continue; // already counted
        int cnt=0;
        for(int j=i;j<n;j++){
            if(arr[j]==arr[i]){cnt++; vis[j]=1;}
        }
        if(i>0) printf(" ");
        printf("%d:%d",arr[i],cnt);
    }
    return 0;
}
