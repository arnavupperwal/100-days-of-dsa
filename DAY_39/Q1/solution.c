// Day 39 - Question 1
// Problem: Min Heap Implementation

#include <stdio.h>

int arr[100];
int n=0; // current size

void siftUp(){
    int i=n, p=i/2;
    while(i>1 && arr[p]>arr[i]){
        int t=arr[p]; arr[p]=arr[i]; arr[i]=t;
        i=p; p=i/2;
    }
}

void siftDown(){
    int i=1;
    while(1){
        int l=i*2, r=l+1, smallest=i;
        if(l<=n && arr[l]<arr[smallest]) smallest=l;
        if(r<=n && arr[r]<arr[smallest]) smallest=r;
        if(smallest==i) break;
        int t=arr[i]; arr[i]=arr[smallest]; arr[smallest]=t;
        i=smallest;
    }
}

int main(){
    int m; scanf("%d", &m);
    char op[10];
    for(int k=0;k<m;k++){
        scanf("%s", op);
        if(op[0]=='i'){ // insert
            int x; scanf("%d", &x);
            arr[++n]=x; siftUp();
        }else if(op[0]=='e'){ // extractMin
            if(n==0) printf("-1\n");
            else{
                printf("%d\n", arr[1]);
                arr[1]=arr[n--];
                if(n>0) siftDown();
            }
        }else{ // peek
            if(n==0) printf("-1\n");
            else printf("%d\n", arr[1]);
        }
    }
    return 0;
}
