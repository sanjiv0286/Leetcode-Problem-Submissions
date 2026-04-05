class Solution {
public:
    int mirrorFrequency(string s) {

        vector<int> digit(10, 0);
        vector<int> alpha(26, 0);
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if(isalpha(s[i])){
                alpha[s[i]-'a']++;
            }
            else if (isdigit(s[i])){
                digit[s[i]-'0']++;
            }
            // if (s[i] >= 'a' && s[i] <= 'z') {
            //     alpha[s[i] - 'a']++;
            // } else if (s[i] >= '0' && s[i] <= '9') {
            //     digit[s[i] - '0']++;
            // }
        }
        int ans = 0;
        for (int i = 0; i < 13; i++) {
            ans += abs(alpha[i] - alpha[25 - i]);
        }
        for (int i = 0; i < 5; i++) {
            ans += abs(digit[i] - digit[9 - i]);
        }
        return ans;
    }
};