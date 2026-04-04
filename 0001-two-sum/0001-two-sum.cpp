class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();
        unordered_map<int,int>mp;

        for(int i=0;i<n;i++){
            mp[nums[i]]=i;
        }

        for(int i=0;i<n;i++){
            int com = target - nums[i];

            if(mp.count(com)&& mp[com]!=i){
                return {i,mp[com]};
            }
        }
        return {};
        
    }
};