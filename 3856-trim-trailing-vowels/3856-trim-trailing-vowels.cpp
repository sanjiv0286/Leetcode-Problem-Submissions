class Solution {
public:
    bool isVowel(char ch) {
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }

    string trimTrailingVowels(string s) {
        stack<char> st;
        for (auto& x : s) {
            st.push(x);
        }
        while (!st.empty()) {
            if (isVowel(st.top())) {
                st.pop();
            } else {
                break;
            }
        }
        string t="";
        while (!st.empty()) {
            t += st.top();
            st.pop();
        }
        reverse(t.begin(), t.end());
        return t;
    }
};