class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++; 
        }
        // int ct=0;
        for(auto&x:mp){
            if(x.second>=2){
               return true;
            }
        }
        return false;
        
    }
};