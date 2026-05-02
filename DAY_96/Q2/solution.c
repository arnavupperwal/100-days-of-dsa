// Day 96 - Question 2
// Problem: Reverse Pairs

#include <stdio.h>
int merge_count(int *a,int l,int m,int r){int n1=m-l+1,n2=r-m;int *L=malloc(n1*sizeof(int)),*R=malloc(n2*sizeof(int));for(int i=0;i<n1;i++)L[i]=a[l+i];for(int j=0;j<n2;j++)R[j]=a[m+1+j];int i=0,j=0,k=l,inv=0;while(i<n1&&j<n2){if((long long)L[i]<=2LL*R[j])a[k++]=L[i++];else{inv+=n1-i;a[k++]=R[j++];}}while(i<n1)a[k++]=L[i++];while(j<n2)a[k++]=R[j++];free(L);free(R);return inv;}int merge_sort(int *a,int l,int r){if(l>=r)return 0;int m=(l+r)/2;int inv=merge_sort(a,l,m)+merge_sort(a,m+1,r);inv+=merge_count(a,l,m,r);return inv;}int reversePairs(int* nums, int numsSize){return merge_sort(nums,0,numsSize-1);}