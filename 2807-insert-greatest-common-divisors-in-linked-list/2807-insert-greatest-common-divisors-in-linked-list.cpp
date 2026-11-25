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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head;
        while (curr && curr->next){
            ListNode* agla = curr->next;
            int a = curr->val, b = agla->val;
            ListNode* node = new ListNode(gcd(a,b));
            curr->next = node;
            node->next = agla;
            curr = agla;
             
        }

        return head;
    }
};