// Day 4 - Question 2
// Problem: Remove Element

int removeElement(int* nums, int numsSize, int val){int i=0,j=0;while(j<numsSize){if(nums[j]!=val){nums[i++]=nums[j];}j++;}return i;}
