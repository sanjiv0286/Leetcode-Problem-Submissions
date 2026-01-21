class Solution {
public:
    bool ispal(string s) {
        string t = s;
        reverse(s.begin(), s.end());

        if (s == t) {
            return true;
        }
        return false;
    }

    bool isalnum(char c) {
        return (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' ||
                c >= '0' && c <= '9');
    }

    bool isPalindrome(string s) {
        string t = "";
        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                t += tolower(s[i]);
            }
        }

        if (ispal(t)) {
            return true;
        }
        return false;
    }
};