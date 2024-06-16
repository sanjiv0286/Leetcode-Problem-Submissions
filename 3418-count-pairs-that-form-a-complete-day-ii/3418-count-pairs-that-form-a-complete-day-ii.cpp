class Solution {
public:
    long long countCompleteDayPairs(vector<int>& h) {
        unordered_map<int,int>m;
        long long int ct=0;
        for(auto &x:h){
            int r = (x)%24;
            int c = (24-r)%24;

            if(m.find(c)!=m.end()){
                ct += m[c];
            }
            m[r]++;
        }
        return ct;
        
    }
};