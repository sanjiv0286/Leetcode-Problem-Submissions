class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        int n = nums.size();
        for(auto &x:nums){
            x = abs(x);
        }

        sort(nums.begin(),nums.end());

        long long int ans =  1LL * nums[n-2]*nums[n-1]*1e5;
        return ans;
        
    }
};