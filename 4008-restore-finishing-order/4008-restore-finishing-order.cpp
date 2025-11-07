class Solution {
public:
    vector<int> recoverOrder(vector<int>& o, vector<int>& f) {
        unordered_set<int>st(f.begin(),f.end());
        vector<int>res;
        for(auto &x:o){
            if(st.count(x)==1)
            res.push_back(x);
        }
        return res;

    }
};