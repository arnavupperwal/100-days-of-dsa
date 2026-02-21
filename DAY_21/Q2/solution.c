// Day 21 - Question 2
// Problem: Middle of the Linked List

ListNode* middleNode(ListNode* head){
    ListNode* slow=head,*fast=head;
    while(fast&&fast->next){slow=slow->next;fast=fast->next->next;}
    return slow;}
