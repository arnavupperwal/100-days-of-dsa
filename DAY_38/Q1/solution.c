// Day 38 - Question 1
// Problem: Deque Operations

#include <stdio.h>
#include <string.h>

int main(){
    int N=200; int arr[N];
    int head=0, tail=0; // circular deque
    int t; if(scanf("%d",&t)!=1) return 0;
    char cmd[20]; int x;
    for(int i=0;i<t;i++){
        scanf("%s",cmd);
        if(strcmp(cmd,"push_front")==0){
            scanf("%d",&x);
            head=(head-1+N)%N; arr[head]=x;
        }else if(strcmp(cmd,"push_back")==0){
            scanf("%d",&x);
            arr[tail]=x; tail=(tail+1)%N;
        }else if(strcmp(cmd,"pop_front")==0){
            if(head!=tail) head=(head+1)%N;
        }else if(strcmp(cmd,"pop_back")==0){
            if(head!=tail) tail=(tail-1+N)%N;
        }else if(strcmp(cmd,"front")==0){
            if(head==tail) printf("-1\n");
            else printf("%d\n",arr[head]);
        }else if(strcmp(cmd,"back")==0){
            if(head==tail) printf("-1\n");
            else printf("%d\n",arr[(tail-1+N)%N]);
        }else if(strcmp(cmd,"size")==0){
            int sz=(tail-head+N)%N; printf("%d\n",sz);
        }else if(strcmp(cmd,"empty")==0){
            printf("%d\n",(head==tail)?1:0);
        }
    }
    return 0;
}
