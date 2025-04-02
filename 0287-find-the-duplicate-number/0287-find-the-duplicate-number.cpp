class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;

        for(auto &x:nums)     {
            mp[x]++;
        }   
        for(auto &x:mp){
            if(x.second>1){
                return x.first;
            }
        }
        return -1;
    }
};