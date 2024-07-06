class Solution {
public:
    int passThePillow(int n, int time) {

        int round = 2 * (n - 1);
        int x = time % round;
        return 1 + ((x < n)? x : (round - x));
    }
};