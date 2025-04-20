class Solution {
public:
    int maximumPossibleSize(vector<int>& v) {
        int n = v.size(); 
        int ct =0;
        int x = v[0];
        for(int i=1;i<n;i++){
            if(x<=v[i]){
                ct++;
                x = v[i];
            }
        }
        return ct+1;
    }
};