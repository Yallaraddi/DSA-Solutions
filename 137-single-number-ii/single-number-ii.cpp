class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int ones=0,twos=0;
        for(auto it:nums){
            ones=(ones^it) & ~twos;
            twos=(twos^it) & ~ones;
        }
        return ones;
    }
};