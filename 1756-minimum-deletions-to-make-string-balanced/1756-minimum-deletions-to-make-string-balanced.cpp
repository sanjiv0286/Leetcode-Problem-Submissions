class Solution {
public:
    int minimumDeletions(string s) {
        int ct = 0;

        stack<char> st;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (!st.empty() && s[i] == 'a' && st.top() == 'b') {
                st.pop();
                ct++;
            } else {
                st.push(s[i]);
            }
        }
        return ct;
    }
};