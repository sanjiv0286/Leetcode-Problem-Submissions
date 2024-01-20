class Solution {
public:
    bool isSorted(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                return false;
            }
        }
        return true;
    }

    bool canSortArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(nums.begin(), nums.end());
        sort(v.begin(), v.end());
        if (nums == v) {
            return true;
        }
        vector<int> count;
        for (int i = 0; i < n; i++) {
            int x = __builtin_popcount(nums[i]);
            count.push_back(x);
        }
        int k = 0;
        // while(k<n){
        for (int k = 0; k < n; ++k) {
            for (int i = 1; i < n; i++) {
                if (count[i] == count[i - 1] && nums[i] < nums[i - 1]) {
                    swap(nums[i], nums[i - 1]);
                }
            }
            if (isSorted(nums)) {
                return true;
            }
            // k++;
        }

        return false;
    }
};
