class Solution {
public:
    
 
    int minCost(int n) {
        int cost = n*(n-1);
         cost = cost/2;

        return cost;
    }
};