class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n1 = g.size();
        int n2 = s.size();
        sort(s.begin(), s.end());
        sort(g.begin(), g.end());
        int count = 0;
        int j = 0;
        for (int i = 0; i < n1; i++) {
            int wtboy = g[i];

            if (j == n2) {
                break;
            }
            while (j < n2 && s[j] < wtboy) {
                j++;
            }
            if (j != n2) {
                count++;
                j++;
            } else {
                break;
            }
        }
        return count;
    }
};