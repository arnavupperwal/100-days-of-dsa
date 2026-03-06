// Day 34 - Question 1
// Problem: Evaluate Postfix Expression

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char line[256];
    if(!fgets(line, sizeof(line), stdin)) return 0;
    int st[100], top=-1;
    char *tok=strtok(line, " ");
    while(tok){
        if(tok[0]>='0' && tok[0]<='9' || (tok[0]=='-' && isdigit(tok[1]))){
            st[++top]=atoi(tok); // push number
        }else{
            int b=st[top--];
            int a=st[top--];
            switch(tok[0]){
                case '+': st[++top]=a+b; break;
                case '-': st[++top]=a-b; break;
                case '*': st[++top]=a*b; break;
                case '/': st[++top]=a/b; break;
            }
        }
        tok=strtok(NULL, " ");
    }
    printf("%d", st[top]);
    return 0;
}
