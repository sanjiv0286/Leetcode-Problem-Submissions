class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<int,int>m;
        for(auto &x:s){
            m[x]++;
        }
        int ct=0;
        for(auto &x:m){
            if(x.second%2==0){
                ct += x.second;
            }
            else {
                ct+= x.second-1;
            }
        }
        if(s.size()>ct){
            ct++;
        }
        return ct;
    }
};