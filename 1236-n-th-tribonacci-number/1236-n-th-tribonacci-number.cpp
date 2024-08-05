class Solution {
public:

    int solve(vector<int>&dp,int n){
        if(n==0) return 0;
        if(n==1||n==2) return 1;
        if(dp[n]!=-1){
            return dp[n];
        }
        return dp[n]=solve(dp,n-1)+solve(dp,n-2)+solve(dp,n-3);
    }

    int tribonacci(int n) {
        vector<int>dp(n+1,-1);
        if(n==0) return 0;
        if(n==1||n==2) return 1 ;
        return solve(dp,n);
    }
};