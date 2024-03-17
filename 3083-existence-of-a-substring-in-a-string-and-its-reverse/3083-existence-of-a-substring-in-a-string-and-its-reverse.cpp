

class Solution {
public:
    bool palindrome(string t) {
        string a = t;
        reverse(a.begin(), a.end());
        return a == t;
    }

    bool isSubstringPresent(string s) {
        int n = s.size();
        if(n==1){
            return false;
        }
        if (palindrome(s)) {
            return true;
        }

        // for (int len = 2; len <= n; len++) {
        //     for (int i = 0; i <= n - len; i++) {
        //         string t = s.substr(i, len);
                // if (palindrome(t)) {
                //     return true;
                // }
        //     }
        // }
        for(int i=0;i<n-1;i++){
            string t = s.substr(i,2);
            reverse(t.begin(),t.end());
            if(s.find(t)!=string::npos){
                return true;
            }
        }
        return false;
    }
};
