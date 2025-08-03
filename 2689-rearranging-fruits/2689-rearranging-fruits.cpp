class Solution {
public:
    long long minCost(vector<int>& u, vector<int>& v) {
        int n = u.size();
        int m = v.size();
        unordered_map<int, int> mp;
        int mini = INT_MAX;
        for (auto& x : u) {
            mp[x]++;
            mini = min(mini, x);
        }
        for (auto& x : v) {
            mp[x]--;

            mini = min(mini, x);
        }

        vector<int> res;

        for (auto& x : mp) {
            int ele = x.first;
            int ct = x.second;

            if (ct == 0) {
                continue;
            }

            if (ct % 2 != 0) {
                return -1;
            }
            for (int i = 1; i <= abs(ct) / 2; i++) {
                res.push_back(ele);
            }
        }
        sort(res.begin(), res.end());
        long long ans = 0;
        for (int i = 0; i < res.size() / 2; i++) {
            ans += min(res[i], 2 * mini);
        }
        return ans;
    }
};