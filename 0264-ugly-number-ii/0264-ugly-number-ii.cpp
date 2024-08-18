class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> dp(n);
        dp[0] = 1;
        int p1 = 0;
        int p2 = 0;
        int p3 = 0;
        for (int i = 1; i < n; i++) {
            int multiple_of_2 = dp[p1] * 2;
            int multiple_of_3 = dp[p2] * 3;
            int multiple_of_5 = dp[p3] * 5;
            dp[i] = min({multiple_of_2, multiple_of_3, multiple_of_5});
            if (dp[i] == multiple_of_2)
                p1++;
            if (dp[i] == multiple_of_3)
                p2++;
            if (dp[i] == multiple_of_5)
                p3++;
        }
        return dp[n - 1];
    }
};