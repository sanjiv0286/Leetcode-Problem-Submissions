// without sorting 
class Solution {
public:

    string generate(string &s) {
        // int count[26] = {0};
        vector<int>freq(26,0);
        for(char &ch : s) {
            freq[ch-'a']++;
        }

        string new_s;

        for(int i = 0; i<26; i++) {

            if(freq[i] > 0) {
                new_s += string(freq[i], i+'a');
            }
        }

        return new_s;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for(string &str : strs) {
            string s = generate(str);

            mp[s].push_back(str);
        }

        vector<vector<string>> result;
        for(auto &x : mp) {
            result.push_back((x.second));
        }

        return result;

    }
};

