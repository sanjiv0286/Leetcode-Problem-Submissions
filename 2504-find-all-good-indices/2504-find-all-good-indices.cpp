class Solution {
public:
    vector<int> goodIndices(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> nonInc(n, 1), nonDec(n, 1);
        vector<int> result;

        // Calculate non-increasing subarrays ending at each index
        for (int i = 1; i < n; ++i) {
            if (nums[i] <= nums[i - 1]) {
                nonInc[i] = nonInc[i - 1] + 1;
            }
        }

        // Calculate non-decreasing subarrays starting at each index
        for (int i = n - 2; i >= 0; --i) {
            if (nums[i] <= nums[i + 1]) {
                nonDec[i] = nonDec[i + 1] + 1;
            }
        }

        // Find the good indices
        for (int i = k; i < n - k; ++i) {
            if (nonInc[i - 1] >= k && nonDec[i + 1] >= k) {
                result.push_back(i);
            }
        }

        return result;
    }
};