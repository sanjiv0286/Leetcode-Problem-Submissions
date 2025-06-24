class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0) {
            return false;
        }
        string s = to_string(x);
        int l = 0, r = s.size() - 1;
        while (l < r) {
            if (s[l] != s[r]) {
                return false;
            } else {
                l++;
                r--;
            }
        }
        return true;
    }
};