// Day 16 - Question 2
// Problem: Rotate Array

void rotateArray(int* nums, int numsSize, int k){int n=numsSize; if(n==0||k% n==0)return; k%=n; for(int t=0;t<k;t++){int last=nums[n-1]; for(int i=n-1;i>0;i--)nums[i]=nums[i-1]; nums[0]=last;}}