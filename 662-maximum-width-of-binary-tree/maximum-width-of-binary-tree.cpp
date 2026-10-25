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
    int widthOfBinaryTree(TreeNode* root) {
        unsigned long long maxans = 1;
        queue<pair<TreeNode*, unsigned long long>> q;
        q.push({root, 1});
        unsigned long long mini, maxi;
        while (!q.empty()) {
            int n = q.size();
            mini = 0, maxi = 0;
            for (int i = 0; i < n; i++) {
                TreeNode* node = q.front().first;
                unsigned long long pos = q.front().second;
                q.pop();
                if (mini == 0) {
                    mini = pos;
                }
                maxi = pos;
                if (node->left != NULL) {
                    q.push({node->left, (unsigned long long)(pos * 2) - 1});
                }
                if (node->right != NULL) {
                    q.push({node->right, (unsigned long long)(pos * 2)});
                }
            }
            maxans = max(maxans, (maxi - mini) + 1);
        }
        maxans = max(maxans, (maxi - mini) + 1);
        return maxans;
    }
};