// Day 30 - Question 2
// Problem: Add Two Numbers II

#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    int sz1=0,sz2=0;struct ListNode* p;
    for(p=l1;p;p=p->next)sz1++;for(p=l2;p;p=p->next)sz2++;
    int*a1=malloc(sz1*sizeof(int)),*a2=malloc(sz2*sizeof(int));
    for(p=l1,i=0;p;p=p->next)a1[i++]=p->val;
    for(p=l2,i=0;p;p=p->next)a2[i++]=p->val;
    int i=sz1-1,j=sz2-1,carry=0;struct ListNode* head=NULL;
    while(i>=0||j>=0||carry){
        int sum=carry;
        if(i>=0)sum+=a1[i--];
        if(j>=0)sum+=a2[j--];
        struct ListNode* node=malloc(sizeof(struct ListNode));
        node->val=sum%10;node->next=head;head=node;
        carry=sum/10;
    }
    free(a1);free(a2);
    return head;
}
