class Solution {
public:
    int findMinDifference(vector<string>& t) {
        int mini = INT_MAX;
        vector<int>time_min;
        for(auto &x:t){
            int hr = 10*(x[0]-'0')+(x[1]-'0');
            int min = 10*(x[3]-'0')+(x[4]-'0');
            time_min.push_back(hr*60+min);
        }
        int n = time_min.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int diff = abs(time_min[i]-time_min[j]);
                mini = min({mini,diff,1440-diff});
            }
        }
        return mini;


    }
};