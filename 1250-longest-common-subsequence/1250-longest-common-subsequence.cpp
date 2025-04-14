class Solution {
public:
    int dp[1001][1001];
    int solve(string& s, string& t, int i, int j) {
        if (i == s.size() || j == t.size()) {
            return 0;
        }
        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        if (s[i] == t[j]) {
            return dp[i][j] = 1 + solve(s, t, i + 1, j + 1);
        }
        return dp[i][j] = max(solve(s, t, i, j + 1), solve(s, t, i + 1, j));
    }

    int longestCommonSubsequence(string s, string t) {
        int n = s.size();
        int m = t.size();
        memset(dp,-1,sizeof(dp));
        return solve(s, t, 0, 0);
    }
};