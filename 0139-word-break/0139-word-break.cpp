class Solution {
public:
    unordered_set<string> st;
    int dp[301];
    int n;
    bool solve(int idx, string& s) {
        if (idx == n) {
            return true;
        }

        if (dp[idx] != -1) {
            return dp[idx];
        }

        if (st.find(s) != st.end()) {
            return true;
        }

        for (int l = 1; idx + l <= n; l++) {
            string temp = s.substr(idx, l);
            if (st.find(temp) != st.end() && solve(idx + l, s)) {
                return true;
            }
        }
        return dp[idx]=false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        n = s.size();
        memset(dp, -1, sizeof(dp));
        for (auto& x : wordDict) {
            st.insert(x);
        }
        return solve(0, s);
    }
};
