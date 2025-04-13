class Solution {
public:
    string smallestPalindrome(string s) {
        map<char, int> mp;
        for (auto& x : s) {
            mp[x]++;
        }
        string first = "", middle = "";
        for (auto& [x, y] : mp) {
            if (y % 2 == 1 && middle.empty()) {
                middle = x;
                y--;
            }
            first += string(y / 2, x);
        }
        string second = first;
        reverse(second.begin(), second.end());
        return first + middle + second;
    }
};
