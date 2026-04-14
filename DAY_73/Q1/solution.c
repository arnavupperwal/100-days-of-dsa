// Day 73 - Question 1
// Problem: First Non-Repeating Character

#include <stdio.h>

int main(){
    char s[101];
    if(scanf("%100s",s)!=1) return 0;
    int cnt[26]={0};
    for(int i=0; s[i]; i++) cnt[s[i]-'a']++;
    for(int i=0; s[i]; i++){
        if(cnt[s[i]-'a']==1){
            putchar(s[i]);
            return 0;
        }
    }
    putchar('$');
    return 0;
}
