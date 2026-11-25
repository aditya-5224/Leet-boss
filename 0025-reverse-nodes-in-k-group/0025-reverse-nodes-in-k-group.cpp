class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;
        for (int i = 0; i < k; i++) {
            if (!curr) return head;
            curr = curr->next;
        }

        ListNode* prev = reverseKGroup(curr, k);
        curr = head;
        for (int i = 0; i < k; i++) {
            ListNode* agla = curr->next;
            curr->next = prev;
            prev = curr;
            curr = agla;
        }
        return prev;
    }
};