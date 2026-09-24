class Solution {
public:
    bool canwe(vector<int>& nums, int days, int tryy, int n) {
        int sum = 0;
        int i=0;
        while(i<n){
            sum += nums[i];
            if (sum > tryy) {
                days--;
                sum = 0;
            }else{
                i++;
            }
        }
        if (days <= 0) {
            return false;
        }
        return true;
    }
    int shipWithinDays(vector<int>& nums, int days) {
        int n = nums.size();
        int maxi = *max_element(nums.begin(), nums.end());
        int ts = accumulate(nums.begin(), nums.end(), 0);
        int l = maxi, h = ts, m, ans = -1;
        while (l <= h) {
            m = l + (h - l) / 2;
            if (canwe(nums, days, m, n)) {
                ans = m;
                h = m - 1;
            } else {
                l = m + 1;
            }
        }
        return ans;
    }
};