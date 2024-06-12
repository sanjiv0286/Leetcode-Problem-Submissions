class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int ct=0;
        for(int i=0;i<n;i++){
            ct=0;
           for(int j=0;j<n;j++){
            if(nums[i]==nums[j]){
                ct++;
            }
           }
           if(ct>n/2){
            return nums[i];
           }
        }
        return -1;
        
    }
};