// Day 95 - Question 1
// Problem: Bucket Sort (Float Values 0–1)

#include <stdio.h>

int main(){
    int n,i,b,j,k,pos;
    float arr[100],bucket[100][100];
    int count[100]={0};
    if(scanf("%d",&n)!=1) return 0;
    for(i=0;i<n;i++) scanf("%f",&arr[i]);
    // distribute
    for(i=0;i<n;i++){
        b=(int)(arr[i]*n); if(b==n) b=n-1; // safety
        bucket[b][count[b]++]=arr[i];
    }
    // sort each bucket (insertion sort) and output
    for(b=0;b<n;b++){
        // insertion sort
        for(i=1;i<count[b];i++){
            float key=bucket[b][i];
            j=i-1;
            while(j>=0 && bucket[b][j]>key){
                bucket[b][j+1]=bucket[b][j];
                j--;
            }
            bucket[b][j+1]=key;
        }
        for(i=0;i<count[b];i++){
            printf("%.6f",bucket[b][i]);
            if(b!=n-1 || i!=count[b]-1) printf(" ");
        }
    }
    printf("\n");
    return 0;
}
