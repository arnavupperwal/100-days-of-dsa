// Day 40 - Question 2
// Problem: Daily Temperatures

#include <stdlib.h>

int* dailyTemperatures(int* T, int n, int* returnSize){
    int* res = (int*)malloc(n*sizeof(int));
    *returnSize = n;
    for(int i=0;i<n;i++){
        int d=0;
        for(int j=i+1;j<n;j++){
            d++;
            if(T[j]>T[i]){res[i]=d;break;}
        }
        if(i==n-1||res[i]==0)res[i]=0;
    }
    return res;
}
