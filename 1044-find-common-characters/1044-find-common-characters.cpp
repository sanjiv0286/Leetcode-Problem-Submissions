class Solution {
public:
    vector<string> commonChars(vector<string>& a) {
        // write your code here
        vector<string>res;     
        // sort(a.begin(), a.end());

        
        int n = a.size();
       
        for(auto &c:a[0]){
             bool common=true;
            for(int i=1;i<n;i++){
                if(a[i].find(c)==string::npos){
                    common = false;
                break;
                } else {
                    a[i].erase(a[i].find(c), 1);
                }
            }
            if(common){
                res.push_back(string(1,c));
                
            }
            
        }
        return res;
    }
};