class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>m;
        for(int i=0;i<s.size();i++ ){
            m[s[i]]++;
        }
        int ct=0;
        int val = m[s[0]];
        for(int i=0;i<s.size();i++){
            if(m[s[i]]==val){
                ct++;
            }
        }
        return (ct==s.size());
        
    }
};