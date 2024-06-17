class Solution {
public:
    bool judgeSquareSum(int c) {

        long long int l = 0;
        long long int r = sqrt(c);

        while (l <= r) {
            long long int first = l * l;
            long long int sec = r * r;

            if (first + sec == c) {
                return true;
            }
            else if (first+sec>c){
                r--;
            } else {
                l++;
            }
        }
        return false;
    }
};