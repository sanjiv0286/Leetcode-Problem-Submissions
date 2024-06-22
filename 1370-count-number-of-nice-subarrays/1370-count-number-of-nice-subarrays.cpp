class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        for(auto &it:nums){
            it%=2;
        }
        vector<int> pref(nums.size()+1,0);
        pref[0]=1;
        int s = 0 , ans =0;
        for(int i=0 ;i<nums.size();i++){
            s += nums[i];
            ans += (s>=k) ? pref[s-k]:0;
            pref[s]++;
        }
        return ans;
    }
};