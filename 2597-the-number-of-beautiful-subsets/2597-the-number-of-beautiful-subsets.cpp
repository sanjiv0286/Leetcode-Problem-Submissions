class Solution {
public:
    int res;
    int K;
    void solve(int idx, vector<int>& nums, unordered_map<int, int>& m) {
        if (idx == nums.size()) {
            res++;
            return;
        }
        // not take
        solve(idx + 1, nums, m);

        // take
        // if (m.find(nums[idx] - K) != m.end() && !m[nums[idx] + K]) {

        if (!m[nums[idx] - K] && !m[nums[idx] + K]) {
            m[nums[idx]]++;
            solve(idx + 1, nums, m);
            m[nums[idx]]--;
        }
    }

    int beautifulSubsets(vector<int>& nums, int k) {
        K = k;
        res = 0;
        int n = nums.size();
        unordered_map<int, int> m;
        solve(0, nums, m);
        return res - 1;
    }
};