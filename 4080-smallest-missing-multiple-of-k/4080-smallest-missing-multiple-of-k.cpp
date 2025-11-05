class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> st(nums.begin(), nums.end());
        int n = nums.size();
        // st.insert(k);/
        int mul=0;
        for (int i = 1; i <= n; i++) {
            mul = k * i;
            // st.insert(mul);
            if (!st.count(mul)) {
                return mul;
            }
        }
        return (mul+k);
    }
};