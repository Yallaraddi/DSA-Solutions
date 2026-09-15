class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return 0;
        }
        int farthest = 0, lastidx = 0;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            farthest = max(farthest, i + nums[i]);

            if (i == lastidx) {
                lastidx = farthest;
                ans++;

                if (farthest >= n - 1) {
                    return ans;
                }
            }
        }
        return ans;
    }
};