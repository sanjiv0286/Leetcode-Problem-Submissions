//Approach-3 (Space Optimized Bottom Up - Converting Approach-2)

class Solution {
public:

    int rob(vector<int>& nums) {
        // memset(dp, 0, sizeof(dp));
        int n = nums.size();
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return nums[0];
        }
      int  prevprev  = 0,  prev = nums[0];
        for (int i = 2; i <= n; i++) {
            int steal = nums[i - 1] + prevprev;
            int skip = prev;
           int  temp = max(steal, skip);
            prevprev=prev;
            prev = temp;
        }

        return prev;
    }
};