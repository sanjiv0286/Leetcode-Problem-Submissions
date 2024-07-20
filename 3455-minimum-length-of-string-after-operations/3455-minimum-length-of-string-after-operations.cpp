

// class Solution {
// public:
//     int minimumLength(string s) {
//         int n = s.size();
//         if (n < 3) {
//             return n;
//         }
//         unordered_map<char, int> m;
//         for (auto& x : s) {
//             m[x]++;
//         }
//         // sort(m.begin(),m.end());
//         int sum = 0;
//         for (auto& x : m) {
//             if (x.second > 2) {
//                 m[x.first] -= 2;
//                 sum += x.second;
//             }
//         }
//         return sum;
//     }
// };


class Solution {
public:
    int minimumLength(std::string s) {
        std::unordered_map<char, int> m;
        
        for (char c : s) {
            m[c]++;
        }
        
        int ans = 0;
        for (const auto& pair : m) {
            if (pair.second % 2 == 1) {
                ans++;  
            } else {
                ans += 2;  
            }
        }
        
        return ans;
    }
};

