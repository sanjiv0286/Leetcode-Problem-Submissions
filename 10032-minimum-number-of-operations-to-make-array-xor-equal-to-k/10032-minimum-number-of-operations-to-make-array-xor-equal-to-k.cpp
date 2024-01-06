class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int xoor = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            xoor = xoor ^ nums[i];
        }
       int res = k^xoor;
        return __builtin_popcount(res);
    }
};