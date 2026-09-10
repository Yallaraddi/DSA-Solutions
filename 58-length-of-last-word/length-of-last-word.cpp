class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int i=n-1;
        int first=-1;
        int second=-1;
        while(i>=0){
            if(s[i]!=' ' && first==-1){
                first=i;
            }
            if(s[i]==' '&& first!=-1){
                second=i;
                break;
            }
            i--;
        }
        if(second==-1) return first+1;
        return first-second;
    }
};