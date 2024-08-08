class Solution {
public:
    long long dp[100000][2];

    long long solve(long long n, bool idxtype, vector<int>& nums, long long i) {
        if (i >= nums.size()) {
            return 0;
        }
        if (dp[i][idxtype] != -1) {
            return dp[i][idxtype];
        }

        long long skip = solve(n - 1, idxtype, nums, i + 1);
        long long val = nums[i];
        if (idxtype == false) {
            val = -val;
        }

        long long take = solve(n, !idxtype, nums, i + 1) + val;

        return dp[i][idxtype] = max(take, skip);
    }

    long long maxAlternatingSum(vector<int>& nums) {

        long long n = nums.size();
        memset(dp, -1, sizeof(dp));
        return solve(n, true, nums, 0);
    }
};