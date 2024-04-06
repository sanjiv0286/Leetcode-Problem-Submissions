class Solution {
public:
    bool matching (char a,char b){
        return ((a=='('&&b==')'));
    }


    string minRemoveToMakeValid(string s) {
        stack<char>s1;
        stack<char>s2;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(isalpha(s[i])||s[i]=='('){
                if(s[i]=='('){
                    s2.push(s[i]);
                }
                s1.push(s[i]);

            }
            else{
                if(!s2.empty() && matching(s2.top(),s[i])){
                    s2.pop();
                    s1.push(s[i]);
                }
                // else{
                //     continue;
                // }
            }


        }
        string t ="";
        // while(!s1.empty()){
        //     t+=s1.top();
        //     s1.pop();
        // }
          while (!s1.empty()) {
            if (s1.top() == '(' && !s2.empty()) {
                s1.pop();
                s2.pop();
            } else {
                t += s1.top();
                s1.pop();
            }
        }
        reverse(t.begin(),t.end());
        return t;

        
    }
};
