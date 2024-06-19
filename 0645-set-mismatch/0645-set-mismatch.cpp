
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> res(2); // to store the result
        int n = nums.size();
        int sum = accumulate(nums.begin(), nums.end(), 0);
        sort(nums.begin(), nums.end());

        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                res[0] = nums[i]; // the duplicated number
                break;
            }
        }

        int expected_sum = n * (n + 1) / 2;
        res[1] = expected_sum - (sum - res[0]);

        return res;
    }
};
