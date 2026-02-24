// Day 24 - Question 1
// Problem: Delete First Occurrence of a Key

#include <stdio.h>
int main(){
    int n,i,key,arr[100];
    if(scanf("%d",&n)!=1) return 0;
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&key);
    int pos=-1;
    for(i=0;i<n;i++) if(arr[i]==key){pos=i;break;}
    if(pos!=-1){
        for(i=pos;i<n-1;i++) arr[i]=arr[i+1];
        n--; // list size decreases
    }
    for(i=0;i<n;i++){
        if(i) printf(" ");
        printf("%d",arr[i]);
    }
    return 0;
}
