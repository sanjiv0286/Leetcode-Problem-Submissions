class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sum1 = 0, sum2 = 0;
        int val1 = 1, ct = 0;
        while (ct != n) {
            sum1 += val1;
            val1 += 2;
            ct++;
        }
        int val2 = 2, ct2 = 0;
        while (ct2 != n) {
            sum2 += val2;
            val2 += 2;
            ct2++;
        }
        return __gcd(sum1, sum2);
    }
};