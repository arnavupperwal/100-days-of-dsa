// Day 4 - Question 1
// Problem: Reverse an Array In-Place

#include <stdio.h>

int main(){
    int n,i,pos,x;int arr[100];
    if(scanf("%d",&n)!=1)return 0;
    for(i=0;i<n;i++)scanf("%d",&arr[i]);
    for(i=0,pos=n-1;i<pos;i++,pos--){
        x=arr[i];arr[i]=arr[pos];arr[pos]=x; // swap ends
    }
    for(i=0;i<n;i++){
        if(i)printf(" ");
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}
