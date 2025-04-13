class Solution {
public:
    int dp[1001][1001];
    bool solve(int i, int j, string &s) {
        if (i >= j) {
            return true;
        }
        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        if (s[i] == s[j]) {
            return dp[i][j] = solve(i + 1, j - 1, s);
        }
        return dp[i][j] = false;
    }

    string longestPalindrome(string s) {
        int n = s.size();
        memset(dp, -1, sizeof(dp));
        int maxlen = INT_MIN;
        int sp = -1;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (solve(i, j, s)) {
                    if (maxlen < j - i + 1) {
                        maxlen = j - i + 1;
                        sp = i;
                    }
                }
            }
        }
        return s.substr(sp, maxlen);
    }
};