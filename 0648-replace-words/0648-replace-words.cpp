// class Solution {
// public:
//     string replaceWords(vector<string>& d, string s) {
//         int n = d.size();
//         int m = s.size();
//         stack<string> st;
//         string res = "";
//         for (int i = 0; i < m; i++) {
//             if (s[i] == ' ') {
//                 st.push(res);
//                 res = "";
//             } else {
//                 res += s[i];
//                 // if(d.find())
//                 auto it = find(d.begin(), d.end(), res);
//                 if (it != d.end()) {
//                     st.push(res);
//                 }
//             }
//         }
//         stack<string> st2;

//         while (!st.empty()) {
//             string ele = st.top();
//             st.pop();
//             st2.push(ele);
//         }
//         string ans = "";

//         while (!st2.empty()) {
//             string ele = st2.top();
//             ans += ele;
//             ans += ' ';
//             st2.pop();
//         }
//         //  ans[ans.size()-1] = '' ;
//         if (!ans.empty() && ans.back() == ' ') {
//             ans.pop_back(); // remove the trailing space
//         }
//         return ans;
//     }
// };





class Solution {
public:
    string replaceWords(vector<string>& d, string s) {
        unordered_set<string> dictionary(d.begin(), d.end());
        stringstream ss(s);
        string word;
        string result;
        
        while (ss >> word) {
            string prefix;
            for (int i = 1; i <= word.size(); ++i) {
                prefix = word.substr(0, i);
                if (dictionary.find(prefix) != dictionary.end()) {
                    break;
                }
            }
            if (!result.empty()) {
                result += " ";
            }
            result += prefix;
        }
        
        return result;
    }
};

