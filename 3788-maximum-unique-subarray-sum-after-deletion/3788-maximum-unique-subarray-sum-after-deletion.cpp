class Solution {
public:
    int maxSum(vector<int>& nums) {
        int sum = 0, res = 0, ns = INT_MIN;
        unordered_set<int> s;
        for (int i = 0; i < nums.size(); i++) {
            s.insert(nums[i]);
        }
        for (auto& x : s) {
            if (x <= 0) {
                ns = max(ns, x);
                continue;
            } else if (x > 0) {
                sum += x;
            }
            
        }
        // if (sum == 0 && ns == INT_MIN) {
        //     return 0;
        // }
        return sum > 0 ? sum : ns;
    }
};
