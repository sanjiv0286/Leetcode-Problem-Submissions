class Solution {
public:
    void generateSubset(vector<int>& nums, vector < int > curr,
                        vector<vector<int>>& res, int index) {
        if (index == nums.size()) {
            res.push_back(curr);
            return;
        }
         curr.push_back(nums[index]);
        generateSubset(nums, curr , res, index + 1);
         curr.pop_back();
        generateSubset(nums, curr, res, index + 1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector < int > curr;

        generateSubset(nums, curr, res, 0);
        return res;
    }
};