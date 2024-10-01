class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());
        int index = 0;
        for (const int& num : s) {
            nums[index++] = num;
        }

        return s.size();
    }
};
