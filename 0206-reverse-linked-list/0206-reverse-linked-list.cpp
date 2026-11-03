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
    ListNode* check(ListNode* head){
        if (head == NULL || head->next == NULL)  return head;

        ListNode* curr = check(head->next);
        head->next->next = head;
        head->next = NULL;

        return curr;
    }
    ListNode* reverseList(ListNode* head) {
        return check(head);
        // ListNode* curr = head;
        // ListNode *prev = NULL, *agla = NULL;

        // while (curr){
        //     agla = curr->next;
        //     curr->next = prev;
        //     prev = curr;
        //     curr = agla;

        // }

        // return prev;
        
    }
};