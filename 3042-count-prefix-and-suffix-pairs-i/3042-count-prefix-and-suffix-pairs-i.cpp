class Solution {
public:
    
    bool prefixSuffix(string &s1,string &s2){
        int n1 = s1.size();
        int n2 = s2.size();
        if(n1>n2){
            return false;
        }
        for(int i=0;i<n1;i++){
            if(s1[i]!=s2[i] || s1[i]!=s2[n2-n1+i]){
                return false;
            }
        }
        return true;
    }
    
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();
        int ct=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(prefixSuffix(words[i],words[j])&&(i<j)){
                    ct++;
                }   
            }
        }
        return ct;
        
    }
};