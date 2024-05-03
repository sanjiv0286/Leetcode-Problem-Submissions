class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int n = nums.size();
        unordered_set<int>s;
        for(int i=0;i<n;i++){
             s.insert(nums[i]);    
        }
        for(int i=0;i<n;i++){
            if(s.find(-(nums[i]))!=s.end()){
                int ans = nums[i];
                return ans;
            }
        }
        return -1;
        
    }
};