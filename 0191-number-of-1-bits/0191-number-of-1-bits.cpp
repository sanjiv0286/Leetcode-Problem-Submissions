class Solution {
public:
    int hammingWeight(int n) {

        int ct=0;

        while(n){
            ct += (n&1);
            n >>= 1;
        }

        return ct;


        
    }
};