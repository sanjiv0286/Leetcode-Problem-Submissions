class Solution {
public:
    long long sumDigitDifferences(vector<int>& nums) {
        long long n = nums.size();
        long long ans = 0;
        vector<string> v;
        for (long long i = 0; i < n; i++) {
            v.push_back(to_string(nums[i]));
        }
        for (long long i = 0; i < v[0].size(); i++) {
            vector<long long> freq(10, 0);
            for (long long j = 0; j < n; j++) {
                freq[v[j][i] - '0']++;
            }
            // long long sum = nums.size();
            for (auto& a : freq) {
                ans += (n - a) * a;
            }
        }
        return ans / 2;
    }
};
