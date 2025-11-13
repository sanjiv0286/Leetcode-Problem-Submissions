class Solution {
public:
    long long perfectPairs(vector<int>& nums) {
        int n = nums.size();
        
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
            v[i] = llabs(nums[i]);
        
        sort(v.begin(), v.end());
        
        long long ans = 0;
        
        for (int i = 0; i < n; i++) {
            long long limit = 2 * v[i];
            int j = upper_bound(v.begin(), v.end(), limit) - v.begin();
            ans += (j - i - 1);
        }
        
        return ans;
    }
};
