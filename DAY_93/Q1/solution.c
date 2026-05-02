// Day 93 - Question 1
// Problem: Insertion Sort Implementation

#include <stdio.h>

int main(){
    int n,i,j,x,pos;
    int arr[100];
    if(scanf("%d",&n)!=1) return 0;
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    for(i=1;i<n;i++){
        x=arr[i]; pos=i;
        while(pos>0 && arr[pos-1]>x){
            arr[pos]=arr[pos-1];
            pos--;
        }
        arr[pos]=x;
    }
    for(i=0;i<n;i++){
        if(i) putchar(' ');
        printf("%d",arr[i]);
    }
    putchar('\n');
    return 0;
}
