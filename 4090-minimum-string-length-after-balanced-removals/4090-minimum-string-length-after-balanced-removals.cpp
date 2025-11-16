class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int n = s.size();
        int ct=0;
        int ct2=0;
        for(auto &x:s){
            if(x=='a'){
                ct++;
            }
            else{
                ct2++;
            }
        }
        return abs(ct2-ct);

    }
};