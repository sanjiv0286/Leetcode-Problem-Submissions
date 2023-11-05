class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int n = grid[0].size();
        bool chap ;
        for(int i=0;i<n;i++){
            chap = true;
            for(int j=0;j<n;j++){
                if(grid[j][i]==1 && i!=j){
                    chap = false ;
                    break;
                }
            }
            if(chap){
                return i;
            }
            
        }
        return-1;
        
    }
};