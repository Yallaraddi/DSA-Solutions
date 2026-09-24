class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = t.length();
        int n1 = s.length();
        int idx, idx1;
        if (n != n1) {
            return false;
        }
        int hasht[26] = {0};
        int hashs[26] = {0};

        for (int i = 0; i < n; i++) {
            idx = t[i] - 'a';
            hasht[idx]++;
            idx1 = s[i] - 'a';
            hashs[idx1]++;
        }

        for (int i = 0; i < 26; i++) {
            if (hasht[i] != hashs[i]) {
                return false;
            }
        }
        return true;
    }
};