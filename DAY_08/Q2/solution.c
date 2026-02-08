// Day 8 - Question 2
// Problem: Power of Two

bool isPowerOfTwo(int n){if(n<=0)return false;while(n%2==0)n/=2;return n==1;}
