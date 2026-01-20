class Solution {
public:
    int reverseBits(int n) {

        int res =0;

        for(int bit = 31 ;bit>=0;bit --){
            int right_most_bit = (n&1);
            res += right_most_bit<<bit;
            n >>= 1;
        }
        return res;

        // tc = O(32)
        // sc = O(1)

        
    }
};