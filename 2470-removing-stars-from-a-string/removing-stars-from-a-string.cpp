class Solution {
public:
    string removeStars(string s) {
        int n=s.length();
        string temp="";
        for(int i=0;i<n;i++){
            if(s[i]>='a' && s[i]<='z'){
                temp.push_back(s[i]);
            }else{
                if(!temp.empty()){
                temp.pop_back();
                }
            }
        }
        return temp;
    }
};