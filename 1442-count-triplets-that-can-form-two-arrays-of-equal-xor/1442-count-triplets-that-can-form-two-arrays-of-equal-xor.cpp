class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n =arr.size();
        vector<int> pref(n+1,0);
        for(int i=1 ; i<=n;i++){
            pref[i] = pref[i-1]^arr[i-1];
        }
        int cnt =0;
        for(int i=0 ;i<n;i++){
            for(int j = i+1 ;j<n;j++){
                if(pref[i] == pref[j+1])
                cnt += (j-i);
            }
        }
        return cnt;
    }
};