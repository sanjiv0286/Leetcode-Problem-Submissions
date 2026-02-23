class Solution {
public:
    int countPrimes(int n) {
        int ct=0;
        vector<bool> is_Prime(n + 1, true);
        is_Prime[0] = false;
        is_Prime[1] = false;
        for (int i = 2; i * i <= n;i++) {
            if (is_Prime[i] == true) {
                for (int j = 2; i*j<=n;j++){
                    is_Prime[i*j]=false;
                }
            }
        }
        for(int i=2;i<n;i++){
            if(is_Prime[i]==true){
                ct++;
            }
        }
        return ct;
    }
};