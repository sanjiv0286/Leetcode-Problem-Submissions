class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }
        vector<int>& v1 = mp[1];
        vector<int>& v2 = mp[2];
        if (v1.size() == 0 || v2.size() == 0) {
            return -1;
        }
        int mini = INT_MAX;
        for (int i : v1) {
            for (int j : v2) {
                mini = min(mini, abs(i - j));
            }
        }
        return mini;
    }
};