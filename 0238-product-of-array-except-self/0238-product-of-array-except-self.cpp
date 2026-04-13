class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int ct = 0;
         long long prod = 1;
        for (int i = 0; i < n; i++) {
            if(nums[i]!=0)
            prod *= nums[i];
        }
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                ct++;
            }
        }
        vector<int> v(n, 0);
        if (ct > 1) {
            return v;
        }
        else if(ct == 1) {
            for(int i=0;i<n;i++){
                if(nums[i]==0){
                    v[i]=prod;
                    return v;
                }
            }
        }
       
        vector<int> res;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0)
                res.push_back(prod / nums[i]);
        }
        return res;
    }
};