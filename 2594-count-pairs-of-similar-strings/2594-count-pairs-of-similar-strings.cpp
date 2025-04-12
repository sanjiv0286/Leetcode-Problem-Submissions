
class Solution {
public:
    int similarPairs(vector<string>& words) {
        unordered_map<string, int> freq;
        int count = 0;

        for (string word : words) {
            set<char> uniqueChars(word.begin(), word.end());
            string key = "";
            for (char c : uniqueChars) {
                key += c;
            }

            count += freq[key];
            freq[key]++;
        }

        return count;
    }
};
