class Solution {
public:
    string mergeAlternately(string s, string t) {
        int n = s.size();
        int m = t.size();
        int val = max(n, m);
        string temp = "";
        for (int i = 0; i < val; i++) {
            if (n != 0) {
                temp += s[i];
                --n;
            }
            if (m != 0) {
                temp += t[i];
                m--;
            }
        }
        return temp;
    }
};