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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        queue<pair<TreeNode*,pair<int,int>>> q;
        map<int,map<int,multiset<int>>> mp;
        q.push({root ,{0,0}});
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* temp=q.front().first;
                int row=q.front().second.first;
                int col=q.front().second.second;
                q.pop();
                mp[col][row].insert(temp->val);
                if(temp->left!=NULL){
                    q.push({temp->left,{row+1,col-1}});
                }
                if(temp->right!=NULL){
                    q.push({temp->right,{row+1,col+1}});
                }
            }
        }
        for(auto it:mp){
            vector<int> nums;
            for(auto row:it.second){
                for(auto val:row.second){
                    nums.push_back(val);
                }
            }
            ans.push_back(nums);
        }
        return ans;
    }
};