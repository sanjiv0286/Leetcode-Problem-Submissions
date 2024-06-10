class Solution {
public:
    void dfs(vector<vector<int>>& image, int r, int c, int color, int newColor,
             int n, int m) {
        if (r < 0 || r > n - 1 || c < 0 || c > m - 1 ||
            image[r][c] != color) {
            return;
        }

        image[r][c] = newColor;

        dfs(image, r - 1, c, color, newColor, n, m);
        dfs(image, r + 1, c, color, newColor, n, m);
        dfs(image, r, c - 1, color, newColor, n, m);
        dfs(image, r, c + 1, color, newColor, n, m);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int new_color) {
        if (image.empty()) {
            return image;
        }
        int Color = image[sr][sc];
        // int new_color = color;
        int n = image.size();
        int m = image[0].size();
       if(Color!=new_color){
             dfs(image, sr, sc, Color, new_color, n, m);
        }
        return image;
    }
};