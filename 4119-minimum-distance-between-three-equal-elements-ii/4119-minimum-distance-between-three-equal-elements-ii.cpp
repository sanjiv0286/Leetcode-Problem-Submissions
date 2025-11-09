class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }
        for (auto& x : mp) {
            int a = x.first;
            auto& v = x.second;
            if (v.size() < 3) {
                continue;
            }
            for (int i = 0; i < v.size() - 2; i++) {
                 mini =
                    min(mini, abs(v[i + 1] - v[i]) + abs(v[i] - v[i + 2]) +
                                  abs(v[i + 1] - v[i + 2]));
            }
        }
        return (mini == INT_MAX)?-1:mini;
    }
};