// Day 42 - Question 2
// Problem: Find Median from Data Stream

#include <stdlib.h>
#include <string.h>

typedef struct{int *a;int n;int cap;}MedianFinder;
MedianFinder* MedianFinderCreate(){MedianFinder*m=malloc(sizeof(MedianFinder));m->n=0;m->cap=4;m->a=malloc(m->cap*sizeof(int));return m;}
void MedianFinderAddNum(MedianFinder*obj,int num){if(obj->n==obj->cap){obj->cap*=2;obj->a=realloc(obj->a,obj->cap*sizeof(int));}obj->a[obj->n++]=num;}
double MedianFinderFindMedian(MedianFinder*obj){int *b=malloc(obj->n*sizeof(int));memcpy(b,obj->a,obj->n*sizeof(int));qsort(b,obj->n,sizeof(int),[](const void*X,const void*Y){return (*(int*)X-*(int*)Y);});double m;if(obj->n%2) m=b[obj->n/2];else m=(b[obj->n/2-1]+b[obj->n/2])/2.0;free(b);return m;}
void MedianFinderFree(MedianFinder*obj){free(obj->a);free(obj);}