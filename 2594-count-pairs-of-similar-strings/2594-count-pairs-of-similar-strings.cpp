class Solution {
public:
    int similarPairs(vector<string>& words) {
        unordered_map<string, int> freq;
        int count = 0;
        for (auto& word : words) {
            vector<int> present(26, 0);
            for (char c : word)
                present[c - 'a'] = 1;

            string key;
            for (int i = 0; i < 26; ++i) {
                if (present[i])
                    key += (char)(i + 'a');
            }

            count += freq[key];
            freq[key]++;
        }

        return count;
    }
};
