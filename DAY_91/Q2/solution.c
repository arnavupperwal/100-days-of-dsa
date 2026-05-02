// Day 91 - Question 2
// Problem: Sort Colors

void sortColors(int* nums, int numsSize){int c0=0,c1=0,c2=0,i;for(i=0;i<numsSize;i++){if(nums[i]==0)c0++;else if(nums[i]==1)c1++;else c2++;}for(i=0;i<c0;i++)nums[i]=0;for(;i<c0+c1;i++)nums[i]=1;for(;i<numsSize;i++)nums[i]=2;}
