class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
         int n = nums.size();
        int prefix_sum[n];
        prefix_sum[0]=nums[0];
       
        for(int i=1;i<n;i++){
            prefix_sum[i] = prefix_sum[i-1]+ nums[i];
        }
        
        unordered_map<int,int>mp;
        mp.insert({0,1});
        int res=0;
        for(int i=0;i<n;i++){
            int rem = prefix_sum[i]%k;
            if(rem<0){
                rem += k;
            }
            if(mp.find(rem) != mp.end() ){
                res += mp[rem];

            }
            mp[rem]++;

        }
        return res;
        
    }
};