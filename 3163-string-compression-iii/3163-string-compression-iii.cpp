class Solution {
public:
    string compressedString(string word) {

        int n = word.size();
     
        int ct = 0;
        int cons = word[0];

        string ans = "";
           if(n==0){
            return ans ;
        }
        for (int i = 0; i < n; i++) {
            int ch = word[i];
            if (ch == cons && ct < 9) {
                ct++;
            } else {
                ans += to_string(ct);
                ans.push_back(cons);
                cons = ch;
                ct = 1;
            }
        }
        ans += to_string(ct);
        ans.push_back(cons);
        return ans ;
    }
};