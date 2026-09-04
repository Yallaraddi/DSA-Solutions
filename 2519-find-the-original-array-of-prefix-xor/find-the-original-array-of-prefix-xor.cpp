class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n=pref.size();
        vector<int> ans(n,0);
        int runxor=pref[0];
        ans[0]=pref[0];
        for(int i=1;i<n;i++){
            ans[i]=runxor^pref[i];
            runxor=runxor^ans[i];
        }
        return ans;
    }
};