class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size();
        int m = t.size();
        int j = 0;
        int i = 0;

        while (j < n && i < m) {
            if (s[j] != t[i]) {

                i++;
            } else if (s[j] = t[i]) {
                i++;
                j++;
            }
        }

        return (j == n);
    }
};