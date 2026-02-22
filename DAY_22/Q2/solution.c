// Day 22 - Question 2
// Problem: Reverse Linked List

struct ListNode* reverseList(struct ListNode* head){struct ListNode* prev=NULL,*cur=head,*next;while(cur){next=cur->next;cur->next=prev;prev=cur;cur=next;}return prev;}
