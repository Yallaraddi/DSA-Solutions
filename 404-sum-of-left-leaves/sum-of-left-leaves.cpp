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
    int sumOfLeftLeaves(TreeNode* root) {
        if(root->left==NULL && root->right==NULL){
            return 0;
        }
        int ans=0,di;
        helper(root,ans,di);
        return ans;
    }
    void helper(TreeNode* root,int &ans,int di){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL && di==1){
            ans+=root->val;
            return;
        }
        helper(root->left,ans,1);
        helper(root->right,ans,2);
    }
};