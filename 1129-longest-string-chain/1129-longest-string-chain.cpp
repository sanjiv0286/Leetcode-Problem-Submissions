class Solution {
public:
    int dp[1001][1001];
    static bool com(string& s, string& t) { return s.length() < t.length(); }
    bool predecessor(string& s, string& t) {
        int n = s.size();
        int m = t.size();
        if (n >= m || m - n != 1) {
            return false;
        }
        int i = 0;
        int j = 0;
        while (i < n && j < m) {
            if (s[i] == t[j]) {
                i++;
            }
            j++;
        }
        return (i == n);
    }
    int solve(vector<string>& w, int i, int prev) {
        if (i == w.size()) {
            return 0;
        }
        if (prev != -1 && dp[prev][i] != -1)
            return dp[prev][i];
        int take = 0;
        if (prev == -1 || predecessor(w[prev], w[i])) {
            take = 1 + solve(w, i + 1, i);
        }
        int skip = solve(w, i + 1, prev);
        if (prev != -1)
            dp[prev][i] = max(take, skip);
        return max(take, skip);
    }
    int longestStrChain(vector<string>& w) {
        memset(dp, -1, sizeof(dp));
        int n = w.size();
        sort(w.begin(), w.end(), com);
        return solve(w, 0, -1);
    }
};