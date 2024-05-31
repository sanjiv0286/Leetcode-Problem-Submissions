// tc : O(n^2)  - > not optimized solution 

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        int ct;
        for (int i = 0; i < n; i++) {
              ct = 0;
            for (int j = 0; j < n; j++) {
              
                if (nums[i] == nums[j]) {
                    ct++;
                }
            }
            if (ct % 2 != 0) {
                res.push_back(nums[i]);
            }
        }
        return res;
    }
};