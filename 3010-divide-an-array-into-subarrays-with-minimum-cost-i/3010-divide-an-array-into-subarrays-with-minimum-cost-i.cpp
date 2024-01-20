class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n = nums.size();
         int sum =0;
        sum = sum +nums[0];
        vector<int>v(nums.begin()+1,nums.end());
        sort(v.begin(),v.end());
        sum += v[0]+v[1];
        return sum;
        
    }
};


