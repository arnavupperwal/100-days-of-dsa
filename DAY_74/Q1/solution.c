// Day 74 - Question 1
// Problem: Winner of an Election

#include <stdio.h>
#include <string.h>

int main(){
    int n,i,j,k,idx,found;
    char names[100][20];
    int cnt[100]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",names[i]);
        // find if name already seen
        found=0;
        for(j=0;j<i;j++) if(strcmp(names[i],names[j])==0){found=1;idx=j;break;}
        if(found) cnt[idx]++; else cnt[i]++; // new name
    }
    // find winner
    int best=-1, win=-1;
    for(i=0;i<n;i++){
        if(cnt[i]==0) continue; // skip duplicates
        if(cnt[i]>best || (cnt[i]==best && strcmp(names[i],names[win])<0)){
            best=cnt[i]; win=i;
        }
    }
    printf("%s %d",names[win],best);
    return 0;
}
