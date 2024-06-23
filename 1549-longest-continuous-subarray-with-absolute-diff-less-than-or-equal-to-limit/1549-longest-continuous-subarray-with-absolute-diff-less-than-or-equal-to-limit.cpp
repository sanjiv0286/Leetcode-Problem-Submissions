class Solution {
public:
    int longestSubarray(const vector<int>& nums, int limit) {
        int n = nums.size();
        int i = 0;      // Left pointer
        int maxLen = 0; // To track the maximum length of valid subarray

        // Multiset to store the current window elements sorted
        multiset<int> window;

        for (int j = 0; j < n; ++j) { // Right pointer
            // Insert the current element into the window
            window.insert(nums[j]);

            // Check the current minimum and maximum in the window
            int minVal = *window.begin();  // Minimum element in the window
            int maxVal = *window.rbegin(); // Maximum element in the window

            // If the difference between max and min exceeds the limit
            while (maxVal - minVal > limit) {
                // Remove the element at the left pointer from the window
                window.erase(window.find(nums[i]));
                i++; // Move the left pointer to shrink the window

                // Update the min and max values in the window
                if (!window.empty()) {
                    minVal = *window.begin();
                    maxVal = *window.rbegin();
                }
            }

            // Update the maximum length of the valid subarray
            maxLen = max(maxLen, j - i + 1);
        }

        return maxLen;
    }
};