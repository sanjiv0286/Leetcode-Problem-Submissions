class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        vector<unordered_map<int, int>> mp(n);
        for (auto& x : pick) {
            int p = x[0];
            int color = x[1];
            mp[p][color]++;
        }
        int ct = 0;
        for (int i = 0; i < n; i++) {
            for (auto& x : mp[i]) {
                if (x.second > i) {
                    ct++;
                    break;
                }
            }
        }
        return ct;
    }
};