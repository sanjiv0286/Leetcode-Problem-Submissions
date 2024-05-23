// class Solution {
// public:
//     vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>&
//     queries) {
//         int n = nums.size();
//         vector<bool> res;
//         vector<bool> diff_parity(n-1, false);

//         // Precompute whether adjacent elements have different parity
//         for (int i = 0; i < n-1; ++i) {
//             diff_parity[i] = (nums[i] % 2 != nums[i + 1] % 2);
//         }

//         // Process each query
//         for (const auto& q : queries) {
//             int from = q[0], to = q[1];
//             bool is_special = true;

//             // Check all pairs in the range [from, to)
//             for (int i = from; i < to; ++i) {
//                 if (!diff_parity[i]) {
//                     is_special = false;
//                     break;
//                 }
//             }

//             res.push_back(is_special);
//         }

//         return res;
//     }
// };
class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums,
                                vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> prefix_sum(n + 1, 0);

        // Calculate the prefix sum of parity changes
        for (int i = 1; i <= n; ++i) {
            prefix_sum[i] = prefix_sum[i - 1] +
                            (nums[i - 1] % 2 != nums[i % n] % 2 ? 1 : 0);
        }

        vector<bool> res;

        // Process each query
        for (const auto& q : queries) {
            int from = q[0], to = q[1];
            int parity_changes = prefix_sum[to] - prefix_sum[from];
            // Check if the number of parity changes is equal to the size of the subarray minus one
            res.push_back(parity_changes == to - from);
        }

        return res;
    }
};