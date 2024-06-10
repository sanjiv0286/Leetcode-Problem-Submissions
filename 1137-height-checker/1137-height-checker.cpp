class Solution {
public:
    int heightChecker(vector<int>& h) {
        int ct=0,n = h.size();
        vector<int>exp(h.begin(),h.end());
        sort(exp.begin(),exp.end());
        for(int i=0;i<n;i++){
            if(exp[i]!=h[i]){
                ct++;
            }
        }
        return ct;
        
    }
};