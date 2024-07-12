// class Solution {
// public:
//     int maximumGain(string s, int x, int y) {
//         stack<char> st;
//         int g = 0;
//         int n = s.size();
//         int i = 0;
//         if (x > y) {

//             while (i < n) {
//                 if ( !st.empty() && st.top() == 'a' && s[i] == 'b') {
//                     g += x;
//                     st.pop();
//                 } else {
//                     st.push(s[i]);
//                 }
//                 i++;
//             }

//             for (int i = n - 1; i >= 1; i--) {
//                 if (!st.empty() && s[i] == 'b' && s[i - 1] == 'a') {
//                     g += y;
//                     st.pop();
//                     st.pop();
//                 }
//             }

//         } else {

//             while (i < n) {

//                 if (!st.empty() && st.top() == 'b' && s[i] == 'a') {
//                     g += y;
//                     st.pop();
//                 } else {
//                     st.push(s[i]);
//                 }
//                 i++;
//             }

//             for (int i = n - 1; i >= 1; i--) {
//                 if (!st.empty() && s[i] == 'a' && s[i - 1] == 'b' ) {
//                     g += x;
//                     st.pop();
//                     st.pop();
//                 }
//             }
//         }

//         return g;
//     }
// };

// ***********************************************************************

class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int g = 0;
        int n = s.size();
        stack<char> st;

        if (x > y) {
            // Remove "ab" first
            for (int i = 0; i < n; i++) {
                if (!st.empty() && st.top() == 'a' && s[i] == 'b') {
                    g += x;
                    st.pop();
                } else {
                    st.push(s[i]);
                }
            }

            // Rebuild string from stack
            string rem;
            while (!st.empty()) {
                rem += st.top();
                st.pop();
            }
            reverse(rem.begin(), rem.end());

            // Remove "ba" from remaining string
            for (int i = 0; i < rem.size(); i++) {
                if (!st.empty() && st.top() == 'b' && rem[i] == 'a') {
                    g += y;
                    st.pop();
                } else {
                    st.push(rem[i]);
                }
            }
        } else {
            // Remove "ba" first
            for (int i = 0; i < n; i++) {
                if (!st.empty() && st.top() == 'b' && s[i] == 'a') {
                    g += y;
                    st.pop();
                } else {
                    st.push(s[i]);
                }
            }

            // Rebuild string from stack
            string rem;
            while (!st.empty()) {
                rem += st.top();
                st.pop();
            }
            reverse(rem.begin(), rem.end());

            // Remove "ab" from remaining string
            for (int i = 0; i < rem.size(); i++) {
                if (!st.empty() && st.top() == 'a' && rem[i] == 'b') {
                    g += x;
                    st.pop();
                } else {
                    st.push(rem[i]);
                }
            }
        }

        return g;
    }
};
