class Solution {
public:
    bool isVowel(char c) {

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            return true;
        } else
            return false;
    }

    int maxVowels(string s, int k) {
        int n = s.size();
        int ct=0;
        for (int i = 0; i < k; i++) {
            if (isVowel(s[i])) {
                ct++;
            }
        }
        int maxi = ct;

        for (int i = k; i < n; i++) {
            if (isVowel(s[i])) {
                ct++;
            }
            if (isVowel(s[i - k])) {
                ct--;
            }
            maxi = max(maxi, ct);
        }
        return maxi;
    }
};