// Day 9 - Question 1
// Problem: Mirror the Code Name

#include <stdio.h>
int main(){
    char s[101];
    if(scanf("%100s",s)!=1) return 0;
    int n=0; while(s[n]) n++; // length
    for(int i=n-1;i>=0;--i) putchar(s[i]);
    putchar('\n');
    return 0;
}
