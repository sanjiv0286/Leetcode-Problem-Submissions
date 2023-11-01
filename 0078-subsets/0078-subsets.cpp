#include <vector>

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current_subset;
        generateSubsets(nums, 0, current_subset, result);
        return result;
    }

private:
    void generateSubsets(const vector<int>& nums, int index, vector<int>& current_subset, vector<vector<int>>& result) {
        if (index == nums.size()) {
            result.push_back(current_subset);
            return;
        }

        // Include the current element
        current_subset.push_back(nums[index]);
        generateSubsets(nums, index + 1, current_subset, result);
        current_subset.pop_back();

        // Exclude the current element
        generateSubsets(nums, index + 1, current_subset, result);
    }
};
