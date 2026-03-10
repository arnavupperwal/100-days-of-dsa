// Day 38 - Question 2
// Problem: Sliding Window Maximum

int* maxSlidingWindow(int* nums, int numsSize, int k, int* returnSize){
    int n=numsSize;int* res=malloc(sizeof(int)*(n-k+1));*returnSize=n-k+1;
    for(int i=0;i<=n-k;i++){
        int mx=nums[i];
        for(int j=1;j<k;j++) if(nums[i+j]>mx) mx=nums[i+j];
        res[i]=mx;
    }
    return res;
}