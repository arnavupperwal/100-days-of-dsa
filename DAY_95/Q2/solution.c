// Day 95 - Question 2
// Problem: Maximum Gap

int maxGap(int* nums, int numsSize){if(numsSize<2)return 0;int i,minv=nums[0],maxv=nums[0];for(i=1;i<numsSize;i++){if(nums[i]<minv)minv=nums[i];if(nums[i]>maxv)maxv=nums[i];}if(minv==maxv)return 0;int bucketSize=(maxv-minv)/(numsSize-1)+1;int bucketCnt=numsSize-1;int *bmin=malloc(bucketCnt*sizeof(int));int *bmax=malloc(bucketCnt*sizeof(int));for(i=0;i<bucketCnt;i++){bmin[i]=INT_MAX;bmax[i]=INT_MIN;}for(i=0;i<numsSize;i++){int idx=(nums[i]-minv)/bucketSize; if(idx>=bucketCnt)idx=bucketCnt-1; if(nums[i]<bmin[idx])bmin[idx]=nums[i]; if(nums[i]>bmax[idx])bmax[idx]=nums[i];}int maxGap=0,prev=minv;for(i=0;i<bucketCnt;i++){if(bmin[i]==INT_MAX)continue;int gap=bmin[i]-prev;if(gap>maxGap)maxGap=gap;prev=bmax[i];}free(bmin);free(bmax);return maxGap;}
