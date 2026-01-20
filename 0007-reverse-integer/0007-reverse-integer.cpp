class Solution {
public:
    int reverse(int x) {
        if (x == INT_MIN)
            return 0;
        string s = to_string(abs(x));
        std:: reverse(s.begin(), s.end());
        long long num = stoll(s);
        if (num > INT_MAX || num < INT_MIN) {
            return 0;
        }
        return (x > 0) ? (int)num : -(int)num;
    }
};