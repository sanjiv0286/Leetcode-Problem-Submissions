class Solution {
public:
    long long dp[100000][2];

    long long solve(long long n, bool idxtype, vector<int>& nums, long long i) {
        if (i >= nums.size()) {
            return 0;
        }
        if (dp[i][idxtype] != -1) {
            return dp[i][idxtype];
        }

        long long skip = solve(n - 1, idxtype, nums, i + 1);
        long long val = nums[i];
        if (idxtype == false) {
            val = -val;
        }

        long long take = solve(n, !idxtype, nums, i + 1) + val;

        return dp[i][idxtype] = max(take, skip);
    }

    long long maxAlternatingSum(vector<int>& nums) {

        long long n = nums.size();
        memset(dp, -1, sizeof(dp));
        return solve(n, true, nums, 0);
    }
};

// class Solution {
// public:
//    vector<vector<long long>> dp;

//     long long f(vector<int> &v, int i, int idxType){
//         if(i == v.size()) return  0;
//         if(dp[i][idxType] != -1) return dp[i][idxType];

//         long long ans = f(v, i + 1, idxType);

//         if(idxType == 0){
//             ans = max(ans, v[i] + f(v, i + 1, 1 - idxType));
//         }
//         else {
//             ans = max(ans, f(v, i + 1, 1 - idxType) - v[i]);
//         }

//         return dp[i][idxType] = ans;
//     }

//     long long maxAlternatingSum(vector<int>& nums) {
//         int n = nums.size();
//         dp.assign(n + 1, vector<long long>(3, -1));
//         return f(nums, 0, 0);
//     }
// };