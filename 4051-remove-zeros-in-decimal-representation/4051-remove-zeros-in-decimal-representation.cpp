class Solution {
public:
    long long removeZeros(long long n) {
        long long place =1;
        long long res=0;
        while(n>0){
            int d = n%10;

            if(d!=0){
                res += d*place;
                place *= 10;
            }

            n = n /10;
        }
        return res;
    }
};