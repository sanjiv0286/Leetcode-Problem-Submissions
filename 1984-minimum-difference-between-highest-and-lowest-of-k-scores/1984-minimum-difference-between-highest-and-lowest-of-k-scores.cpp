class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if (k == 1) {
            return 0;
        }
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int minDifference = INT_MAX;

        for (int i = 0; i + k - 1 < n; ++i) {
            minDifference = min(minDifference, nums[i + k - 1] - nums[i]);
        }

        return minDifference;
    }
};
