class Solution {
public:
    // string longestCommonPrefix(vector<string>& strs) {
    //     int n = strs.size();
    //     string res = "";
    //     if(n==1){
    //         return strs[0];
    //     }
    //     for (auto& x : strs[0]) {
    //         for (int i = 1; i < n; i++) {
    //             // int
    //             if (strs[i].find(x) == string::npos) {

    //                 return res;
    //             }
    //         }

    //         res += x;
    //     }
    //     return res;
    // }
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
            return "";

        string prefix = strs[0];

        for (size_t i = 0; i < prefix.length(); ++i) {
            char currentChar = prefix[i];
            for (size_t j = 1; j < strs.size(); ++j) {
                if (i >= strs[j].length() || strs[j][i] != currentChar) {
                    return prefix.substr(0, i);
                }
            }
        }

        return prefix;
    }
};