class Solution {
public:
    int hammingWeight(int n) {

        int ct=0;

        while(n){
            n  = n &(n-1);
             ct++;
        }

        return ct;


        
    }
};