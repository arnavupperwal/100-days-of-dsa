// Day 88 - Question 1
// Problem: Aggressive Cows Problem

#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b){return *(int*)a-*(int*)b;}
int main(){int n,k; if(scanf("%d %d",&n,&k)!=2)return 0; int arr[1000]; for(int i=0;i<n;i++)scanf("%d",&arr[i]); qsort(arr,n,sizeof(int),cmp);
 int low=1, high=arr[n-1]-arr[0], ans=0;
 while(low<=high){int mid=(low+high)/2; int cnt=1, last=arr[0]; for(int i=1;i<n;i++){if(arr[i]-last>=mid){cnt++; last=arr[i];}} if(cnt>=k){ans=mid; low=mid+1;} else high=mid-1;}
 printf("%d",ans); return 0;}
