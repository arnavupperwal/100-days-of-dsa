// Day 71 - Question 1
// Problem: Hash Table Using Quadratic Probing

#include <stdio.h>
int main(){
    int m,n; if(scanf("%d%d",&m,&n)!=2) return 0;
    int arr[100]; for(int i=0;i<m;i++) arr[i]=-1; // -1 empty
    char cmd[10]; int k;
    for(int t=0;t<n;t++){
        scanf("%s%d",cmd,&k);
        if(cmd[0]=='I'){ // INSERT
            int h=k%m; for(int i=0;i<m;i++){
                int pos=(h+i*i)%m;
                if(arr[pos]==-1){ arr[pos]=k; break; }
            }
        }else{ // SEARCH
            int h=k%m; int found=0;
            for(int i=0;i<m;i++){
                int pos=(h+i*i)%m;
                if(arr[pos]==-1){ break; }
                if(arr[pos]==k){ found=1; break; }
            }
            printf(found?"FOUND\n":"NOT FOUND\n");
        }
    }
    return 0;
}
