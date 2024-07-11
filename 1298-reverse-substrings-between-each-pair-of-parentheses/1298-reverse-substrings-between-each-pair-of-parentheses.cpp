class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>st;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(i);
            }
            else if(s[i]==')'){
               int  l = st.top()+1;
               int r = i;
               reverse(s.begin()+l,s.begin()+r);
               st.pop();
            }
        }
        string ans ="";
        for(int i=0;i<n;i++){
            if(s[i]=='('|| s[i]==')'){
                continue;
            }
            else{
                ans+= s[i];
            }
        }
        return ans ;
    }
};