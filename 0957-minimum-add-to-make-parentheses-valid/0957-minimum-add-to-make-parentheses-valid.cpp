class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st; 
        for (char x : s) {
            if (x == '(') {
                st.push(x);
            } else {
                if (!st.empty() && st.top() == '(') {
                    st.pop();
                } else {
                    st.push(x);
                }
            }
        }
        
        return st.size();
    }
};

