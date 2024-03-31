class Solution {
public:
    int numWaterBottles(int nb, int ne) {
        int total = nb ;
        int empty = nb;

        while (empty >= ne) {
            int full = empty / ne;
            total += full;
            empty = full + empty % ne;
        }

        return total;
    }
};