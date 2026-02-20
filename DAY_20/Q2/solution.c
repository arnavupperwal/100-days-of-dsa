// Day 20 - Question 2
// Problem: 3Sum

#include <stdlib.h>

int cmp(const void *a, const void *b){return *(int*)a-*(int*)b;}

int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes){
    if(numsSize<3){*returnSize=0;*returnColumnSizes=NULL;return NULL;}
    qsort(nums,numsSize,sizeof(int),cmp);
    int maxTriples=numsSize*numsSize; // safe upper bound
    int **res=malloc(maxTriples*sizeof(int*));
    int *col=malloc(maxTriples*sizeof(int));
    int cnt=0;
    for(int i=0;i<numsSize-2;i++){
        if(i>0 && nums[i]==nums[i-1])continue;
        int l=i+1,r=numsSize-1;
        while(l<r){
            int sum=nums[i]+nums[l]+nums[r];
            if(sum==0){
                int *trip=malloc(3*sizeof(int));
                trip[0]=nums[i];trip[1]=nums[l];trip[2]=nums[r];
                res[cnt]=trip;col[cnt]=3;cnt++;
                while(l<r && nums[l]==nums[l+1])l++;
                while(l<r && nums[r]==nums[r-1])r--;
                l++;r--;
            }else if(sum<0)l++;else r--;        
        }
    }
    *returnSize=cnt;
    *returnColumnSizes=col;
    return res;
}
