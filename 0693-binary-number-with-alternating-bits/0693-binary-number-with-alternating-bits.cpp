class Solution {
public:
    bool hasAlternatingBits(int n) {
        unsigned int  ans = n ^ (n >> 1);
        return (ans > 0 && (ans & (ans + 1)) == 0);
    }
};