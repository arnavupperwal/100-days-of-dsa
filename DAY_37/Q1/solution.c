// Day 37 - Question 1
// Problem: Priority Queue Using Array

#include <stdio.h>

int main(){
    int n; scanf("%d", &n);
    int arr[100]; int sz=0;
    for(int i=0;i<n;i++){
        char op[10]; scanf("%s", op);
        if(op[0]=='i'){ // insert
            int x; scanf("%d", &x);
            int j=sz-1;
            while(j>=0 && arr[j]>x){arr[j+1]=arr[j]; j--;}
            arr[j+1]=x; sz++;
        }else if(op[0]=='d'){ // delete
            if(sz==0) printf("-1\n");
            else{printf("%d\n", arr[0]); for(int k=1;k<sz;k++) arr[k-1]=arr[k]; sz--;}
        }else{ // peek
            if(sz==0) printf("-1\n");
            else printf("%d\n", arr[0]);
        }
    }
    return 0;
}
