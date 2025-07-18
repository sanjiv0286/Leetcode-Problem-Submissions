// class Solution {
// public:
//     int fib(int n) {
//         if (n == 0) {
//             return 0;
//         }
//         if (n == 1) {
//             return 1;
//         }
//         return fib(n - 1) + fib(n - 2);
//     }
// };


class Solution {
public:
    int solve(int n, vector<int>&dp) {
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        if (dp[n] != -1)
            return dp[n];

        return dp[n] = solve(n - 2,dp) + solve(n - 1,dp);
    }

    int fib(int n) {
        vector<int> dp(31, -1);
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;

        return solve(n, dp);

    }
};