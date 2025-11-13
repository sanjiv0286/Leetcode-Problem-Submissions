class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > 9LL * num) {
            return "";
        }
        string res;

        for (int i = 0; i < num; i++) {
            for (int d = 9; d >= 0; d--) {
                int remaining_sum = sum - d;
                int max_possible = 9LL * (num - i - 1);

                if (remaining_sum >= 0 && remaining_sum <= max_possible) {
                    res.push_back('0' + d);
                    sum -= d;
                    break;
                }
            }
        }
        if (sum != 0) {
            return "";
        }
        return res;
    }
};