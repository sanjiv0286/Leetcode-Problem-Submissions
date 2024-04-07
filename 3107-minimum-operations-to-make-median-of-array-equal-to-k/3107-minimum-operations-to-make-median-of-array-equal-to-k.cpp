class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
        long long n = nums.size();
        long long mi = n / 2;
        sort(nums.begin(), nums.end());
        long long ans = 0;
        if (nums[mi] == k) {
            return 0;
        } else {
            long long val = abs(nums[mi] - k);
            if (nums[mi] > k) {
                nums[mi] = nums[mi] - abs(nums[mi] - k);
                // ans += val;
            } else {
                nums[mi] = nums[mi] + abs(nums[mi] - k);
                // ans += val;
            }
            ans += val;
        }
        for (long long i = mi - 1; i >= 0; i--) {
            if (nums[i] > nums[mi]) {
                // nums[i] = nums[mi];
                ans += nums[i] - nums[mi];
            }
        }
        for (long long i = mi + 1; i < n; i++) {
            if (nums[i] < nums[mi]) {
                // nums[i] = nums[mi];
                ans += nums[mi] - nums[i];
            }
        }
        return ans;
    }
};