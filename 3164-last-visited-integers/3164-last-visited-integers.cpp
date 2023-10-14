class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& w) {
        int ct=0;
        vector<int>v;
        vector<int>ans;
        for(int i=0;i<w.size();i++){
            // int k = v.size();
            if(w[i]=="prev"){
                ct++;
                if(ct>v.size()){
                    ans.push_back(-1);
                }
                else{
                    ans.push_back(v[v.size()-ct]);
                }

            }
            else{
                ct=0;
                v.push_back(stoi(w[i]));
            }
        }
        return ans;
        
        
    }
};