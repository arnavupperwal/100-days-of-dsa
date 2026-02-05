// Day 5 - Question 1
// Problem: Arrange Arrival Logs

#include <stdio.h>

int main(){
    int p,q,i,j,k;
    int a[100],b[100],c[200];
    if(scanf("%d",&p)!=1) return 0;
    for(i=0;i<p;i++) scanf("%d",&a[i]);
    scanf("%d",&q);
    for(i=0;i<q;i++) scanf("%d",&b[i]);
    i=j=k=0;
    while(i<p && j<q){
        if(a[i]<=b[j]) c[k++]=a[i++];
        else c[k++]=b[j++];
    }
    while(i<p) c[k++]=a[i++];
    while(j<q) c[k++]=b[j++];
    for(i=0;i<k;i++){
        if(i) putchar(' ');
        printf("%d",c[i]);
    }
    putchar('\n');
    return 0;
}
