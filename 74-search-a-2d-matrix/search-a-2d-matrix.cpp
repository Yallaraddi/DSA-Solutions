class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        long long l=0,h=(n*m)-1;
        // if(n==1){
        //     for(int i=0;i<m;i++){
        //         if(matrix[0][i]==target){
        //             return true;
        //         }
        //     }
        //     return false;
        // }
        while(l<=h){
            long long mid=(l+h)/2;
            int r=mid/m;
            int c=mid%m;

            if(matrix[r][c]==target){
                return true;
            }else if(matrix[r][c]<target){
                l=mid+1;
            }else{
                h=mid-1;
            }
        }
        return false;
    }
};