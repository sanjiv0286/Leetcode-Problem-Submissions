class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
         int n = nums.size();
         vector<int>res;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto &x:m){
            if(x.second>1){
                res.push_back(x.first);
            }
        }
        return res;
    }
};
