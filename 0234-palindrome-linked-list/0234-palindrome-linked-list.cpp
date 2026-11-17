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
    ListNode* check(ListNode* curr){
        ListNode* prev = NULL;
        while (curr) {
            ListNode* agla = curr->next;
            curr->next = prev;
            prev = curr;
            curr = agla;
        }

        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* half = check(slow->next);
        ListNode* curr1 = head;
        ListNode* curr2 = half;
        while (curr1 && curr2){
            if (curr1->val != curr2->val) return false;
            curr1 = curr1->next;
            curr2 = curr2->next;
        }

        return true;

        
    }
};