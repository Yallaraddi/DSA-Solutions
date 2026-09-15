class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int lend=nums[0][1];
        int cnt=0;
        for(int i=1;i<n;i++){
            if(nums[i][0]<lend){
                cnt++;
                lend=min(lend,nums[i][1]);
            }else{
                lend=nums[i][1];
            }
        }
        return cnt;
    }
};