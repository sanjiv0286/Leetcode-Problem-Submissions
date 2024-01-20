class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        while (s[0] == ' ') {
            s.erase(0, 1);
        }
        reverse(s.begin(), s.end());
        while (s[0] == ' ') {
            s.erase(0, 1);
        }
        n = s.length();
        string t;
        int start = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == ' ') {
                while (s[i + 1] == ' ') {
                    s.erase(i + 1, 1);
                }

                reverse(s.begin() + start, s.begin() + i);
                start = i + 1;
            }
        }
        reverse(s.begin() + start, s.end());
        return s;
    }
};