class Solution {
public:
    int memo[1001][1001];

    int lcs(int n, int m, string &s1, string &s2) {
        if (m == 0 || n == 0) {
            memo[n][m] = 0;
            // return 0;
        }
        if (memo[n][m] != -1) {
            return memo[n][m];
        }
        else {
            if (s1[n - 1] == s2[m - 1]) {
                memo[n][m] = 1 + lcs(n - 1, m - 1, s1, s2);
            } else {
                memo[n][m] = max(lcs(n - 1, m, s1, s2), lcs(n, m - 1, s1, s2));
            }
        }

        return memo[n][m];
    }

    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                memo[i][j]=-1;
            }
        }
        return lcs(n, m, text1, text2);
    }
};