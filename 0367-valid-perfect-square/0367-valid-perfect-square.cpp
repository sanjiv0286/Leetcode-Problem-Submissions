class Solution {
public:
    bool isPerfectSquare(int num) {

        int l = 1;
        int r = num / 2;
        if (num == 1) {
            return true;
        }
        while (l <= r) {
            int mid = (l + r) / 2;
            long long int sq = (long long int)mid * mid;

            if (sq == num) {
                return true;
            }

            else if (sq < num) {
                l++;
            } else {
                r--;
            }
        }
        return false;
    }
};