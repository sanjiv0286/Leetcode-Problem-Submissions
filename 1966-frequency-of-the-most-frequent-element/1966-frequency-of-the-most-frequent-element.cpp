#define ll long long int
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        ll n = nums.size();
        sort(nums.begin(), nums.end());
        ll res = 0;
        ll l = 0;
        ll cs = 0;
        for (ll r = 0; r < n; r++) {
            ll ws = (r - l + 1) * nums[r];
            cs = cs + nums[r];
            ll op = ws - cs;
            if (op > k) { //shrinnk
                cs -= nums[l];
                l++;
                op = (ll)(r - l + 1) * nums[r] - cs;
            }
            res = max(res, r - l + 1);
        }
        return (int)res;
    }
};