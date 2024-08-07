

class Solution {
public:
    // int dp[101];

    int solve(vector<int>& nums, int r, int l) {
        int prevPrev = 0, prev = 0;
        for (int i = l; i <= r; i++) {
            int skip = prev;
            int take = nums[i] + prevPrev;
            int temp = max(skip, take);
            prevPrev = prev;
            prev = temp;
        }

        return prev;
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
        // memset(dp, -1, sizeof(dp));
        int take_0th_house = solve(nums, n - 2, 0);
        // memset(dp, -1, sizeof(dp));
        int take_1st_house = solve(nums, n - 1, 1);
        return max(take_0th_house, take_1st_house);
    }
};