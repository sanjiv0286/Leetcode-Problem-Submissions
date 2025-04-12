class Solution {
public:
    bool squareIsWhite(string s) {
        vector<vector<int>> v(9, vector<int>(9, 0));

        for (int i = 1; i <= 8; i++) {
            for (int j = 1; j <= 8; j++) {
                v[i][j] = (i + j) % 2;
            }
        }
        int idx1 = (s[0] - 'a' + 1);
        int idx2 = s[1] - '0';
        return (v[idx1][idx2] == 1);
    }
};