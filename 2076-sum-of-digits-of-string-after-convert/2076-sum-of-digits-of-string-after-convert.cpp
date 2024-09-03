class Solution {
public:
    int getLucky(string s, int k) {
        string numStr = "";

        for (char c : s) {
            int val = c - 'a' + 1;
            numStr += to_string(val);
        }

        while (k > 0) {
            int sum = 0;
            for (char digit : numStr) {
                sum += digit - '0';
            }
            numStr = to_string(sum);
            k--;
        }

        return stoi(numStr);
    }
};
