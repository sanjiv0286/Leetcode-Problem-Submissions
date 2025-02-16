class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        int j = 0;
        for (j = 0; j < n - 2 * k; j += 2 * k) {
            if (n - j < k) {
                reverse(s.begin() + j, s.end());
            } else {
                reverse(s.begin() + j, s.begin() + j + k);
            }
        }
        if (j < n) {
            if (n - j < k) {
                reverse(s.begin() + j, s.end());
            } else {
                reverse(s.begin() + j, s.begin()+j + k);
            }
        }
        return s;
    }
};