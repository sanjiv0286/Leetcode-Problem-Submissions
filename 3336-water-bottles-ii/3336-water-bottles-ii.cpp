class Solution {
public:
    int maxBottlesDrunk(int nb, int ne) {
        int ans = nb;
        int empty = nb;

        while(empty>=ne){
            ans++;
            empty-= ne;
            empty++;
            ne++;
        }
        return ans;
        
    }
};