// Day 96 - Question 1
// Problem: Counting Inversions in Array

#include <stdio.h>

int arr[100], temp[100];
long long inv=0;

int merge(int l,int m,int r){
    int i=l,j=m+1,k=l;
    while(i<=m && j<=r){
        if(arr[i]<=arr[j]) temp[k++]=arr[i++];
        else{ temp[k++]=arr[j++]; inv+=m-i+1; }
    }
    while(i<=m) temp[k++]=arr[i++];
    while(j<=r) temp[k++]=arr[j++];
    for(i=l;i<=r;i++) arr[i]=temp[i];
    return 0;
}

void mergeSort(int l,int r){
    if(l<r){
        int m=(l+r)/2;
        mergeSort(l,m);
        mergeSort(m+1,r);
        merge(l,m,r);
    }
}

int main(){
    int n,i;
    if(scanf("%d",&n)!=1) return 0;
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    mergeSort(0,n-1);
    printf("%lld",inv);
    return 0;
}
