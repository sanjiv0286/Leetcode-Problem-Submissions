class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // sort(nums.begin(), nums.end());
        int n = nums.size();
        int l = 0;
        int r = n - 1;
        // int sum = 0;
        while (l < r) {
           int  sum = nums[l] + nums[r];
            if (sum == target) {
                return {l+1, r+1};
            } else if (sum < target) {
                l++;
            } else {
                r--;
            }
        }
        return {};
    }
};