class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        int m = grid.size();
        int n = grid[0].size();

        queue<pair<pair<int, int>, int>> q;

        int cntfresh = 0, ct = 0, t = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 2) {
                    q.push({{i, j}, 0});
                }
                if (grid[i][j] == 1) {
                    cntfresh++;
                }
            }
        }
        int max_time = 0;
        int drow[] = {-1, 0, +1, 0};
        int dcol[] = {0, 1, 0, -1};
        while (!q.empty()) {
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            q.pop();
            max_time = max(max_time, t);
            for (int i = 0; i < 4; i++) {
                int nrow = r + drow[i];
                int ncol = c + dcol[i];
                if (nrow >= 0 && nrow < m && ncol >= 0 && ncol < n &&
                    grid[nrow][ncol] == 1) {
                    ct++;
                    grid[nrow][ncol] = 2;
                    q.push({{nrow, ncol}, t + 1});
                }
            }
        }
        if (ct == cntfresh) {
            return max_time;
        } else {
            return -1;
        }
    }
};