class Solution {
public:
    int appendCharacters(string s, string t) {
        int n = s.size();
        int m = t.size();
        int j = 0;
        int ans = 0;
        for (int i = 0; i < n && j<m; i++) {
            if (t[j] == s[i]) {
                j++;
            }
        }
        return m - j;
    }
};