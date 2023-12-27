class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res=INT_MIN;
        int max_sum=0;
        for(int i=0;i<nums.size();i++){
            max_sum= max(nums[i],max_sum+nums[i]);
            res = max(res,max_sum);
        }
        return res;
        
    }
};