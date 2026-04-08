class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> res;

        for (auto& x : strs) {
            string new_str = generate(x);
            mp[new_str].push_back(x);
        }

        for (auto& x : mp) {
            res.push_back(x.second);
        }
        return res;
    }

private:
    string generate(string& s) {
        vector<int>freq(26,0);
        for(auto &x:s){
            freq[x-'a']++;
        }
        string t;
        for(int i=0;i<26;i++){
            if(freq[i]>0){
                t += string(freq[i],i+'a');
            }
        }
        return t;
    }
};