// Day 10 - Question 1
// Problem: Check Palindrome

#include <stdio.h>
#include <string.h>

int main(){
    char arr[101];
    if(scanf("%100s",arr)!=1) return 0;
    int n=strlen(arr),i;
    for(i=0;i<n/2;i++) if(arr[i]!=arr[n-1-i]){printf("NO\n");return 0;}
    printf("YES\n");
    return 0;
}
