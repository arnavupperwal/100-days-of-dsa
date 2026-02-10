// Day 10 - Question 2
// Problem: Intersection of two arrays

int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    int max=min(nums1Size,nums2Size);
    int* res=malloc(max*sizeof(int));
    int* used=calloc(nums2Size,sizeof(int));
    int k=0;
    for(int i=0;i<nums1Size;i++){
        for(int j=0;j<nums2Size;j++){
            if(!used[j] && nums1[i]==nums2[j]){res[k++]=nums1[i];used[j]=1;break;}
        }
    }
    *returnSize=k;
    free(used);
    return res;
}
