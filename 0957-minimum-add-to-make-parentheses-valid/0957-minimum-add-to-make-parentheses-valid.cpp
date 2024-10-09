class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.size();
        int o =0;
        int c=0;
        for (auto& x : s) {
            if (x == '(') {
                o++;
            } else {
                if (o > 0) {
                    o--;
                } else {
                    c++;
                }
            }
        }
        return o + c;
    }
};