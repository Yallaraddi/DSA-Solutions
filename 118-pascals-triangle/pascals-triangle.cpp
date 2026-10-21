class Solution {
public:
    vector<vector<int>> generate(int n) {
        if (n == 1) {
            return {{1}};
        }
        vector<vector<int>> ans;
        vector<int> parr;
        vector<int> arr;
        parr.push_back(1);
        for (int i = 2; i <= n; i++) {
            arr.resize(i);
            arr[0] = 1;
            arr[arr.size() - 1] = 1;
            for (int j = 1; j <= i - 2; j++) {
                arr[j] = parr[j - 1] + parr[j];
            }
            ans.push_back(parr);
            parr = arr;
        }
        ans.push_back(arr);
        return ans;
    }
};