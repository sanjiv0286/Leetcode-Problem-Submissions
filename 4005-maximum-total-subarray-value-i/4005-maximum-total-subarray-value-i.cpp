#define ll long long
class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        ll mini = *min_element(nums.begin(),nums.end());
        ll maxi = *max_element(nums.begin(),nums.end());
        ll ans = (maxi - mini );
        ll res = k*ans;
        return res;
        
    }
};