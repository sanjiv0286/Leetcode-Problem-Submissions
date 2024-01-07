class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& d) {
        int n = d.size();
        int maxarea=0 ;
        double maxdig =0.0;
        for(int i=0;i<n;i++){
            int area = d[i][0]*d[i][1];
            double dig = sqrt(d[i][0]*d[i][0]+d[i][1]*d[i][1]);
            if(dig>maxdig || (dig == maxdig && area > maxarea )){
                maxdig = dig;
                maxarea = area;
            }
        }
        return maxarea;
        
    }
};