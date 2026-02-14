// Day 14 - Question 2
// Problem: Rotate Image

void rotate(int** matrix, int matrixSize, int* matrixColSize){int n=matrixSize,i,j;for(i=0;i<n;i++)for(j=i+1;j<n;j++){int tmp=matrix[i][j];matrix[i][j]=matrix[j][i];matrix[j][i]=tmp;}for(i=0;i<n;i++){for(j=0;j<n/2;j++){int tmp=matrix[i][j];matrix[i][j]=matrix[i][n-1-j];matrix[i][n-1-j]=tmp;}}}