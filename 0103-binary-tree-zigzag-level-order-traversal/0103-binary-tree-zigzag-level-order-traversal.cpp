/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root) return ans;

        queue<TreeNode*> q;
        q.push(root);
        bool check = false;
        while (!q.empty()){
            int n = q.size();
            vector<int> temp(n);
            for (int i = 0; i < n; i++){
                TreeNode* naya = q.front();
                q.pop();

                int indx = check ? (n-i-1) : i;
                temp[indx] = naya->val;

                if (naya->left) q.push(naya->left);
                if (naya->right) q.push(naya->right);
            }

            check = !check;
            ans.push_back(temp);
        }

        return ans;
        
    }
};