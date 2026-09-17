class Solution {
public:
    int countspace(string temp){
        int n=temp.length();
        int count=1;
        for(int i=0;i<n;i++){
            if(temp[i]==' '){
                count+=1;
            }
        }
        return count;
    }
    int mostWordsFound(vector<string>& s) {
        int n=s.size();
        int ans=0,maxans=0;
        for(int i=0;i<n;i++){
            string temp=s[i];
            ans=countspace(temp);
            maxans=max(ans,maxans);
        }
        return maxans;
    }
};