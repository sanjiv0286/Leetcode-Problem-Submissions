class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans = __builtin_popcountll(n);
        if(ans==1){
            return true;
        }
        return false;
    }
};