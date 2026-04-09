// Day 68 - Question 2
// Problem: Alien Dictionary

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* findOrder(char* arr[], int N, int K){
    int g[26][26] = {0};
    int indeg[26] = {0};
    for(int i=0;i<N-1;i++){
        char *a=arr[i], *b=arr[i+1];
        for(int j=0;a[j]&&b[j]&&a[j]==b[j];j++){
            if(a[j+1]==0||b[j+1]==0) break;
        }
        if(a[0]==0||b[0]==0) continue; // safety
        int u=a[0]-'a', v=b[0]-'a';
        if(!g[u][v]){ g[u][v]=1; indeg[v]++; }
    }
    int q[26], front=0, back=0;
    for(int i=0;i<K;i++) if(indeg[i]==0) q[back++]=i;
    char *res = (char*)malloc((K+1)*sizeof(char));
    int idx=0;
    while(front<back){
        int u=q[front++];
        res[idx++]=u+'a';
        for(int v=0;v<K;v++) if(g[u][v]){
            if(--indeg[v]==0) q[back++]=v;
        }
    }
    res[idx]='\0';
    return idx==K?res:"";
}
