#include <unordered_map>

class Solution {
public:
    string customSortString(string order, string s) {
        std::unordered_map<char, int> freq;
        string result = "";

        // Count frequency of characters in string s
        for (char c : s) {
            freq[c]++;
        }

        // Append characters in the order specified in order string
        for (char c : order) {
            if (freq.find(c) != freq.end()) {
                result += string(freq[c], c);
                freq.erase(c);
            }
        }

        // Append remaining characters
        for (auto& pair : freq) {
            result += string(pair.second, pair.first);
        }

        return result;
    }
};
