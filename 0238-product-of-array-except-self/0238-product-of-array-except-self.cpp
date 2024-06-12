class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();

        vector<int> res(n, 1);

        // * create left product array
        for (int i = 1; i < n; i++) {
            res[i] = res[i - 1] * nums[i - 1];
        }
        // Create right product and combine with left product
        int right_product = 1;
        for (int i = n - 1; i >= 0; i--) {
            res[i] *= right_product;
            right_product *= nums[i];
        }
        return res;

    }
};