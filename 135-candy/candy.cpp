class Solution {
public:
    int candy(vector<int>& nums) {
        int n=nums.size();
        vector<int> left(n,1);
        vector<int> right(n,1);
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                left[i]=left[i-1]+1;
            }
        }
        int ans=left[n-1];
        int prev=1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]>nums[i+1]){
                prev=prev+1;
            }else{
                prev=1;
            }
            ans=ans+max(left[i],prev);
        }
        return ans;
    }
};