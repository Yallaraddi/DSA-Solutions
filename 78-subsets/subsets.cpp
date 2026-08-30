class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        for(int i=0;i<pow(2,n);i++){
            int element=i;
            vector<int> arr;
            for(int j=0;j<n;j++){
                if(element&(1<<j)){
                    arr.push_back(nums[j]);
                }
            }
            ans.push_back(arr);
        }
        return ans;
    }
};