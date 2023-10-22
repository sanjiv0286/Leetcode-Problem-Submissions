class Solution {
public:
 int minimumSum(vector<int>& nums) {
    int n = nums.size();
    int minSum = INT_MAX;

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (nums[i] < nums[j] && nums[k] < nums[j]) {
                    int tripletSum = nums[i] + nums[j] + nums[k];
                    minSum = min(minSum, tripletSum);
                }
            }
        }
    }

    return (minSum == INT_MAX) ? -1 : minSum;
}


};