class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
        int n=nums.size();
        int i=n-1;
        int carry=1;
        int sum=0,val=0;
        while(i>=0 && carry!=0){
            sum=nums[i]+carry;
            val=sum%10;
            carry=sum/10;
            nums[i]=val;
            i--;
        }
        if(carry!=0) nums.insert(nums.begin()+0,carry);
        return nums;
    }
};