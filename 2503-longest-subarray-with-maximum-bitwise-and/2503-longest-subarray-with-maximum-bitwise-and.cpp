class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxVal = *max_element(nums.begin(), nums.end()); // Find the maximum element in the array
        int longest = 0;
        int currentLength = 0;
        
        for (int num : nums) {
            if (num == maxVal) {
                currentLength++;
                longest = max(longest, currentLength);
            } else {
                currentLength = 0;
            }
        }
        
        return longest;
    }
};
