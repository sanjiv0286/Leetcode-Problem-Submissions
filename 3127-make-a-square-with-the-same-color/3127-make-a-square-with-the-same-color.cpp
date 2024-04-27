

class Solution {
public:
    bool square(vector<vector<char>>& grid) {
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                if (grid[i][j] == grid[i + 1][j] &&
                    grid[i][j] == grid[i][j + 1] &&
                    grid[i][j] == grid[i + 1][j + 1]) {
                    return true;
                }
            }
        }
        return false;
    }

    bool canMakeSquare(vector<vector<char>>& grid) {
        int b = 0, w = 0;

        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (grid[i][j] == 'B') {
                    b++;
                } else {
                    w++;
                }
            }
        }

        if (b == 9 || w == 9 || b == 0 || w == 0) {
            return true;
        }

        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                char org = grid[i][j];
                grid[i][j] = (org == 'B') ? 'W' : 'B';

                if (square(grid)) {
                    return true;
                }

                grid[i][j] = org;
            }
        }

        return false;
    }
};
