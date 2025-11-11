class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int zor = 0;
        bool anynonzero = false;
        for (auto& x : nums) {
            zor ^= x;
            if(zor !=0){
                anynonzero = true ;
            }
        }

        if(zor !=0){
            return n;
        }
        if(anynonzero){
            return n-1;
        }
        return 0;
    }
};