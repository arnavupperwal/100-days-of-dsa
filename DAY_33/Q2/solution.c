// Day 33 - Question 2
// Problem: Evaluate Reverse Polish Notation

int evalRPN(char** tokens, int tokensSize){int stack[tokensSize];int top=-1;for(int i=0;i<tokensSize;i++){char *t=tokens[i];if(t[0]=='+'&&t[1]=='\0'){int b=stack[top--],a=stack[top];stack[++top]=a+b;}else if(t[0]=='-'&&t[1]=='\0'){int b=stack[top--],a=stack[top];stack[++top]=a-b;}else if(t[0]=='*'&&t[1]=='\0'){int b=stack[top--],a=stack[top];stack[++top]=a*b;}else if(t[0]=='/'&&t[1]=='\0'){int b=stack[top--],a=stack[top];stack[++top]=a/b;}else{stack[++top]=atoi(t);} }return stack[top];}