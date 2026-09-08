class Solution {
public:
    bool lemonadeChange(vector<int>& nums) {
        int n = nums.size();
        int five = 0, ten = 0, twenty = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 5) {
                five++;
            } else if (nums[i] == 10) {
                if (five == 0) {
                    return false;
                }
                five--;
                ten++;
            } else if (nums[i] == 20) {
                if (five == 0) {
                    return false;
                }

                if (ten >= 1) {
                    five--;
                    ten--;
                } else if (five >= 3) {
                    five = five - 3;
                }else{
                    return false;
                }

                twenty++;
            }
        }
        return true;
    }
};