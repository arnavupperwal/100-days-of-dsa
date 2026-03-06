// Day 34 - Question 2
// Problem: Basic Calculator II

int calculate(char* s){int n=strlen(s),i=0;long cur=0,last=0,res=0;char op='+';while(i<=n){char c=s[i];if(c==' '){}else if(isdigit(c)){cur=cur*10+(c-'0');}if((!isdigit(c)&&c!=' ')||i==n){switch(op){case '+':res+=last;last=cur;break;case '-':res+=last;last=-cur;break;case '*':last*=cur;break;case '/':last/=cur;break;}op=c;cur=0;}i++;}res+=last;return (int)res;}
