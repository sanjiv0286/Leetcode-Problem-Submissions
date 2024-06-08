class Solution {
public:
    string clearDigits(string s) {

        int n = s.size();

        for(int i=1;i<n;i++){
          
            if(isdigit(s[i])){
                s.erase(i-1,2);
                i -=2;
            }
              n = s.size();
        }
        return s;
        
    }
};