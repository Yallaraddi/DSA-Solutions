class Solution {
public:
    vector<int> xorQueries(vector<int>& nums, vector<vector<int>>& q) {
        int n = nums.size();
        int m = q.size();
        vector<int> ans;
        for (int i = 1; i < n; i++) {
            nums[i] = nums[i] ^ nums[i - 1];
        }
        int i = 0;
        int Xor = 0;
        while (m--) {
            int l = q[i][0];
            int r = q[i][1];
            if (l == 0) {
                Xor = nums[r];
            } else {
                Xor = nums[r] ^ nums[l - 1];
            }
            i++;
            ans.push_back(Xor);
        }
        return ans;
    }
};