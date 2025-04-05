class Solution {
public:
    int dp[101];
    int solve(int i, int n, vector<int>& nums) {
        if (i > n)
            return 0;
        if (dp[i] != -1) {
            return dp[i];
        }
        int steal = nums[i] + solve(i + 2, n, nums);
        int skip = solve(i + 1, n, nums);
        return dp[i] = max(steal, skip);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        memset(dp, -1, sizeof(dp));
        if (n == 1) {
            return nums[0];
        }
        if (n == 2) {
            return max(nums[0], nums[1]);
        }
        // case 1
        int take_0th_index = solve(0, n - 2, nums);
        // case 2
        memset(dp, -1, sizeof(dp));

        int ingore_0th_index = solve(1, n - 1, nums);
        return max(take_0th_index, ingore_0th_index);
    }
};