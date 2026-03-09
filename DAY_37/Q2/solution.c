// Day 37 - Question 2
// Problem: Kth Largest Element in a Stream

#include <stdlib.h>

typedef struct{int k;int* a;int n;int cap;}KthLargest;

KthLargest* kthLargestCreate(int k,int* nums,int numsSize){KthLargest* o=malloc(sizeof(KthLargest));o->k=k;o->n=numsSize;o->cap=numsSize?numsSize:1;o->a=malloc(o->cap*sizeof(int));for(int i=0;i<numsSize;i++)o->a[i]=nums[i];return o;}

int cmp(const void*a,const void*b){return *(int*)a-*(int*)b;}

int kthLargestAdd(KthLargest* obj,int val){if(obj->n==obj->cap){obj->cap*=2;obj->a=realloc(obj->a,obj->cap*sizeof(int));}obj->a[obj->n++]=val;qsort(obj->a,obj->n,sizeof(int),cmp);return obj->a[obj->n-obj->k];}

void kthLargestFree(KthLargest* obj){free(obj->a);free(obj);}