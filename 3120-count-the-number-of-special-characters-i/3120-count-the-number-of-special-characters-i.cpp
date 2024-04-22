#include <string>
#include <unordered_set>
using namespace std;

class Solution {
public:
    static int numberOfSpecialChars(string word) {
        unordered_set<char> s1, s2;
        for (char x : word) {
            if (islower(x))
                s1.insert(x);
            else if (isupper(x))
                s2.insert(tolower(x));
        }
        int count = 0;
        for (char c : s1) {
            if (s2.count(c) > 0) {
                count++;
            }
        }
        return count;
    }
};



