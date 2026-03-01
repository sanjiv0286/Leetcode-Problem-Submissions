class Solution {
public:
    int minPartitions(string n) {
        vector<int>res;
        for(auto &x:n){
            res.push_back((x-'0'));
        }
        auto maxi = *max_element(res.begin(),res.end()); 
        return maxi;
    }
};