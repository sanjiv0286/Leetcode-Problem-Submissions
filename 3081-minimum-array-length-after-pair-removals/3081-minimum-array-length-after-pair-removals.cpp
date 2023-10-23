class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        int n= nums.size();
        // if(n%2==0){
        //     return 0;
        // }
        // else{
        //     return 1;
        // }
        // fail at ip like 2 2 2 2 
        unordered_map<int,int>m;
        for(auto & x: nums){
            m[x]++;

        }
        int maxi =0;
        for(auto &x: m){
            maxi=max(maxi,x.second);
        }
        if(maxi<=n/2){
            if(n%2==0){
                return 0;
            }
            else{
                return 1;
            }
        }
        else
        return 2*maxi-n;
    }
};