

class Solution {
public:
    string getSmallestString(string s) {
        string t = s;
        int n = s.size();
        for (int i = 0; i < n - 1; ++i) {
            if ((s[i] - '0') % 2 == (s[i + 1] - '0') % 2) {
                swap(s[i], s[i + 1]);
                if (s < t) {
                    t = s;
                }
                swap(s[i], s[i + 1]);
            }
        }
        return t;
    }
};