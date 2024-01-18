class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int j = 0;
        int n = str1.size(), m = str2.size();
        for (int i = 0; i < n && j < m; i++) {
            if (str2[j] == str1[i]) {
                j++;
            } else if ((str1[i] - 'a' + 1) % 26 + 'a' == str2[j]) {
                j++;
            }
        }
        return (j == m);
    }
};