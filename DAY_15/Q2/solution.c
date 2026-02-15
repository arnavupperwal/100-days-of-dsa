// Day 15 - Question 2
// Problem: Set Matrix Zeroes

void setZeroes(int** matrix, int matrixRowSize, int matrixColSize){int i,j;int *rowZero=calloc(matrixRowSize,sizeof(int));int *colZero=calloc(matrixColSize,sizeof(int));for(i=0;i<matrixRowSize;i++)for(j=0;j<matrixColSize;j++)if(matrix[i][j]==0){rowZero[i]=1;colZero[j]=1;}for(i=0;i<matrixRowSize;i++)for(j=0;j<matrixColSize;j++)if(rowZero[i]||colZero[j])matrix[i][j]=0;free(rowZero);free(colZero);}