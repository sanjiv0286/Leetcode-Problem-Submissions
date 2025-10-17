class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        int idx = 0;
        vector<int>temp(nums.begin(), nums.end());
        for (int i = 0; i < k; i++) {
            nums[i] = nums[n - k + idx];
            idx++;
        }
        idx = 0;
        for (int i = k; i < n; i++) {
            nums[i] = temp[idx++];
        }
    }
};