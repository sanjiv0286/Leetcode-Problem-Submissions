class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long n = nums.size();
        vector<long long> u, v;
        for (auto& x : nums) {
            x = abs(x);
        }
        sort(nums.begin(), nums.end(), greater<int>());
        // int j = 0, k = 1;/
        long long sum = 0;
        if (n % 2 == 0) {
            for (int i = 0; i < n / 2; i++) {
                sum += nums[i] * nums[i];
            }
            for (int i = n / 2; i < n; i++) {
                sum -= nums[i] * nums[i];
            }
        }
        if (n % 2 != 0) {
            for (int i = 0; i <= n / 2; i++) {
                sum += nums[i] * nums[i];
            }
            for (int i = n / 2 + 1; i < n; i++) {
                sum -= nums[i] * nums[i];
            }
        }
        return sum;
    }
};