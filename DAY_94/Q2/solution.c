// Day 94 - Question 2
// Problem: Relative Sort Array

#include <stdlib.h>

void relativeSortArray(int* arr1, int arr1Size, int* arr2, int arr2Size, int* returnSize, int** returnArray){
    int freq[1001]={0};
    for(int i=0;i<arr1Size;i++) freq[arr1[i]]++;
    int* res=malloc(arr1Size*sizeof(int));
    int idx=0;
    for(int i=0;i<arr2Size;i++){
        int v=arr2[i];
        while(freq[v]--){res[idx++]=v;}
    }
    for(int v=0;v<=1000;v++){
        while(freq[v]--){res[idx++]=v;}
    }
    *returnSize=arr1Size; *returnArray=res;
}
