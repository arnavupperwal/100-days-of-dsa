// Day 7 - Question 1
// Problem: Recursive Fibonacci

#include <stdio.h>

int fib(int n){
    if(n<2) return n;            // base cases
    return fib(n-1)+fib(n-2);    // recursive step
}

int main(){
    int n;
    if(scanf("%d",&n)!=1) return 0;
    printf("%d",fib(n));
    return 0;
}
