class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
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
                arr1.push_back(nums[i]);
            } else {
                arr2.push_back(nums[i]);
            }
        }
        int ans1 = 0, ans2 = 0;
        for (auto it : arr1) {
            ans1 = ans1 ^ it;
        }
        for (auto it : arr2) {
            ans2 = ans2 ^ it;
        }
        return {ans1, ans2};
    }
};