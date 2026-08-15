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
    int check(TreeNode* root, int& maxx){
        if (root == NULL) return 0;

        int l = max(0, check(root->left, maxx));
        int r = max(0, check(root->right, maxx));
        maxx = max(maxx, l+r+root->val);

        return max(l, r)+root->val;
    }
    int maxPathSum(TreeNode* root) {
        // if (!root->left && !root->right) return
        int maxx = INT_MIN;
        check(root, maxx);
        return maxx;

    }
};