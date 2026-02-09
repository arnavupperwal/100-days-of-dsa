// Day 9 - Question 2
// Problem: Reverse String

void reverseString(char *s, int n){int i=0,j=n-1;while(i<j){char t=s[i];s[i]=s[j];s[j]=t;i++;j--;}}