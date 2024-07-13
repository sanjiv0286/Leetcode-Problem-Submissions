class Solution {
public:
    bool ans(int n, int m, string s, string t) {
        if (n == 0) {
            return true;
        }
        if (m == 0) {
            return false;
        }
        if (s[n - 1] == t[m - 1]) {
            return ans(n - 1, m - 1, s, t);
        } else {
            return ans(n, m - 1, s, t);
        }
    }

    bool isSubsequence(string s, string t) {
        int n = s.size();
        int m = t.size();

        return ans(n, m, s, t);
    }
};