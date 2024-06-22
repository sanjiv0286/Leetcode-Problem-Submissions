class Solution {
public:
    int minimumOperations(vector<int>& nums) {

        int n = nums.size();
        int op=0;
        for(int i=0;i<n;i++){
            if(nums[i]%3==2){
                op++;
            }
            else if(nums[i]%3==1){
                op++;
            }
        }
        return op;
        
    }
};