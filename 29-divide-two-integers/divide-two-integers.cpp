class Solution {
public:
    int divide(int divid, int divi) {
        long long dividend=divid;
        long long divisor=divi;
        if(dividend==divisor){
            return 1;
        }
        if(dividend==INT_MIN && divisor==-1){
            return INT_MAX;
        }
        if(dividend==INT_MIN && divisor==1){
            return INT_MIN;
        }
        int ans=0;
        bool isneg=false;
        if((dividend<0 && divisor>0) ){
            dividend=-dividend;
            isneg=true;
        }
        if((dividend>0 && divisor<0) ){
            divisor=-divisor;
            isneg=true;
        }
        if(dividend<0 && divisor<0){
            dividend=-dividend;
            divisor=-divisor;
        }
        while(dividend>=divisor){
            int cnt=0;
            while( (divisor<<cnt) <= dividend ){
                cnt++;
            }
            cnt=cnt-1;
            ans=ans+(1<<cnt);
            dividend=dividend-(divisor<<cnt);
        }
        if(isneg){
            return -ans;
        }
        return ans;
    }
};