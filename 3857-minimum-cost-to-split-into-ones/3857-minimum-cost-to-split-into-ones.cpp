// class Solution {
// public:
//     int minCost(int n) {
//         int cost = n * (n - 1);
//         cost = cost / 2;

//         return cost;
//     }
// };

class Solution {
public:
    int dp[501];
    int solve(int n) {
        if (n == 1)
            return 0;
        if(dp[n]!=-1){
            return dp[n];
        }
        return dp[n]=solve(n - 1) + (n - 1);
    }
    int minCost(int n) {
        memset(dp,-1,sizeof(dp));
        return solve(n);
    }
};