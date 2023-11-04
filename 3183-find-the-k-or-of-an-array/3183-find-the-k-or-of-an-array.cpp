class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
            int ct;
            int ans =0;

        for(int i=0;i<32;i++)
        {
            ct=0;
            for(int j=0;j<nums.size();j++){
                if((nums[j]&(1<<i))!=0)
                ct++;
            }
            if(ct>=k){
                ans = ans + (1<<i);
            }
        }
        return ans;   
    }
};