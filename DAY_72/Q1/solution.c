// Day 72 - Question 1
// Problem: First Repeated Character

#include <stdio.h>

int main(){
    char s[101];
    if(scanf("%100s",s)!=1) return 0;
    int seen[26]={0};
    for(int i=0;s[i];i++){
        int idx=s[i]-'a';
        if(seen[idx]){printf("%c",s[i]);return 0;}
        seen[idx]=1;
    }
    printf("-1");
    return 0;
}
