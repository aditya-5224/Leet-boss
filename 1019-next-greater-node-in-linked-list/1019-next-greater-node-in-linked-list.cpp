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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        stack<pair<int,int>> stck; 
        int i = 0;
        while (head) {
            ans.push_back(0); 
                             
            while (!stck.empty() && stck.top().first < head->val) {
                ans[stck.top().second] = head->val;
                stck.pop();
            }

            stck.push({head->val, i});
            head = head->next;
            i++;
        }

        return ans;
        
    }
};