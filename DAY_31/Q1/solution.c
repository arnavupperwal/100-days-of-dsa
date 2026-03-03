// Day 31 - Question 1
// Problem: Stack Implementation using Array

#include <stdio.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int arr[100]; int pos=0; // pos is index of next free slot
    for(int i=0;i<n;i++){
        int op; scanf("%d",&op);
        if(op==1){int x; scanf("%d",&x); arr[pos++]=x;} // push
        else if(op==2){ // pop
            if(pos==0) printf("Stack Underflow\n");
            else printf("%d\n", arr[--pos]);
        }
        else if(op==3){ // display
            if(pos==0){printf("\n");}
            else{
                for(int j=pos-1;j>=0;j--){
                    printf("%d", arr[j]);
                    if(j>0) printf(" ");
                }
                printf("\n");
            }
        }
    }
    return 0;
}
