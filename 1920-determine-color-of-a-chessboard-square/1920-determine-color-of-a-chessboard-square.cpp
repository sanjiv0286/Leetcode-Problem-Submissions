class Solution {
public:
    bool squareIsWhite(string s) {

        int r = s[0] - 'a'+1;
        int c = s[1] - '0';
        return (r+c)%2 == 1;
        
    }
};