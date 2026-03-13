// Day 41 - Question 1
// Problem: Queue Using Linked List

#include <stdio.h>
int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int arr[100]; int front=0, rear=0; // circular queue
    for(int i=0;i<n;i++){
        int op; scanf("%d",&op);
        if(op==1){ // enqueue
            int x; scanf("%d",&x);
            if((rear+1)%100==front){ /* queue full, ignore */ }
            else{ arr[rear]=x; rear=(rear+1)%100; }
        }else if(op==2){ // dequeue
            if(front==rear){ printf("-1\n"); }
            else{ printf("%d\n",arr[front]); front=(front+1)%100; }
        }
    }
    return 0;
}
