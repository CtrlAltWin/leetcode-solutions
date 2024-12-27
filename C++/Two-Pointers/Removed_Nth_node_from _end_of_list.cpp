class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=0;
        ListNode* t=head;
        while(t) {
            size++;
            t=t->next;
        }
        t=head;
        int dis=size-n-1;
        if(dis==-1) return head->next;
        while(dis-- ) t=t->next;
        t->next=t->next->next;
        return head;
    }
};
