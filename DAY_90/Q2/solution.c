// Day 90 - Question 2
// Problem: Split Array Largest Sum

int splitArray(int* nums, int numsSize, int k){
    long long lo=0,hi=0;for(int i=0;i<numsSize;i++){lo=max(lo,(long long)nums[i]);hi+=nums[i];}
    while(lo<hi){long long mid=(lo+hi)/2;int need=1;long long cur=0;for(int i=0;i<numsSize;i++){if(cur+nums[i]>mid){need++;cur=0;}cur+=nums[i];}
        if(need<=k)hi=mid;else lo=mid+1;}
    return (int)lo;}
