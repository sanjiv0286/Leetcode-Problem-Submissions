class Solution {
public:
    void dfs(int r, int c, int n, int m, vector<vector<char>>& grid) {

        if (r < 0 || r > n - 1 || c < 0 || c > m - 1 || grid[r][c] == '0') {
            return;
        }
        grid[r][c] = '0';
        dfs(r - 1, c, n, m, grid);
        dfs(r + 1, c, n, m, grid);
        dfs(r, c + 1, n, m, grid);
        dfs(r, c - 1, n, m, grid);
    }

    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty()) {
            return 0;
        }
        int ct = 0;
        int n = grid.size();
        int m = grid[0].size();
        for (int r = 0; r < n; r++) {
            for (int c = 0; c < m; c++) {
                if (grid[r][c] == '1') {
                    ct++;
                    dfs(r, c, n, m, grid);
                }
            }
        }
        return ct;
    }
};