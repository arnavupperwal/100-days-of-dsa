// Day 7 - Question 2
// Problem: Fibonacci Number

int fib(int n){int a=0,b=1,i; if(n==0)return 0; for(i=2;i<=n;i++){int c=a+b;a=b;b=c;}return b;}
