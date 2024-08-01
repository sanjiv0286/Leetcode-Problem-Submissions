class Solution {
public:
    int countSeniors(vector<string>& s) {
        int n = s.size();
        int ct=0;
        for (int i = 0; i < n; i++) {
            // string res = 
            int ans = (s[i][11] -'0')*10+( s[i][12]-'0');
            if(ans >60){
                ct++;
            }
        }
        return ct;

    }
};