/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int maxans = 0;
    int ans = 0;
    int maxDepth(TreeNode* root) { 
        return helper(root, 0); }
    int helper(TreeNode* root, int x) {
        if (root == NULL) {
            maxans = max(maxans, x);
            return 0;
        }
        helper(root->left, x + 1);
        helper(root->right, x + 1);
        return maxans;
    }
};