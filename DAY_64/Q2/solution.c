// Day 64 - Question 2
// Problem: Rotting Oranges

int orangesRotting(int** grid, int gridSize, int* gridColSize){int m=gridSize,n=gridColSize[0];int q[m*n][2],head=0,tail=0;int fresh=0,ans=0;for(int i=0;i<m;i++)for(int j=0;j<n;j++){if(grid[i][j]==2){q[tail][0]=i;q[tail][1]=j;tail++;}else if(grid[i][j]==1)fresh++;}
int dirs[4][2]={{-1,0},{1,0},{0,-1},{0,1}};while(head<tail && fresh){int sz=tail-head;ans++;for(int s=0;s<sz;s++){int x=q[head][0],y=q[head][1];head++;for(int d=0;d<4;d++){int nx=x+dirs[d][0],ny=y+dirs[d][1];if(nx>=0&&nx<m&&ny>=0&&ny<n&&grid[nx][ny]==1){grid[nx][ny]=2;q[tail][0]=nx;q[tail][1]=ny;tail++;fresh--;}}}
}
return fresh? -1: ans;}
