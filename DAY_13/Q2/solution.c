// Day 13 - Question 2
// Problem: Spiral Matrix

int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int n=matrixSize, m=matrixColSize[0];
    int* res = (int*)malloc(n*m*sizeof(int));
    int top=0,bottom=n-1,left=0,right=m-1,idx=0;
    while(top<=bottom && left<=right){
        for(int j=left;j<=right;j++) res[idx++]=matrix[top][j];
        for(int i=top+1;i<=bottom;i++) res[idx++]=matrix[i][right];
        if(top<bottom){
            for(int j=right-1;j>=left;j--) res[idx++]=matrix[bottom][j];
        }
        if(left<right){
            for(int i=bottom-1;i>top;i--) res[idx++]=matrix[i][left];
        }
        top++;bottom--;left++;right--;
    }
    *returnSize = n*m;
    return res;
}