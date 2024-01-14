class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> m;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            m[nums[i]]++;
        }
        int maxi = INT_MIN;
        for (auto& x : m) {
            maxi = max(maxi, x.second);
        }
        int ct = 0;
        for (auto& x : m) {
            if (x.second == maxi)
                ct += x.second;
        }
        return ct;

        // return maxi;
    }
};