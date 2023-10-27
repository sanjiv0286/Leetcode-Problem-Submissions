class Solution {
public:
void dfs (int i,int j,int n,int m , int color , int newcolor , vector<vector<int>>& image){
    if(i<0||i>=n||j<0||j>=m||image[i][j]!=color){
        return;
    }
    image[i][j]=newcolor;
    dfs(i-1,j,n,m,color,newcolor,image);
    dfs(i+1,j,n,m,color,newcolor,image);
    dfs(i,j-1,n,m,color,newcolor,image);
    dfs(i,j+1,n,m,color,newcolor,image);

}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int i, int j, int newcolor) {
        int n = image.size();
        int m = image[0].size();

       int color = image[i][j];
         if (color == newcolor) {
            return image;  
        }
       if (color != newcolor) {
            dfs(i, j, n, m, color, newcolor, image);
        }
       return image;        

        
    }
};