/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;

        ListNode* curr = head, *temp, *agla;
        ListNode* d = new ListNode(-1);
        while (curr){
            agla = d;
            while (agla->next != NULL && agla->next->val <= curr->val){
                agla = agla->next;
            }
            temp = curr->next;
            curr->next = agla->next;
            agla->next = curr;
            curr = temp;
        }

        return d->next;

        
    }
};