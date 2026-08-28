class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int ans1 = 0, ans2 = 0;
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans = ans ^ nums[i];
        }
        int bit_p = 0;
        while (ans != 0) {
            if (ans & 1) {
                break;
            }
            bit_p++;
            ans = ans >> 1;
        }
        for (int i = 0; i < n; i++) {
            if (nums[i] & (1 << bit_p)) {
                ans1 = ans1 ^ nums[i];
            } else {
                ans2 = ans2 ^ nums[i];
            }
        }
        return {ans1, ans2};
    }
};
