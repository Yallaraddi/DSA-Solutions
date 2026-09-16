class Solution {
public:
    int strStr(string h, string n) {
        int n1 = h.length();
        int n2 = n.length();
        if (n2 > n1) {
            return -1;
        }
        if (h.substr(0, n2) == n) {
            return 0;
        }
        int i = 1;
        while (i+n2 <= n1) {
            if (h.substr(i, n2) == n) {
                return i;
            }
            i++;
        }
        return -1;
    }
};