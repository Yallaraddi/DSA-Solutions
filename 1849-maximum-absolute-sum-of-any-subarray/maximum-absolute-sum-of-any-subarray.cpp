class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        int maxsum=INT_MIN,minsum=INT_MAX;
        int sum=0,sum1=0;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            maxsum=max(sum,maxsum);
            if(sum<0){
                sum=0;
            }
            
            sum1=sum1+nums[i];
            minsum=min(sum1,minsum);
            if(sum1>0){
                sum1=0;
            }
        }
        return max(maxsum,abs(minsum));
    }
};