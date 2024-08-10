class Solution {
public:
    int n, m;
    int dp[1001][1001];
    int solve(int n, int m, string& s, string& t) {
        if (n == 0 || m == 0) {
            return 0;
        }
        if (dp[n][m] != -1) {
            return dp[n][m];
        }
        if (s[n - 1] == t[m - 1]) {
            return dp[n][m]=1 + solve(n - 1, m - 1, s, t);
        } else {
            return dp[n][m]=max(solve(n - 1, m, s, t), solve(n, m - 1, s, t));
        }
    }
    int longestCommonSubsequence(string text1, string text2) {
        memset(dp, -1, sizeof(dp));
        n = text1.size();
        m = text2.size();
        return solve(n, m, text1, text2);
    }
};