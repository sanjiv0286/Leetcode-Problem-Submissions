class Solution {
public:
    bool hasAlternatingBits(int n) {

        // int ans = n ^ (n >> 1);
        // return (ans > 0 && (ans & (ans + 1)) == 0);
        bitset<32>b(n);
        int hsb = log2(n);
        for(int i=0;i<hsb;i++){

            if(b[i]==b[i+1]){
                return false;
            }
        }
        return true;
        
        

    }
};
