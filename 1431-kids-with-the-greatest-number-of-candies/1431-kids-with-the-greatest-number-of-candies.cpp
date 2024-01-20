class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int ec) {
        int n = c.size();
        // int maxi = *max_element(c.begin(), c.end());
        int maxi = c[0];
        for(int i=1;i<n;i++){
            if(c[i]>=maxi){
                maxi = c[i];
            }
        }
        vector<bool> tfarr;
        for (int i = 0; i < n; i++) {
            // if (c[i] + ec >= maxi) {
            //     tfarr.push_back(true);
            // } else {
            //     tfarr.push_back(false);
            // }
             tfarr.push_back(c[i] + ec >= maxi);
        }
        return tfarr;
    }
};