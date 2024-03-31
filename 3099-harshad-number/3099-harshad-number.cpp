class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = x%10+(x/10)%10+(x/100)%10;
        // int n = x;
        // while (x != 0) {
        //     sum += x % 10;
        //     x /= 10;
        // }
        
        if (x % sum == 0) {
            return sum;
        }
        else
        return -1;
    }
};