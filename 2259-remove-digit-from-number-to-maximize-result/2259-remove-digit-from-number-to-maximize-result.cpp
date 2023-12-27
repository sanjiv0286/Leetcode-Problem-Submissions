

class Solution {
public:
    string removeDigit(string s, char d) {
        string res="";
        vector<string>ans;
        int n = s.size();
        for(int i=0;i<=s.size();i++){
            if(s[i]==d) {
            string res= s.substr(0,i);
            res += s.substr(i+1,n-i-1);
            ans.push_back(res);
            }
        }
        sort(ans.begin(),ans.end());
        return ans[ans.size()-1];
    }
};