class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n = nums.size();
        int maxi = 0;
        for (int i = 0; i < n; i++) {
            unordered_set<int> st;

            // st.clear();
            int even = 0;
            int odd = 0;
            for (int j = i; j < n; j++) {
                if (!st.count(nums[j])) {
                    st.insert(nums[j]);
                    if (nums[j] % 2 == 0) {
                        even++;
                    } else {
                        odd++;
                    }
                }
                if (even == odd) {
                    int max_length = j - i + 1;
                    maxi = max(maxi, max_length);
                }
            }
        }
        return maxi;
    }
};