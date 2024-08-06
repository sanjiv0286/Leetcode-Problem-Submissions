

class Solution {
public:
    int dp[101];

    int solve(vector<int>& nums, int n, int i) {
        if (i >= n)
            return 0;
        if (dp[i] != -1) {
            return dp[i];
        }
        int steal = nums[i] + solve(nums, n, i + 2);
        int skip = solve(nums, n, i + 1);

        return dp[i] = max(steal, skip);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return nums[0];
        }
        if (n == 2) {
            return max(nums[0], nums[1]);
        }
        memset(dp, -1, sizeof(dp));
        int take_0th_house = solve(nums, n - 1, 0);
        memset(dp, -1, sizeof(dp));
        int take_1st_house = solve(nums, n, 1);
        return max(take_0th_house, take_1st_house);
    }
};