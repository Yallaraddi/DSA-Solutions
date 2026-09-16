class Solution {
public:
    void helper(vector<vector<int>>& ans, vector<int>& newInt) {
        if (ans.empty() || ans.back()[1] < newInt[0]) {
            ans.push_back({newInt[0], newInt[1]});

        } else {
            ans.back()[1] = max(ans.back()[1], newInt[1]);
            ans.back()[0] = min(ans.back()[0], newInt[0]);
        }
    }
    vector<vector<int>> insert(vector<vector<int>>& nums, vector<int>& newInt) {
        vector<vector<int>> ans;
        int n = nums.size();
        if (n == 0) {
            ans.push_back(newInt);
            return ans;
        }
        int flag = 0;
        for (int i = 0; i < n; i++) {
            if (flag == 0 && nums[i][0] > newInt[0]) {
                flag = 1;

                helper(ans,newInt);
            }

            if (ans.empty() || ans.back()[1] < nums[i][0]) {
                ans.push_back(nums[i]);
            } else {
                ans.back()[1] = max(ans.back()[1], nums[i][1]);
            }
        }
        if (flag == 0) {
            helper(ans,newInt);
        }
        return ans;
    }
};