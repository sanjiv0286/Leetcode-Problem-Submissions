class Solution {
public:
    bool isStrictlyIncreasing(vector<int>& arr) {
        if (arr.size() <= 1)
            return true; 

        for (int i = 0; i < arr.size() - 1; ++i) {
            if (arr[i] >= arr[i + 1]) {
                return false;
            }
        }
        return true;
    }

    int incremovableSubarrayCount(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        if (n == 1) {
            return 1;
        }
        set<int> st;
        for (int i = 0; i < n; i++) {
            st.insert(nums[i]);
        }
        if (st.size() == 1) {
            return 3;
        }
        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                vector<int> remaining;

                for (int k = 0; k < i; ++k) {
                    remaining.push_back(nums[k]);
                }

                for (int k = j + 1; k < n; ++k) {
                    remaining.push_back(nums[k]);
                }

                if (isStrictlyIncreasing(remaining)) {
                    count++;
                }
            }
        }

        return count;
    }
};
