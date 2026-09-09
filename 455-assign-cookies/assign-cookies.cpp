class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n1 = g.size();
        int n2 = s.size();
        sort(s.begin(), s.end());
        sort(g.begin(), g.end());
        int count = 0;
        int i=0,j=0;
        while(i<n1 && j<n2){
            if(s[j]>=g[i]){
                count++;
                i++;
            }
            j++;
        }
        return count;
    }
};