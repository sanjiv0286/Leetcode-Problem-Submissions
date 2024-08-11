
class Solution {
public:
    void dfs(vector<vector<int>>& grid, int row, int col) {
        if (row < 0 || row >= grid.size() || col < 0 || col >= grid[0].size() ||
            grid[row][col] == 0) {
            return;
        }

        grid[row][col] = 0; // Mark the current cell as visited

        // Explore the neighboring cells
        dfs(grid, row - 1, col); // Up
        dfs(grid, row + 1, col); // Down
        dfs(grid, row, col - 1); // Left
        dfs(grid, row, col + 1); // Right
    }
    int number_of_island(vector<vector<int>>grid, int n, int m) {
        int island = 0;
        // vector<vector<bool>> visited(n, vector<bool>(m, false));

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1) {
                    dfs(grid, i, j);
                    island++;
                }
            }
        }
        return island;
    }

    int minDays(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ct = number_of_island(grid, n, m);
        if (ct > 1 || ct == 0) {
            return 0;
        } else {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (grid[i][j] == 1) {
                        // dfs(i, j, grid, n, m);
                        grid[i][j] = 0;
                        ct = number_of_island(grid, n, m);
                        if (ct > 1 || ct == 0) {
                            return 1;
                        }
                        grid[i][j] = 1;
                    }
                }
            }
        }
        return 2;
    }
};