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
    pair<int, int> check(TreeNode* root, int& cnt) {
        if (!root) return {0, 0};

        auto [lSum, l] = check(root->left, cnt);
        auto [rSum, r] = check(root->right, cnt);

        int summ = lSum + rSum + root->val;
        int count = l+r+1;

        if (summ/count == root->val) cnt++;

        return {summ, count};


    }
    int averageOfSubtree(TreeNode* root) {
        int cnt = 0;
        check(root, cnt);
        return cnt;
        
    }
};