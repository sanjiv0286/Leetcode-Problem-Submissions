class Solution {
public:
    int n, m;
    int dp[1001][1001];
    int solve(int i, int j, string& s, string& t) {
        if (i >= n || j >= m) {
            return 0;
        }
        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        if (s[i] == t[j]) {
            return dp[i][j] = 1 + solve(i + 1, j + 1, s, t);
        } else
            return dp[i][j] = max(solve(i + 1, j, s, t), solve(i, j + 1, s, t));
    }
    int longestCommonSubsequence(string text1, string text2) {
        memset(dp, -1, sizeof(dp));
        n = text1.size();
        m = text2.size();
        return solve(0, 0, text1, text2);
    }
};