class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        // double avg = sum /k;
        int max_sum = sum;
        for (int i = k; i < n; i++) {
            sum += nums[i] - nums[i - k];
            max_sum = max(max_sum, sum);
        }
        return double(max_sum)/k;
    }
};