class Solution {
public:
    vector<vector<int>> res;
    void solve(vector<int> nums, int i) {
        if (i >= nums.size()) {
            res.push_back(nums);
            return;
        }
        for (int j = i; j < nums.size(); j++) {
            swap(nums[i], nums[j]);
            solve(nums, i+1);
            swap(nums[i], nums[j]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        // vector<vector<int>> ans;
        int index = 0;
        solve(nums, index);
        return res;
    }
};