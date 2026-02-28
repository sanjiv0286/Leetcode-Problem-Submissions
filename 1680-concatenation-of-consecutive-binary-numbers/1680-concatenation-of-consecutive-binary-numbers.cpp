class Solution {
public:
    const int M = 1e9 + 7;
    int concatenatedBinary(int n) {
        int bits = 0;
        long long res = 0;
        for (int num = 1; num <= n; num++) {
            if ((num & (num - 1)) == 0) {
                bits++;
            }
            // res = ((res * (1LL << bits)) % M + num) % M;
            res = ((res << bits) % M + num) % M;
        }
        return res;
    }
};