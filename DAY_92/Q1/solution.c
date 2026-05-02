// Day 92 - Question 1
// Problem: Quick Sort Implementation

#include <stdio.h>

int partition(int a[], int l, int r){
    int p=a[r], i=l-1, t;
    for(int j=l;j<r;j++){
        if(a[j]<=p){
            i++; t=a[i]; a[i]=a[j]; a[j]=t;
        }
    }
    t=a[i+1]; a[i+1]=a[r]; a[r]=t;
    return i+1;
}

void quick(int a[], int l, int r){
    if(l<r){
        int p=partition(a,l,r);
        quick(a,l,p-1);
        quick(a,p+1,r);
    }
}

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int a[100];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    quick(a,0,n-1);
    for(int i=0;i<n;i++){
        if(i) printf(" ");
        printf("%d",a[i]);
    }
    printf("\n");
    return 0;
}
