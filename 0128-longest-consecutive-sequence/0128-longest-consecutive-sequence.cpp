class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        }
        sort(nums.begin(), nums.end());
        int ct = 1;
        int maxi = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1] + 1) {
                ct++;
            } else if (nums[i] == nums[i - 1]) {
                ct=ct;
            } else {
                ct = 1;
            }
            maxi = max(maxi, ct);
        }
        return maxi;
    }
};