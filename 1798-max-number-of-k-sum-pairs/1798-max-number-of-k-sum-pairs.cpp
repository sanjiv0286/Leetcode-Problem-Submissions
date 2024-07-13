class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ct = 0;
        int l = 0;
        int n = nums.size();
        int r = n - 1;
        while (l < r) {
            int sum = nums[l] + nums[r];
            if (sum == k) {
                l++;
                r--;
                ct++;
            } else if (sum < k) {
                l++;
            } else {
                r--;
            }
        }
        return ct;
    }
};