// Day 62 - Question 2
// Problem: Keys and Rooms

#include <stdbool.h>

bool canVisitAllRooms(int** rooms, int roomsSize, int* roomsColSize){
    bool *vis = (bool*)calloc(roomsSize, sizeof(bool));
    int *st = (int*)malloc(roomsSize*sizeof(int));
    int top=0, sz=0;
    st[top++] = 0; vis[0]=1; sz=1;
    while(top){
        int cur = st[--top];
        for(int i=0;i<roomsColSize[cur];i++){
            int k = rooms[cur][i];
            if(!vis[k]){vis[k]=1; st[top++]=k; sz++;}
        }
    }
    bool ok = (sz==roomsSize);
    free(vis); free(st);
    return ok;
}
