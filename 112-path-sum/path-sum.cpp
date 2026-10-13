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
    bool hasPathSum(TreeNode* root, int ts) {
        if(root==NULL) return false;
        TreeNode* og=root;
        int sum=0;
        return helper(root,og,ts,sum);
    }
    bool helper(TreeNode* root,TreeNode* og, int ts,int sum){
        if(sum==ts && root==NULL && og->left==NULL && og->right==NULL){
            return true;
        }
        if(root==NULL){
            return false;
        }
        bool le=helper(root->left,root,ts,sum+(root->val));
        bool ri=helper(root->right,root,ts,sum+(root->val));
        return le||ri;
    }
};