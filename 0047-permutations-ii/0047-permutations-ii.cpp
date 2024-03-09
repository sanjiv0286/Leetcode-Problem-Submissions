
class Solution {
public:
    vector<vector<int>> res;
    void solve(vector<int>& nums, int i) {
        if (i == nums.size()) {
            res.push_back(nums);
            return;
        }
        unordered_set<int> s;
        for (int j = i; j < nums.size(); j++) {
            if (s.find(nums[j]) != s.end()) {
                continue;
            }
            s.insert(nums[j]);      // Mark nums[j] as used at position i
            swap(nums[i], nums[j]); // Swap elements to generate permutation
            solve(nums, i + 1);     // Recur for the next position
            swap(nums[i], nums[j]); // Backtrack: restore the original array
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        solve(nums, 0); // Start generating permutations from index 0
        return res;
    }
};
