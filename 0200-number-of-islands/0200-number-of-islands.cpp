class Solution {
public:
    void bfs(int i, int j, int n, int m, vector<vector<char>>& grid, int dx[],
             int dy[]) {
        queue<pair<int, int>> q;
        q.push({i, j});
        grid[i][j] = '0'; // mark visited

        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();
 
            for (int k = 0; k < 4; k++) {
                int newx = x + dx[k];
                int newy = y + dy[k];
                if (newx >= 0 && newx < m && newy >= 0 && newy < n &&
                    grid[newx][newy] == '1') {
                    grid[newx][newy] = '0'; // mark visited
                    q.push({newx, newy});
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty())
            return 0;

        int dx[] = {-1, 0, 1, 0};
        int dy[] = {0, 1, 0, -1};
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {
                    bfs(i, j, n, m, grid, dx, dy);
                    count++;
                }
            }
        }

        return count;
    }
};
