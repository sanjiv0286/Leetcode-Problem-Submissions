class Solution {
public:
    typedef pair<pair<int, int>, int> P;
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<P> q;
        int ctfresh = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2) {
                    q.push({{i, j}, 0});
                } else if (grid[i][j] == 1) {
                    ctfresh++;
                }
            }
        }
        int drow[] = {1, 0, -1, 0};
        int dcol[] = {0, -1, 0, 1};
        int maxi = 0;
        while (!q.empty()) {
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            q.pop();
            maxi = max(maxi, t);
            for (int i = 0; i < 4; i++) {
                int nr = r + drow[i];
                int nc = c + dcol[i];
                if (nr >= 0 && nr < n && nc >= 0 && nc < m &&
                    grid[nr][nc] == 1) {
                    ctfresh--;
                    grid[nr][nc] = 2;
                    q.push({{nr, nc}, t + 1});
                }
            }
        }
        return (ctfresh == 0 ? maxi : -1);
    }
};