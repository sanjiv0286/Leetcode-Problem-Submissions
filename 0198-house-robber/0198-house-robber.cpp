class Solution {
public:
    int dp[101];

    int rob(vector<int>& nums) {
        memset(dp, 0, sizeof(dp));
        int n = nums.size();
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return nums[0];
        }
        dp[0] = 0, dp[1] = nums[0];
        for (int i = 2; i <= n; i++) {
            int steal = nums[i - 1] + dp[i - 2];
            int skip = dp[i - 1];
            dp[i] = max(steal, skip);
        }

        return dp[n];
    }
};