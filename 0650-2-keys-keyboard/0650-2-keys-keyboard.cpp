class Solution {
public:
    int minSteps(int n) {
        int curr = 1;
        int prev = 0;
        int steps = 0;

        while (curr < n) {
            if (n % curr == 0) {

                prev = curr;  // copy
                curr += prev; // paste

                steps += 2; // 2 steps

            } else {

                curr += prev; // paste
                steps++;      // 1 step
            }
        }
        return steps;
    }
};