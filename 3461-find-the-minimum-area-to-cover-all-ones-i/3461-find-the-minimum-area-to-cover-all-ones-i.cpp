class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        
        int r = grid.size();
        int c = grid[0].size();
        int min_row = r;int max_row = -1;int min_col=c;int max_col=-1;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==1){
                     min_row = min(i,min_row);
                     max_row=max(max_row,i);
                     min_col=min(j,min_col);
                     max_col=max(max_col,j);
                }
            }
        }
         int h = max_row - min_row + 1;
        int w = max_col - min_col + 1;
        return h * w;
    }
};