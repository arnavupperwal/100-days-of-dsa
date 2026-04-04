// Day 63 - Question 2
// Problem: Flood Fill

int** floodFill(int** image, int imageSize, int* imageColSize, int sr, int sc, int newColor){int orig=newColor;int n=imageSize,m=imageColSize[0];int c= image[sr][sc];if(c==newColor)return image;void dfs(int i,int j){if(i<0||i>=n||j<0||j>=m||image[i][j]!=c)return;image[i][j]=newColor;dfs(i+1,j);dfs(i-1,j);dfs(i,j+1);dfs(i,j-1);}dfs(sr,sc);return image;}
