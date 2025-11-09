class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;
        int mini = INT_MAX;

        // Collect indices
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);
        }

        // For each number, just check distance between i and i+2
        for (auto& [num, v] : mp) {
            if (v.size() < 3) continue;
            for (int i = 0; i + 2 < v.size(); i++) {
                mini = min(mini, 2 * (v[i+2] - v[i]));
            }
        }

        return (mini == INT_MAX) ? -1 : mini;
    }
};
