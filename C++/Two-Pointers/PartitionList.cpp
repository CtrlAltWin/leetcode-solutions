class Solution {
public:
    ListNode *partition(ListNode* head, int x) {
        ListNode*p1=new ListNode,*p2=new ListNode,*h1=p1,*h2=p2; 
        while(head) {
            if(head->val>=x)
                p1=p1->next=new ListNode(head->val);
            else
                p2=p2->next=new ListNode(head->val);
            head=head->next;
        }
        p2->next=h1->next;
        return h2->next;
    }
};