class Solution {
public:
    int numOfStrings(vector<string>& p, string w) {
        int ct=0;
        int n = p.size();
        for(int i=0;i<n;i++){
            auto it = w.find(p[i]);
            if(it != string::npos ){
                ct++;
            }
        }
        return ct;
    }
};