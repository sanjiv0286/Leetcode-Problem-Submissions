class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        deque<int> minDeque, maxDeque; // To store indices of the elements
        int i = 0, maxLen = 0;

        for (int j = 0; j < nums.size(); ++j) {
            // Maintain the max deque to be in descending order
            while (!maxDeque.empty() && nums[maxDeque.back()] <= nums[j]) {
                maxDeque.pop_back();
            }
            maxDeque.push_back(j);

            // Maintain the min deque to be in ascending order
            while (!minDeque.empty() && nums[minDeque.back()] >= nums[j]) {
                minDeque.pop_back();
            }
            minDeque.push_back(j);

            // If the current window is invalid, move the left pointer (i)
            while (nums[maxDeque.front()] - nums[minDeque.front()] > limit) {
                i++;
                // Remove the indices which are out of the new window
                if (maxDeque.front() < i) {
                    maxDeque.pop_front();
                }
                if (minDeque.front() < i) {
                    minDeque.pop_front();
                }
            }

            // Update the maximum length of the valid subarray
            maxLen = max(maxLen, j - i + 1);
        }

        return maxLen;
    }
};