class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        if(n==0){
            return 0;
        }
        int ct = 1;
        int res = 1;
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1] + 1) {
                ct++;
                res = max(res, ct);
            } else if (nums[i] != nums[i - 1]) {
                ct = 1;
            }
        }
        return res;
    }
};