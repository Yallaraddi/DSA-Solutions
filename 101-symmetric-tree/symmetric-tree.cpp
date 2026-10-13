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
    bool isSymmetric(TreeNode* root) {
        if(root->left==NULL && root->right==NULL){
            return true;
        }
        TreeNode* node1=root;
        TreeNode* node2=root;
        return helper(root,node1,node2);
    }
    bool helper(TreeNode* root,TreeNode* node1,TreeNode* node2){
        if(node1==NULL && node2==NULL){
            return true;
        }
        if(node1==NULL || node2==NULL) return false;
        if(node1->val!=node2->val) return false;
        bool p1=helper(root,node1->left,node2->right);
        bool p2=helper(root,node1->right,node2->left);
        return p1&&p2;
    }
};