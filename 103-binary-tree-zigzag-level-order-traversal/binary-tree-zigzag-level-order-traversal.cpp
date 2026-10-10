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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if (root == NULL)
            return {};
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        int count = 0;
        while (!q.empty()) {
            vector<int> arr;
            int n = q.size();
            arr.resize(n);
            int x=0;
            for (int i = 0; i < n; i++) {
                TreeNode* node = q.front();
                q.pop();
                if (count % 2 == 0) {
                    arr[i]=(node->val);
                }else{
                    arr[n-i-1]=node->val;
                }
                if (node->left != NULL) {
                    q.push(node->left);
                }
                if (node->right != NULL) {
                    q.push(node->right);
                }
            }
            count++;
            ans.push_back(arr);
        }
        return ans;
    }
};