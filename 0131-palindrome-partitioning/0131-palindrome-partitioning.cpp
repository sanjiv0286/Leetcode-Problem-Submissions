class Solution {
public:
    
    bool  ispalindrome(string s,int l,int r){
        while(l<r){
            if(s[l]!=s[r]){
                return false;
            }
            l++;
            r--;
            
        }
        return true;
    }
    
   void  backtrack(string &s,int idx,vector<string>&curr,vector<vector<string>>&res)
    {
       int n =s.size();
        if(idx==n){
            res.push_back(curr);
            return;
            
        }
        for(int i=idx;i<s.size();i++){
            
            if(ispalindrome(s,idx,i)){
                curr.push_back(s.substr(idx,i-idx+1));
                backtrack(s,i+1,curr,res);
                curr.pop_back();
            }
            
        }
    
    }    
    
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>>res;
        vector<string >curr;
        backtrack(s,0,curr,res);
        return res;
    }
};