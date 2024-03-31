class Solution {
public:
    int numWaterBottles(int num_of_full_Bottles, int num_of_Exchange) {
        
        int ans  = num_of_full_Bottles ;
        int empty = num_of_full_Bottles;
        while(empty >= num_of_Exchange){
            int new_bottle = empty/num_of_Exchange;
            ans += new_bottle;
            empty = new_bottle+empty%num_of_Exchange;
        }
        return ans ;
    }
};