
//T.C : O(n)
//S.C : O(1)
class Solution {
public:
    int numSteps(string s) {
        int n = s.length();
        int op = 0;
        int c = 0;

        for(int i = n-1; i >= 1; i--) {
            if(((s[i] - '0') + c) % 2 == 1) { //odd
                op += 2;
                c = 1;
            } else {
                op += 1;
            }
        }

        return op + c;
    }
};