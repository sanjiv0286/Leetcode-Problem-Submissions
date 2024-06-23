class Solution {
public:
    int longestSubarray(const vector<int>& nums, int limit) {
        int n = nums.size();
        int i = 0;
        int maxLen = 0;
        multiset<int> window;
        for (int j = 0; j < n; ++j) {
            window.insert(nums[j]);

            int minVal = *window.begin();
            int maxVal = *window.rbegin();

            while (maxVal - minVal > limit) {
                window.erase(window.find(nums[i]));
                i++;
                if (!window.empty()) {
                    minVal = *window.begin();
                    maxVal = *window.rbegin();
                }
            }

            maxLen = max(maxLen, j - i + 1);
        }

        return maxLen;
    }
};