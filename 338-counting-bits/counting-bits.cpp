class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++){
            int element=i;
            int count=0;
            while(element!=0){
                if(element&1){
                    count++;
                }
                element=element>>1;
            }
            ans.push_back(count);
        }
        return ans;
    }
};