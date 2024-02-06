class Solution {
public:
     bool checkIfPangram (string s) {
        unordered_set<char> ss;
        transform(s.begin(), s.end(), s.begin(), ::tolower); 
        for(auto &x:s){

            if((x>='a' && x<='z'))
                ss.insert(x);
        }
        return (ss.size() == 26);
        
    }
};