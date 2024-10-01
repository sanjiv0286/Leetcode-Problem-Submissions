class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;  // Pointer to place the next element not equal to val.
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != val) {
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};
