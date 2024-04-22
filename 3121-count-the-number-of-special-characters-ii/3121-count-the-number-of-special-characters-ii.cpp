// class Solution {
// public:
//     int numberOfSpecialChars(string word) {
//         int n = word.size();
//         map<char, int> low, up;
//         for (int i = 0; i < n; i++) {
//             if (isupper(word[i])) {
//                 up[word[i]] = i;
//             }
//         }
//         for (int i = n-1; i >= 0; i--) {
//             if (islower(word[i])) {
//                 low[word[i]] = i;
//             }
//         }
//         //  for (int i = 0; i <n; i++) {
//         //     if (islower(word[i])) {
//         //         low[word[i]] = i;
//         //     }
//         // }
//         int ct = 0;
//         // for (auto& x : word) {
//         //     if (low[x] < up[x]) {
//         //         ct++;
//         //     }
//         // }
//         for (auto& pair : low) {
//             char x = pair.first;
//             if (up.find(toupper(x)) != up.end() && up[toupper(x)] > low[x]) {
//                 ct++;
//             }
//         }
//         return ct;
//     }
// };
// ********************************************************************
#include <string>
#include <map>
#include <cctype>

using namespace std;

class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n = word.size();
        map<char, int> low, up;
        
        for (int i = 0; i < n; i++) {
            if (islower(word[i])) {
                low[word[i]] = i;
            }
            else if (isupper(word[i])) {
                if(up.find(word[i])==up.end())
                up[word[i]] = i;
            }
        }
        
        int ct = 0;
        
        for (auto& pair : low) {
            char x = pair.first;
            if (up.find(toupper(x)) != up.end() && up[toupper(x)] > low[x]) {
                ct++;
            }
        }
        
        return ct;
    }
};
