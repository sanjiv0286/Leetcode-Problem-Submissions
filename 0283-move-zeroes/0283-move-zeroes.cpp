class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ct=0;
        vector<int>v;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                v.push_back(nums[i]);
            }
            else{
                ct++;
            }
        }
        for(int i=0;i<n-ct;i++){
            nums[i]=v[i];
        }
        for(int i=n-ct;i<n;i++){
            nums[i] = 0;
        }
        
    }
};