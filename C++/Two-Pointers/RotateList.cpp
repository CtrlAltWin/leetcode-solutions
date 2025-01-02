class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return head;
        ListNode *l=head,*last;
        int size=1;
        while(l->next) {
            l=l->next;
            size++;
        }
        last=l;
        k%=size;
        if(k==0) return head;
        int i=1;
        l=head;
        while(i<size-k) {
            l=l->next;
            i++;
        }
        ListNode *newHead=l->next;
        l->next=NULL;
        last->next=head;
        return newHead;
    }
};
