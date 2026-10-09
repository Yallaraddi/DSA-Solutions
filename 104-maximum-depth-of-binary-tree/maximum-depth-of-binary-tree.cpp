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
    int maxDepth(TreeNode* root) {
        int maxans = 0;
        helper(root, 0, maxans);
        return maxans;
    }
    void helper(TreeNode* root, int len, int& maxans) {
        if (root == NULL) {
            maxans = max(maxans, len);
            return;
        }
        helper(root->left, len + 1,maxans);
        helper(root->right, len + 1,maxans);
    }
};