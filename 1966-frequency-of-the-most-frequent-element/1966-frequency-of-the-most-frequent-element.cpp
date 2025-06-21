class Solution {
public:
    int bsearch(vector<int>& nums, int n, int k, int i,
                vector<long long>&prefix) {
        int l = 0;
        int r = i;
        int res = 0;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            int ct = i - mid + 1;
            long long windsum = (long long) ct * nums[i];
            long long currsum = prefix[i] - prefix[mid] + nums[mid];
            long long opr = windsum - currsum;
            if (opr > k) {
                l = mid + 1;
            } else {
                res = mid;
                r = mid - 1;
            }
        }
        return i - res + 1;
    }
    int maxFrequency(vector<int>& nums, int k) {
        int n = nums.size();
        vector<long long> prefix(n);
        prefix[0]= nums[0];
        sort(nums.begin(), nums.end());
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i-1] + nums[i];
        }
        int res = 1;
        for (int i = 0; i < n; i++) {
            int freq = bsearch(nums, n, k, i, prefix);
            res = max(res, freq);
        }
        return res;
    }
};