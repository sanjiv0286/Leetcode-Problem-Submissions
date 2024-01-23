class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0 || (n & (n - 1)) != 0) {
            return false;  // Check if n is a power of 2
        }
        return isPowerOfFourHelper(n);
    }

private:
    bool isPowerOfFourHelper(int n) {
        if (n == 1) {
            return true;
        } else if (n % 4 == 0) {
            return isPowerOfFourHelper(n / 4);
        } else {
            return false;
        }
    }
};
