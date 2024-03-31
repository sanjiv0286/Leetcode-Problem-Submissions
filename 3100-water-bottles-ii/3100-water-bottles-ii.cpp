class Solution {
public:
    int maxBottlesDrunk(int no_of_full_bottles, int numExchange) {
        
        int ans = no_of_full_bottles;
        int empty = no_of_full_bottles;
        
        while(empty >= numExchange){
           
            ans++;
            empty-= numExchange;
            empty++;
            numExchange++;
        }
        return ans ;
        
    }
};