
#define ll long long int

class Solution {
public:
    
    long long countSubstrings(string s, char c) {
        
        ll ct = 0, res = 0;
        // for (int i = 0; i < s.size(); i++) {
        //     if (c == s[i]) {
        //         ct++;
        //     }
        // }
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == c) {
                ct++;
                res += ct;
                // ct--;
            }
        }
        return res;
    }
};
