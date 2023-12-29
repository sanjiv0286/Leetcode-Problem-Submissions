class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // int ct=0;
        unordered_map<int,int>m;
        int n=nums.size();
        // sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto &x:m){
            if(x.second >=2){
                return true;
            }
        }
        return false;
    }
};