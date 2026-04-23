// Day 82 - Question 1
// Problem: Upper Bound & Lower Bound Implementation

#include <stdio.h>

int main(){
    int n,x; if(scanf("%d",&n)!=1) return 0;
    int arr[100];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&x);
    int l=0,r=n,mid,low=n,up=n;
    // lower bound
    while(l<r){
        mid=(l+r)/2;
        if(arr[mid]>=x){ low=mid; r=mid; }
        else l=mid+1;
    }
    // upper bound
    l=0; r=n;
    while(l<r){
        mid=(l+r)/2;
        if(arr[mid]>x){ up=mid; r=mid; }
        else l=mid+1;
    }
    printf("%d %d",low,up);
    return 0;
}
