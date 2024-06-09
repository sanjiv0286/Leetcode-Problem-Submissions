class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        m[0] = -1;
        int sum = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            int rem = sum % k;

            if (m.find(rem) != m.end()) {
                if (i - m[rem] >= 2) {
                    return true;
                }   

            } else {
                m[rem] = i;
            }
        }
        return false;
    }
};