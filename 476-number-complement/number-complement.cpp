class Solution {
public:
    int findComplement(int num) {
        int ans=0;
        for(int i=0;i<32;i++){
            if(num==0){
                break;
            }
            if((num&1) == 0){
                ans=ans+pow(2,i);
            }
            num=num>>1;
        }
        return ans;
    }
};