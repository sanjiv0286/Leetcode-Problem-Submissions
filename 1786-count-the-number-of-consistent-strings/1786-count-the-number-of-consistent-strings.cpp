class Solution {
public:
    int countConsistentStrings(string a, vector<string>& w) {

        int n = a.size();
        int m = w.size();
        int ct=0;
        for(int i=0;i<m;i++){
            bool flag = true;
            for(auto &x:w[i]){
                if(a.find(x)==string::npos){
                    flag = false;
                }
                
            }
            if(flag == true)
            {
                ct++;
            }
            

        }
        return ct;
        
    }
};