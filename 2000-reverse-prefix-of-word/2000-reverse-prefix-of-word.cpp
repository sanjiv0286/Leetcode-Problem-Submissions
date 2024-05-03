class Solution {
public:
    string reversePrefix(string s, char ch) {
        int n = s.size();
        string t = "";
        int ct = 0;
        for (int i = 0; i < n; i++) {
            t += s[i];
            if (s[i] == ch && ct == 0) {
                reverse(t.begin(), t.end());
                ct++;
            }
        }
        return t;
    }
};