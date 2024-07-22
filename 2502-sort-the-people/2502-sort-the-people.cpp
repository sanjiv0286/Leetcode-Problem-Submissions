// class Solution {
// public:
//     bool comp(pair<int, string> a, pair<int, string> b) {
//         return a.first > b.first;
//     }

//     vector<string> sortPeople(vector<string>& name, vector<int>& h) {
//         int n = name.size();
//         vector<string> ans;
//         unordered_map<int, string> m;
//         for (int i = 0; i < n; i++) {
//             m[h[i]] = name[i];
//         }
//         sort(m.begin(), m.end(), comp);
//         for (auto& x : m) {
//             ans.push_back(x.second);
//         }
//         return ans;
//     }
// };

#include <algorithm>
#include <string>
#include <vector>

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<pair<int, string>> people;

        for (int i = 0; i < n; i++) {
            people.push_back({heights[i], names[i]});
        }

        // sort(people.begin(), people.end(),
        //      [](pair<int, string>& a, pair<int, string>& b) {
        //          return a.first > b.first;
        //      });
        sort(people.begin(),people.end(), greater<pair<int, string>>());

        vector<string> ans;
        for (auto& p : people) {
            ans.push_back(p.second);
        }

        return ans;
    }
};
