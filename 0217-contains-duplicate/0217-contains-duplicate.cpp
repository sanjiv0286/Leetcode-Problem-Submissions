class Solution {
public:
    bool containsDuplicate(vector<int>& v) {
        unordered_map<int,int>m;
        for(auto &x:v){
            m[x]++;

        }
        for(auto &x:m){
            if(x.second>=2){
                return true;
            }
        }
        return false;
    }
};