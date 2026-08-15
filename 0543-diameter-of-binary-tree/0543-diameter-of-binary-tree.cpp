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
    int check(TreeNode* root, int& maxx) {
        if (root == NULL) return 0;

        int l = check(root->left, maxx);
        int r = check(root->right, maxx);
        maxx = max(maxx, l+r);
        return max(l, r)+1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int maxx = 0;
        check(root, maxx);
        return maxx;

    }
};