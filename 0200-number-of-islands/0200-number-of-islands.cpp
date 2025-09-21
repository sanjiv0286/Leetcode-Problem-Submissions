
class Solution {
public:
    void dfs(int i, int j, int n, int m, vector<vector<char>>& grid, int dx[],
             int dy[]) {
        grid[i][j] = '0';
        for (int k = 0; k < 4; k++) {
            int newi = i + dx[k];
            int newj = j + dy[k];
            if (newi >= 0 && newi < m && newj >= 0 && newj < n &&
                grid[newi][newj] == '1') {
                dfs(newi, newj, n, m, grid, dx, dy);
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty()) {
            return 0;
        }
        int dx[] = {-1, 0, 1, 0};
        int dy[] = {0, 1, 0, -1};
        int m = grid.size();
        int n = grid[0].size();
        int ct = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {
                    dfs(i, j, n, m, grid, dx, dy);
                    ct++;
                }
            }
        }
        return ct;
    }
};