// Day 93 - Question 2
// Problem: Insertion Sort List

ListNode* insertionSortList(ListNode* head){
    ListNode dummy={0,NULL};
    for(ListNode* cur=head; cur;){
        ListNode* nxt=cur->next;
        ListNode* p=&dummy;
        while(p->next && p->next->val<cur->val) p=p->next;
        cur->next=p->next; p->next=cur;
        cur=nxt;
    }
    return dummy.next;
}