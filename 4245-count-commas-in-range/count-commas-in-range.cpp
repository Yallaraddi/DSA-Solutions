class Solution {
public:
    int countCommas(int n) {
        if(n<=999){
            return 0;
        }
        if(n>=1000 && n<=99999){
            return n-1000+1;
        }
        if(n==100000){
            return 99001;
        }
        return 0;
    }
};