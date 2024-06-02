class Solution {
public:
    void reverseString(vector<char>& v) {
int n = v.size();
        string s ="";
        for(int i=0;i<n;i++){
            s += v[i];

        }
        reverse(s.begin(),s.end());
        for(int i=0;i<n;i++){
            v[i]=s[i];
        }
    }
};