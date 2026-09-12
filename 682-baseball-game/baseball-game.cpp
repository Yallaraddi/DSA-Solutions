class Solution {
public:
    int calPoints(vector<string>& nums) {
        int n = nums.size();
        stack<int> st;
        for (int i = 0; i < n; i++) {
            if (nums[i] == "C") {
                 st.pop();
            }else if(nums[i]=="D"){
                st.push(st.top()*2);
            }else if(nums[i]=="+"){
                int first=st.top();
                st.pop();
                int sum=first+st.top();
                st.push(first);
                st.push(sum);
            }else{
                st.push(stoi(nums[i]));
            }
        }
        int sum=0;
        while(!st.empty()){
            sum=sum+st.top();
            st.pop();
        }
        return sum;
    }
};