class Solution {
public:
   
    int rangeSum(vector<int>& nums, int n, int left, int right) {

        vector<int>v;
        for(int i=0;i<n;i++){
            int sum =0;
            for(int j=i;j<n;j++){
                sum += nums[j];
                v.push_back(sum);
            }
        }
        const  int m = 1e9+7;
        sort(v.begin(),v.end());
        int res =0;
        for(int i=left-1;i<right;i++){
            res = (res + v[i])%m;
        }
        return res;
    }
};