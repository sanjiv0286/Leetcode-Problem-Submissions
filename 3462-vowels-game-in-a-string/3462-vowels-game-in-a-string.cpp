#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool isvowel(char a) {
        return a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u';
    }
    
    bool doesAliceWin(string s) {
        int oddVowelSubstrings = 0;
        int evenVowelSubstrings = 0;
        int n = s.size();
        vector<int> vowelPrefixSum(n + 1, 0);

        for (int i = 0; i < n; i++) {
            vowelPrefixSum[i + 1] = vowelPrefixSum[i] + isvowel(s[i]);
        }

        for (int i = 0; i <= n; i++) {
            if (vowelPrefixSum[i] % 2 == 0) {
                evenVowelSubstrings++;
            } else {
                oddVowelSubstrings++;
            }
        }

        return oddVowelSubstrings > 0;
    }
};
// **********************************************
// class Solution {
// public:
//     bool doesAliceWin(string s) {
//         int cnt=0;
//         for(auto i:s){
//             if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u')cnt++;
//         }
//         if(cnt==0)return 0;
//         return 1;;
//     }
// };

