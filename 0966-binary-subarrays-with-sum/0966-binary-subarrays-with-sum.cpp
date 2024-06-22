class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        int n = nums.size();
        unordered_map<int, int> m;
        m[0] = 1;
        int sum = 0;
        int res = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            int rem = sum - goal;
            if (m.find(rem) != m.end()) {
                res += m[rem];
            }
            m[sum]++;
        }
        return res;
    }
};

