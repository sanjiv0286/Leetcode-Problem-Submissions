class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int n = nums.size();
        int num=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                num = nums[i]|nums[j];
                if((num & 1) == 0){
                    return true;
                }
                // num=0;
            }
        }
        return false;
    }
};