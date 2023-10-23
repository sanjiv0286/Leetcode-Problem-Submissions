class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int n = nums.size();
        vector<int> sorted_nums = nums;
        sort(sorted_nums.begin(), sorted_nums.end());

        for (int i = 0; i < n; ++i) {
            if (nums == sorted_nums) {
                return i;
            }
            int last_element = nums.back();
            nums.pop_back();
            nums.insert(nums.begin(), last_element);  
        }

        return -1;
    }
};