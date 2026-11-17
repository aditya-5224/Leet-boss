class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* d1 = new ListNode(0);   
        ListNode* d2 = new ListNode(0);   
        ListNode* before = d1;           
        ListNode* after  = d2;            

        while (head) {
            if (head->val < x) {
                before->next = head;
                before = head;
            } 
            else {
                after->next = head;
                after = head;
            }
            head = head->next;
        }

        before->next = d2->next;
        after->next  = NULL;

        return d1->next;
    }
};