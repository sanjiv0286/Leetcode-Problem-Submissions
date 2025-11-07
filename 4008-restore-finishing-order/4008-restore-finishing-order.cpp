class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int n = order.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[order[i]]=i;
        }
        vector<int>res;
        for(auto &x:friends){
            res.push_back(mp[x]);
        }
        sort(res.begin(),res.end());
        for(int i=0;i<friends.size();i++){
            res[i] = order[res[i]];
        }
        return res;
        
    }
};
