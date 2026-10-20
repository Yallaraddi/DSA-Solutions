class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) {
            return 0;
        }
        unordered_set<int> st;
        for (auto it : nums) {
            st.insert(1LL * it);
        }
        int cnt = 1, maxcnt = 1;
        for (auto i : st) {
            long long element = i;
            int k = 1;
            cnt = 1;
            if (st.count(element - 1)) {
                continue;
            } else {
                while (true) {
                    if (st.count(element + k)) {
                        cnt++;
                        k++;
                    } else {
                        break;
                    }
                }
            }
            maxcnt = max(cnt, maxcnt);
        }
        return maxcnt;
    }
};