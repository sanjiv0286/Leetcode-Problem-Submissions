class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {

        // rowflips + colflips
        int rowflips = 0, colflips = 0;
        int m = grid.size();
        int n = grid[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n / 2; j++) {
                if (grid[i][j] != grid[i][n - j - 1]) {
                    rowflips++;
                }
            }
        }
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < m / 2; i++) {
                if (grid[i][j] != grid[m - i - 1][j]) {
                    colflips++;
                }
            }
        }
        return min(colflips , rowflips);
    }
};