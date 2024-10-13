class Solution {
public:
    bool ispoweroftwo(int n) { return (n & (n - 1)) == 0; }

    int largestpoweroftwo(int t) { return pow(2, floor(log2(t))); }

    vector<int> minBitwiseArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for (auto& x : nums) {
            if (x == 2) {
                ans.push_back(-1);
            } else {
                int sum = 0;
                int t = x;
                while (t > 0) {
                    if (ispoweroftwo(t + 1)) {
                        sum += t / 2;
                        t = 0;
                    } else {
                        int val = largestpoweroftwo(t);
                        sum += val;
                        t -= val;
                    }
                }
                ans.push_back(sum);
            }
        }
        return ans;
    }
};