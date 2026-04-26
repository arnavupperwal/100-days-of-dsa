// Day 85 - Question 2
// Problem: Find Minimum in Rotated Sorted Array

int findMin(int* nums, int numsSize){int i, m=nums[0];for(i=1;i<numsSize;i++)if(nums[i]<m)m=nums[i];return m;}
