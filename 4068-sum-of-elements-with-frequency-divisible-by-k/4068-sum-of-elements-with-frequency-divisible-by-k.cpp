class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {

        unordered_map<int, int> mp;

        for (auto& x : nums) {
            mp[x]++;
        }
        int sum = 0;
        for (auto& x : mp) {
            if (x.second % k == 0) {
                sum += x.first * x.second;
                // sum *= x.second;
            }
        }
        return sum;
    }
};