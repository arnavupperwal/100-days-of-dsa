// Day 36 - Question 2
// Problem: Design Circular Deque

#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int *a; int cap; int f; int r; int sz;
} MyCircularDeque;

MyCircularDeque* MyCircularDequeCreate(int k){
    MyCircularDeque* dq = malloc(sizeof(MyCircularDeque));
    dq->cap = k; dq->a = malloc(k*sizeof(int));
    dq->f = dq->r = 0; dq->sz = 0; return dq;
}

bool MyCircularDequeInsertFront(MyCircularDeque* obj, int value){
    if(obj->sz==obj->cap) return false;
    obj->f = (obj->f-1+obj->cap)%obj->cap; obj->a[obj->f]=value; obj->sz++; return true;
}

bool MyCircularDequeInsertLast(MyCircularDeque* obj, int value){
    if(obj->sz==obj->cap) return false;
    obj->a[obj->r]=value; obj->r=(obj->r+1)%obj->cap; obj->sz++; return true;
}

bool MyCircularDequeDeleteFront(MyCircularDeque* obj){
    if(obj->sz==0) return false;
    obj->f=(obj->f+1)%obj->cap; obj->sz--; return true;
}

bool MyCircularDequeDeleteLast(MyCircularDeque* obj){
    if(obj->sz==0) return false;
    obj->r=(obj->r-1+obj->cap)%obj->cap; obj->sz--; return true;
}

int MyCircularDequeGetFront(MyCircularDeque* obj){
    if(obj->sz==0) return -1; return obj->a[obj->f];
}

int MyCircularDequeGetRear(MyCircularDeque* obj){
    if(obj->sz==0) return -1; int idx=(obj->r-1+obj->cap)%obj->cap; return obj->a[idx];
}

bool MyCircularDequeIsEmpty(MyCircularDeque* obj){ return obj->sz==0; }

bool MyCircularDequeIsFull(MyCircularDeque* obj){ return obj->sz==obj->cap; }

void MyCircularDequeFree(MyCircularDeque* obj){ free(obj->a); free(obj); }