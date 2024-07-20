class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowsum,
                                      vector<int>& colsum) {
        int n = rowsum.size();
        int m = colsum.size();
        vector<vector<int>> res(n, vector<int>(m, 0));
        int i = 0;
        int j = 0;

        while (i < n && j < m) {
            res[i][j] = min(rowsum[i], colsum[j]);
            rowsum[i] -= res[i][j];
            colsum[j] -= res[i][j];
            if (rowsum[i] == 0) {
                i++;
            }
            if (colsum[j] == 0) {
                j++;
            }
        }
        return res;
    }
};