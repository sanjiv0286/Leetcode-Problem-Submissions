class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> res;
        int n = nums1.size();
        int m = nums2.size();
        for (int i = 0; i < n; i++) {
            res.push_back(nums1[i]);
        }
        for (int i = 0; i <m; i++) {
            res.push_back(nums2[i]);
        }
        sort(res.begin(), res.end());
        int  size = res.size();
        double ans =0;
        if (res.size() % 2 == 0) {
             ans = res[size / 2] + res[(size / 2) - 1];
             return ans/2;
        }
        else{
            ans =  res[size/2];
            return ans;
            
        }
        
    }
};