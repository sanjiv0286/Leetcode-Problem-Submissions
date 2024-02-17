class Solution {
public:
    string lastNonEmptyString(string s) {
        int n=s.size();
        map<char,int>m;
        for(auto &x:s){
            m[x]++;
        }
        int maxi = INT_MIN;
        for(auto &x:m){
            maxi = max(maxi,x.second);
        }
        string t="";
        // if(mini ==1){
        //     return s;
        // }
        for(int i = n-1;i>=0;i-- ){
            char x =s[i];
            if(m[x]==maxi){
                t = x+t;
                m[x]--;
            }
        }
        return t;
        
    }
};
