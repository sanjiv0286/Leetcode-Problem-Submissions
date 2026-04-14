class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        sort(nums.begin(),nums.end());
        int ct=1;
        int maxi = 0;
        for(int i=0;i<n-1;i++){
            if(nums[i+1]==nums[i]+1){
                ct++;
                maxi = max(maxi,ct);
            }
            else if(nums[i]==nums[i+1]){
                continue;
            }
            else{
                ct=1;
            }

        }
        return maxi;
        
    }
};