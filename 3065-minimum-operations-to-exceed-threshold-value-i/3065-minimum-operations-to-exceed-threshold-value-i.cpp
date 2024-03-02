class Solution {
public:
    int minOperations(vector<int>& v, int k) {
        int n = v.size();
        int ans=0;
        // sort(v.begin(),v.end());
       
        for(int i=0;i<n;i++){
            if(v[i]<k){
                // ans =i;
                // break;
                ans++;
            }
        }
        return ans;
        
    }
};