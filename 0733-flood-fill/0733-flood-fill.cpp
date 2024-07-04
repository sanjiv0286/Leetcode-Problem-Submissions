class Solution {
public:
    void dfs(vector<vector<int>>& image, int r, int c, int currColor, int given_color,
             int n, int m) {
        if (r < 0 || r > n - 1 || c < 0 || c > m - 1 || image[r][c] != currColor) {
            return;
        }
        image[r][c] = given_color;
        dfs(image, r - 1, c, currColor, given_color, n, m);
        dfs(image, r + 1, c, currColor, given_color, n, m);
        dfs(image, r, c - 1, currColor, given_color, n, m);
        dfs(image, r, c + 1, currColor, given_color, n, m);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int given_color) {
        if (image.empty()) {
            return image;
        }
        int n = image.size();
        int m = image[0].size();
        int currColor = image[sr][sc];
        if (currColor != given_color) {
            dfs(image, sr, sc, currColor, given_color, n, m);
        }
        return image;
    }
};