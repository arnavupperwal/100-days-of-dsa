// Day 33 - Question 1
// Problem: Infix to Postfix Conversion

#include <stdio.h>

int main(){
    char s[101], out[101];
    scanf("%100s", s);
    char st[101]; int top=-1, pos=0;
    for(int i=0;s[i];i++){
        char c=s[i];
        if((c>='A'&&c<='Z')||(c>='a'&&c<='z')||c>='0'&&c<='9') out[pos++]=c; // operand
        else if(c=='(') st[++top]=c;
        else if(c==')'){
            while(top>=0&&st[top]!='(') out[pos++]=st[top--];
            if(top>=0) top--; // pop '('
        }
        else{ // operator
            int prec = (c=='+'||c=='-')?1:2; // only +,-,*,/
            while(top>=0 && st[top]!='(' && ((st[top]=='+'||st[top]=='-')?1:2)>=prec) out[pos++]=st[top--];
            st[++top]=c;
        }
    }
    while(top>=0) out[pos++]=st[top--];
    out[pos]='\0';
    printf("%s", out);
    return 0;
}
