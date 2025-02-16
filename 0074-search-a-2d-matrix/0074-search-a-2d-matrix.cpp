class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int target) {
        int n = v.size();
        int m = v[0].size();

        int l=0;
        int r = n*m-1;

        while(l<=r){
            int mid = (l+r)/2;
            if(v[mid/m][mid%m]==target){
                return true;
            }
            else if(v[mid/m][mid%m]<target){
                l++;
            }
            else {
                r--;
            }
        }
        return false;

        
    }
};