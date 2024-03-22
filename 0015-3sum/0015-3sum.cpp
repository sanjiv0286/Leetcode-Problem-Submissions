class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
        int n = v.size();
         vector<vector<int>>res;
         sort(v.begin(),v.end());
        for(int i=0;i<n-2;i++){
            if (i > 0 && v[i] == v[i - 1]) // Skip duplicates
                continue;
            int l = i+1;
            int r = n-1;
            int target = -(v[i]);
            while(l<r){
                int sum = v[l]+v[r];
                if(sum == target){
                    res.push_back({v[i],v[l],v[r]});
                    while(l<r && v[l]==v[l+1]){ // Skip duplicates
                        l++;
                    }
                    while(l<r && v[r]==v[r-1]){ // Skip duplicates
                        r--;
                    }
                    l++;
                    r--;
                }
                else if(sum < target){
                    l++;
                }
                else{
                    r--;
                }
            }

        }
        return res;
        
    }
};