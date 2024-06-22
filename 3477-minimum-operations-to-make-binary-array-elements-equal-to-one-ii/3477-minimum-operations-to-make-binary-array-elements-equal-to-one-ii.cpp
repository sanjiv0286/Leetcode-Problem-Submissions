class Solution {
public:
    int minOperations(std::vector<int>& nums) {
        // int operations = 0;
        // int n = nums.size();
        // for (int i = 0; i < n; ++i) {
        //     if (nums[i] == 0) {
        //         for (int j = i; j < n; ++j) {
        //             nums[j] = 1 - nums[j];
        //         }
        //         operations += 1;
        //     }
        // }
        // return operations;
        // *******************************
        int operations = 0;
        int n = nums.size();
        bool flip = false; 
        for (int i = 0; i < n; ++i) {
            if ((nums[i] == 0) == !flip) {
                
                operations++;
                flip = !flip;
            }
        }
        return operations;
    }
};