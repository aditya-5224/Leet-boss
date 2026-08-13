/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        ListNode *curr1 = head1;
        ListNode *curr2 = head2;
        // int
        while (1) {
            if (!curr1 && !curr2) return NULL;
            if (curr1 == curr2) return curr1;
            if (curr1 == NULL) {
                curr1 = head2;
            } 
            else {
                curr1 = curr1->next;
            }
        
            if (curr2 == NULL) {
                curr2 = head1;
            } 
            else {
                curr2 = curr2->next;
            }
            

            
    }
    
        
    }
};