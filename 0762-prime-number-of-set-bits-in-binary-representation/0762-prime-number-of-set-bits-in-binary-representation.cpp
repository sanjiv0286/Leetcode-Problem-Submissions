class Solution {
public:
    
    bool isprime(int n){
        if(n==0 || n==1){
            return false;
        }
        int ct =0;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }


    int countPrimeSetBits(int left, int right) {
        int ans = 0;
        for (int i = left; i <= right; i++) {
            int ct = __builtin_popcount(i);
            if (isprime(ct)) {
                ans++;
            }
        }
        return ans;
    }
};