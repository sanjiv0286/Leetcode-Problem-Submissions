class Solution {
public:
    int trap(vector<int>& arr) {
        int res =0;
        int n = arr.size();
        for(int i=0;i<n-1;i++){
            int lmax=arr[i];
            int rmax = arr[i];
            for(int k=0;k<i;k++){
                lmax = max(lmax,arr[k]);
            }
            for(int j=i+1;j<n;j++){
                rmax = max(rmax,arr[j]);
            }
            res += min(lmax,rmax)-arr[i];
        }
        return res;
        
    }
};