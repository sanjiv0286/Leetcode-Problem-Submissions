class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        // move all the nonzero elements advance
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] ) {
                nums[j++] = nums[i];
            }
        }
        for (int k =j;k < nums.size(); k++) {
            nums[k] = 0;
        }
    }
};