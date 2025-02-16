class Solution {
public:
    void reverseString(vector<char>& s) {

        int n = s.size();

        string t ="";

        for(int i=0;i<n;i++){
            t+=s[i];
        }

        reverse(t.begin(),t.end());

        for(int i=0;i<n;i++){
            s[i] = t[i];
        }
        
    }
};