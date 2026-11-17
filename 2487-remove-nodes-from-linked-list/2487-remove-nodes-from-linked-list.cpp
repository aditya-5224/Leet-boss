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
    ListNode* removeNodes(ListNode* head) {
        ListNode* curr = head;
        stack<int> stck;
        while (curr) {
            if (stck.empty() || curr->val <= stck.top()) stck.push(curr->val);
            // cout << stck.top() << endl;
            else if (curr->val > stck.top()){
                while (!stck.empty() && curr->val > stck.top()) stck.pop();
                stck.push(curr->val);
            }
            
            curr = curr->next;
        }
        curr = NULL;
        while (!stck.empty()){
            ListNode* naya = new ListNode(stck.top());
            naya->next = curr;
            curr = naya;
            stck.pop();
        }
        return curr;
        
    }
};