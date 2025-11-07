class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int bit_or = 0;
        int n = nums.size();
        bool flag = false;
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0){
                bit_or |= nums[i];
                flag = true;
            }
        }
        if(flag == false){
            return 0;
        }
        else{
            return bit_or;
        }
    }
};