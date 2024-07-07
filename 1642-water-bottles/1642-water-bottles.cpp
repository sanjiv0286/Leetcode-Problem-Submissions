class Solution {
public:
    int numWaterBottles(int nb, int numex) {
        int ans = nb ;
        int empty = nb;
        while(empty>=numex){
            ans += empty/numex;
            empty = empty/numex+empty%numex;;
        }
        return ans;
    }
};