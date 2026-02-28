class Solution {
public:
    const int M = 1e9 + 7;
    int concatenatedBinary(int n) {
        long long res = 0;
        for (int num = 1; num <= n; num++) {
            int bits = floor(log2(num)) + 1;
            //  res = ((res*(1LL<<bits))%M+num)%M;
            res = (res*(1LL<<bits))%M;
            res = (res + num) % M;
        }
        // int bits = log2(14); // this will give highest set bit index.
        // if you find to find number of bits then use floor(log2(num))+1
        return int(res);
    }
};