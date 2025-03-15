class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int,int>mp;
        for(auto &x:nums){
            for(auto &y:x){
                mp[y]++;
            }
        }
        int n = nums.size();
        vector<int>res;
        for(auto &x:mp){
            if(x.second==n){
                res.push_back(x.first);
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};