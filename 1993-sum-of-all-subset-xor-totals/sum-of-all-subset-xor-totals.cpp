class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<pow(2,n);i++){
            int element=i;
            int Xor=0;
            for(int j=0;j<n;j++){
                if(element&(1<<j)){
                    Xor=Xor^nums[j];
                }
            }
            ans=ans+Xor;
        }
        return ans;
    }
};