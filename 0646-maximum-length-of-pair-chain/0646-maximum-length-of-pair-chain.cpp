class Solution {
public:
    int dp[1001][1001];
    int solve(vector<vector<int>>& p, int i, int prev) {
        if (i == p.size()) {
            return 0;
        }
         if (prev != -1 && dp[prev][i] != -1)
            return dp[prev][i];
        int take = 0;
        if (prev == -1 || p[i][0] > p[prev][1]) {
            take = 1 + solve(p, i + 1, i);
        }
        int skip = solve(p, i + 1, prev);
         if (prev != -1)
            dp[prev][i] = max(take, skip);
        return max(take, skip);
    }

    int findLongestChain(vector<vector<int>>& p) {
        memset(dp, -1, sizeof(dp));
        sort(p.begin(), p.end());
        int n = p.size();
        return solve(p, 0, -1);
    }
};