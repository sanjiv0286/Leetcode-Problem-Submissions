class Solution {
public:
    int dp[46];
    int solve(int n) {

        if (n < 0)
            return 0;
        if (dp[n] != -1) {
            return dp[n];
        }
        if (n == 0)
            return 1;
        int l = solve(n - 1);
        int r = solve(n - 2);
        return dp[n] = l + r;
    }

    int climbStairs(int n) {

        memset(dp, -1, sizeof(dp));
        return solve(n);
    }
};