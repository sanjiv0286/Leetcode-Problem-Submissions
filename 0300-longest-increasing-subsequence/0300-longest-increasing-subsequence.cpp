class Solution {
public:
    int dp[2501][2501];
    int solve(int i, int prev, vector<int>& nums) {
        if (i == nums.size()) {
            return 0;
        }
        if (prev != -1 && dp[prev][i] != -1)
            return dp[prev][i];
        int take = 0;
        if (prev == -1 || nums[prev] < nums[i]) {
            take = 1 + solve(i + 1, i, nums);
        }
        int skip = solve(i + 1, prev, nums);
        if (prev != -1)
            dp[prev][i] = max(take, skip);
        return max(take, skip);
    }

    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        memset(dp, -1, sizeof(dp));
        return solve(0, -1, nums);
    }
};