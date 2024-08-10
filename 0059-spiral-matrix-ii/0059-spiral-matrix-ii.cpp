class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n,vector<int>(n,0));
        int row = n;
        int col = n;
        int num =1;
        int top = 0, left = 0, bottom = row - 1, right = col - 1;
        while (top <= bottom && left <= right) {
            for (int i = left; i <= right; i++) {
                res[top][i]=num++;
            }
            top++;
            for (int i = top; i <= bottom; i++) {
                res[i][right] = num++;
                // res.push_back(res[i][right]);
            }
            right--;
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    // res.push_back(matrix[bottom][i]);
                    res[bottom][i]=num++;
                }
                bottom--;
            }
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    // res.push_back(matrix[i][left]);
                    res[i][left]=num++;
                }
                left++;
            }
        }
        return res;
    }
};

