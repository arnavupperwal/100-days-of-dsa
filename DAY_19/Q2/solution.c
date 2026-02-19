// Day 19 - Question 2
// Problem: Maximum Sum Circular Subarray

int maxSubarraySumCircular(int* nums, int n){int maxK=nums[0], cur=nums[0];int minK=nums[0], curMin=nums[0];int sum=nums[0];for(int i=1;i<n;i++){int x=nums[i];sum+=x;cur=max(x,cur+x);maxK=max(maxK,cur);curMin=min(x,curMin+x);minK=min(minK,curMin);}return maxK>0?max(maxK,sum-minK):maxK;}
