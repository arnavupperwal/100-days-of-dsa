// Day 84 - Question 1
// Problem: Implement Insertion Sort

#include <stdio.h>

int main(){
    int n,i,j,arr[100],x,pos;
    if(scanf("%d",&n)!=1) return 0;
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    for(i=1;i<n;i++){
        x=arr[i]; pos=i-1; // key and position
        while(pos>=0 && arr[pos]>x){
            arr[pos+1]=arr[pos];
            pos--;
        }
        arr[pos+1]=x;
    }
    for(i=0;i<n;i++){
        if(i) printf(" ");
        printf("%d",arr[i]);
    }
    return 0;
}
