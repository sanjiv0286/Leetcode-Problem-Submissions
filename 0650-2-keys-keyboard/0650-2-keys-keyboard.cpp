// dp bottom up +greedy


class Solution {
public:
    int dp[1001];
    int minSteps(int n) {

        dp[1] = 0;
        dp[2] = 2;

        for (int i = 3; i <= n; i++) {
            int factor = i / 2;
            while (factor >= 1) {
                if (i % factor == 0) {
                    int steps_to_print_factor_as = dp[factor];
                    int copy = 1;
                    int pasted = (i / factor) - 1;
                    dp[i] = steps_to_print_factor_as + copy + pasted;
                    break;
                } else {
                    factor--;
                }
            }
        }
        return dp[n];
    }
};