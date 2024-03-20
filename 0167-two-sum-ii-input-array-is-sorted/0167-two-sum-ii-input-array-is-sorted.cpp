// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
        
//     }
// };

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int re = target - nums[i];
            if(m.find(re)!=m.end()){
                  return {m[re]+1,i+1};
            }
            m[nums[i]]=i;
        }
        return {};
        
    }
};