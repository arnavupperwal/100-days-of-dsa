// Day 91 - Question 1
// Problem: Merge Sort Implementation

#include <stdio.h>

int a[100];

void merge(int l,int m,int r){
    int i=l,j=m+1,k=l, temp[100];
    while(i<=m && j<=r){
        if(a[i]<=a[j]) temp[k++]=a[i++];
        else temp[k++]=a[j++];
    }
    while(i<=m) temp[k++]=a[i++];
    while(j<=r) temp[k++]=a[j++];
    for(i=l;i<=r;i++) a[i]=temp[i];
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
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    mergeSort(0,n-1);
    for(i=0;i<n;i++){
        if(i) putchar(' ');
        printf("%d",a[i]);
    }
    putchar('\n');
    return 0;
}
