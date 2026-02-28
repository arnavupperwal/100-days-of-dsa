// Day 28 - Question 2
// Problem: Palindrome Linked List

bool isPalindrome(ListNode* h){int n=0;for(ListNode* p=h;p;p=p->next)n++;int a[n];for(int i=0,p=h;i<n;i++)a[i]=p->x,p=p->next;for(int i=0;i<n/2;i++)if(a[i]!=a[n-1-i])return false;return true;}
