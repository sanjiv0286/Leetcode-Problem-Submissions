class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>res;
        unordered_map<int,int>m;
        for(auto &x:nums){
            m[x]++;
        }
        vector<pair<int,int>>p(m.begin(),m.end());
        // lamda function in c++
        sort(p.begin(),p.end(),[](const pair<int,int>&a,const pair<int,int>&b){
            return a.second >b.second;
        });
        
        for(int i=0;i<k&&i<p.size();i++){
             res.push_back(p[i].first);    
        }
        return res;
        
    }
};