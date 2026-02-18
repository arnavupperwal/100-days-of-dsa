// Day 18 - Question 2
// Problem: Product of Array Except Self

int* productExceptSelf(int* nums, int numsSize, int* returnSize){
    int *out = (int*)malloc(numsSize*sizeof(int));
    int prod=1;
    for(int i=0;i<numsSize;i++){out[i]=prod; prod*=nums[i];}
    prod=1;
    for(int i=numsSize-1;i>=0;i--){out[i]*=prod; prod*=nums[i];}
    *returnSize=numsSize; return out;}
