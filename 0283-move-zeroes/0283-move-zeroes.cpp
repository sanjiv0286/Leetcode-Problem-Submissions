class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
               nums.erase(nums.begin()+i);
               nums.push_back(0);
            }
        }
        
    }
};