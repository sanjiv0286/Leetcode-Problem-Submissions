class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int n = nums.size();
        // int ct =0;
        int ans,res=0;
        for(int i=0;i<n;i++){
            ans =0;
            for(int j=i;j<n;j++){
                int mini = min(nums[i],nums[j]);
                if(abs(nums[i]-nums[j])<=mini){
                    // ct++;
                     ans = nums[i]^nums[j];
                     res = max(res,ans);
                }

            }
        }
        // return ct;
        return res;
    }
};