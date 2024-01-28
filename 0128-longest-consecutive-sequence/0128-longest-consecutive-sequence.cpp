class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(nums.empty() ){
            return 0;
        }
        if(nums.size()==1){
            return 1;
        }
        sort(nums.begin(),nums.end());
        int ct=1,res=0;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
                ct++;
            }
            else if(nums[i]==nums[i-1]){
                ct=ct;
            }
            else{
                ct=1;
            }
            res = max(res,ct);
        }
        return res;
        
    }
};