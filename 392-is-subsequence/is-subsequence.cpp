class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n1=s.length();
        int n2=t.length();
        int l=0;
        int r=0;
        while(l<n1 && r<n2){
            if(s[l]==t[r]){
                l++;
            }
            r++;
        }
        return l==n1;
    }
};