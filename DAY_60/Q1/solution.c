// Day 60 - Question 1
// Problem: Validate Min-Heap

#include <stdio.h>
int main(){
    int n; if(scanf("%d",&n)!=1) return 0; int arr[101];
    for(int i=1;i<=n;i++) scanf("%d",&arr[i]);
    int ok=1;
    for(int i=1;i<=n/2;i++){
        if(arr[i]>arr[2*i]){ok=0;break;}
        if(2*i+1<=n && arr[i]>arr[2*i+1]){ok=0;break;}
    }
    printf(ok?"YES":"NO");
    return 0;
}
