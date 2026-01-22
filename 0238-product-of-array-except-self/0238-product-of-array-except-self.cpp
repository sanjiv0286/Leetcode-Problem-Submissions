class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int ct =0;
        long long prod =1;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                prod *= nums[i];
            }
            else{
                ct++;
            }
        }
        if(ct>1){
            return vector<int>(n,0);
        }

        for(int i=0;i<n;i++){
            if(ct==1){
                 ans[i]=(nums[i]==0) ? prod:0;
            }
            else{
                ans[i]= prod/nums[i];
            }
        }
        return ans;

    }
};
