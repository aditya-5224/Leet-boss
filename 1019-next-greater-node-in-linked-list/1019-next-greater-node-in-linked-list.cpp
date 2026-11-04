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
        vector<int> arr;
        while (head){
            arr.push_back(head->val);
            head = head->next;
        }

        stack<int> stck;
        // stck.push(0);
        vector<int> ans(arr.size(), 0);
        for (int i = 0; i < arr.size(); i++){
            if (stck.empty()) {
                stck.push(i);
                continue;
            }

            while (!stck.empty() && arr[stck.top()] < arr[i]){
                ans[stck.top()] = arr[i];
                stck.pop();
            }

            stck.push(i);
        }

        return ans;
        
    }
};