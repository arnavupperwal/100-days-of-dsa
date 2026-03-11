// Day 39 - Question 2
// Problem: Top K Frequent Elements

#include <stdlib.h>
#include <string.h>

struct pair{int v;int f;};
int cmpfreq(const void*a,const void*b){return ((struct pair*)b)->f-((struct pair*)a)->f;}
int* topKFrequent(int* nums,int numsSize,int k,int* returnSize){
    int *tmp=malloc(numsSize*sizeof(int));
    memcpy(tmp,nums,numsSize*sizeof(int));
    qsort(tmp,numsSize,sizeof(int),[](const void*a,const void*b){return *(int*)a-*(int*)b;});
    struct pair *arr=malloc(numsSize*sizeof(struct pair));
    int m=0,i=0;
    while(i<numsSize){int v=tmp[i],cnt=0;while(i<numsSize&&tmp[i]==v){cnt++;i++;}
        arr[m++]={v,cnt};}
    qsort(arr,m,sizeof(struct pair),cmpfreq);
    int *res=malloc(k*sizeof(int));
    for(i=0;i<k;i++)res[i]=arr[i].v;
    *returnSize=k;
    free(tmp);free(arr);
    return res;
}