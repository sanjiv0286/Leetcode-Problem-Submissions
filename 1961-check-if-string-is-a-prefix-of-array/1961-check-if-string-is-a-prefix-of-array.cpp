class Solution {
public:
    bool isPrefixString(string s, vector<string>& w) {
        int n = s.size();
        string tem ="";
        for(int i=0;i<w.size();i++){
            tem += w[i]; 
            if(tem.size()==s.size()&& tem ==s){
                return true;
            }
        }
        return false;
        
    }
};